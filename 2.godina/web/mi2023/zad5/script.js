var sve = document.getElementById("container")
if (localStorage.length>0){
    sve.style.opacity = 0;
}

var b1 = document.getElementById("b1")
b1.addEventListener('click', accept)
var b2 = document.getElementById("b2")
b2.addEventListener('click', reject)

function accept(target) {
    localStorage.setItem("accepted", "1")
    sve.style.opacity = 0;
}

function reject(target) {
    localStorage.setItem("accepted", "0")
    sve.style.opacity = 0;
}