document.getElementById("ime").value = localStorage.getItem("1")
document.getElementById("mail").value = localStorage.getItem("2")
document.getElementById("feedback").value = localStorage.getItem("3")

var b1 = document.getElementById("b1")
b1.addEventListener('click', saveDraft)
var b2 = document.getElementById("b2")
b2.addEventListener('click', submit)

function saveDraft(target){
    var name = document.getElementById("ime").value
    var email = document.getElementById("mail").value
    var feedback = document.getElementById("feedback").value
    localStorage.setItem("1", name)
    localStorage.setItem("2", email)
    localStorage.setItem("3", feedback)
}

function submit(target){
    var name = document.getElementById("ime").value
    var email = document.getElementById("mail").value
    var feedback = document.getElementById("feedback").value
    if (name.length == 0 || feedback.length == 0){
        alert("Not all fields were correctly input!")
    }
    else {
        var emaily = email.split("@")
        if (emaily.length != 2) {
            alert("Not all fields were correctly input!")
        } else {
            if (emaily[0] == "" || emaily[1] == ""){
                alert("Not all fields were correctly input!")
            }
        }
    }
}