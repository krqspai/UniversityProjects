import torch
import torch.nn as nn
import torch.nn.functional as F
from torchvision import transforms
from PIL import Image, ImageTk
import tkinter as tk
from tkinter import filedialog, Label, Button

class ConvolutionalNetwork(nn.Module):
  def __init__(self):
    super().__init__()
    self.conv1 = nn.Conv2d(3, 16, 3, 1)
    self.bn1 = nn.BatchNorm2d(16)
    self.conv2 = nn.Conv2d(16, 32, 3, 1, 1)
    self.bn2 = nn.BatchNorm2d(32)
    self.conv3 = nn.Conv2d(32, 64, 3, 1, 1)
    self.bn3 = nn.BatchNorm2d(64)
    self.conv4 = nn.Conv2d(64, 128, 3, 1, 1)
    self.bn4 = nn.BatchNorm2d(128)
    self.dropout = nn.Dropout(0.3)
    self.fc1 = nn.Linear(128 * 7 * 7, 512)
    self.fc2 = nn.Linear(512, 43)

  def forward(self, X):
    X = F.relu(self.bn1(self.conv1(X)))
    X = F.relu(self.bn2(self.conv2(X)))
    X = F.max_pool2d(X, 2, 2)
    X = F.relu(self.bn3(self.conv3(X)))
    X = F.relu(self.bn4(self.conv4(X)))
    X = F.max_pool2d(X, 2, 2)

    X = X.view(-1, 128 * 7 * 7)

    X = self.dropout(F.relu(self.fc1(X)))
    X = self.fc2(X)
    return F.log_softmax(X, dim=1)

model = ConvolutionalNetwork()
model.load_state_dict(torch.load('TrafficSignsCNN6.pth', map_location=torch.device('cpu')))
model.eval()

transform = transforms.Compose([
    transforms.Resize((32, 32)),
    transforms.ToTensor()
])

def predict_image(path):
    img = Image.open(path).convert('RGB')
    img = transform(img).unsqueeze(0)
    with torch.no_grad():
        output = model(img)
        #pred = output.argmax(dim=1, keepdim=True).item()
    return output

def open_file():
    file_path = filedialog.askopenfilename()
    if file_path:
        img = Image.open(file_path).resize((100, 100))
        tk_img = ImageTk.PhotoImage(img)
        image_label.config(image=tk_img)
        image_label.image = tk_img
        prediction_tensor = predict_image(file_path)
        prediction = prediction_tensor.argmax(dim=1, keepdim=True).item()
        result_label.config(text=f"Predikcija: {classes[prediction]} \nTensor: {prediction_tensor}")

classes = ["Ograničenje 20 km/h",
           "Ograničenje 30 km/h",
           "Ograničenje 50 km/h",
           "Ograničenje 60 km/h",
           "Ograničenje 70 km/h",
           "Ograničenje 80 km/h",
           "Prestanak ograničenja 80 km/h",
           "Ograničenje 100 km/h",
           "Ograničenje 120 km/h",
           "Zabranjeno pretjecanje",
           "Zabranjeno pretjecanje vozilima iznad 3.5 tona",
           "Pravo prvenstva na raskrižju",
           "Cesta s prednošću prolaska",
           "Cesta bez prednosti prolaska",
           "Stop",
           "Zabranjen prolaz svim vozilima",
           "Zabranjen prolaz vozilima iznad 3.5 tona",
           "Zabranjen ulazak u tom smjeru",
           "Generalno upozorenje",
           "Oštri zavoj ulijevo",
           "Oštri zavoj udesno",
           "Dvostruki zavoj",
           "Grbavi kolnik",
           "Skliski kolnik",
           "Suženje s desne strane",
           "Radovi na cesti",
           "Semafor u blizini",
           "Pješaci",
           "Djeca prelaze cestu",
           "Bicikli prelaze cestu",
           "Snijeg ili poledica",
           "Divlje životinje prelaze cestu",
           "Prestanak svih ograničenja",
           "Obavezno skretanje ulijevo",
           "Obavezno skretanje udesno",
           "Obavezan nastavak ravno",
           "Obavezan nastavak ravno ili skretanje udesno",
           "Obavezan nastavak ravno ili skretanje ulijevo",
           "Obilazak s desne strane",
           "Obilazak s lijeve strane",
           "Obavezan smjer u kružnom toku",
           "Prestanak zabrane pretjecanja",
           "Prestanak zabrane pretjecanja vozilima iznad 3.5 tona"]

root = tk.Tk()
root.title("Sustav za raspoznavanje prometnih znakova")
root.geometry("800x500")
root.resizable(0, 0)

Button(root, text="Prenesite sliku", command=open_file).pack(pady=10)
image_label = Label(root)
image_label.pack(pady=10)
result_label = Label(root, text="Ovdje će se pojaviti predikcija", font=('Arial', 14))
result_label.pack(pady=10)

root.mainloop()
