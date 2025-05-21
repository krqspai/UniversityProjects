const express = require('express');
const app = express();
var path = require('path');

app.set('views', path.join(__dirname, 'views'));
app.set('view engine', 'ejs');

app.use(express.static(path.join(__dirname, 'public')));
app.use(express.urlencoded({ extended: true }));

var x=1
var catName
var nickname;
var email;
var lista = {
    "categories": [{
        "name" : "Outdoors",
        "image" : "images/Outdoors.jpg",
        "subs" : []
    },
    {
        "name" : "Sports",
        "image" : "images/Sports.jpg",
        "subs" : []
    },
    {
        "name" : "Pizzas",
        "image" : "images/Pizzas.jpg", 
        "subs" : []
    },
    {
        "name" : "Woks",
        "image" : "images/Woks.jpg", 
        "subs" : []
    },
    {
        "name" : "Politics",
        "image" : "images/Politics.jpg", 
        "subs" : []
    },
    {
        "name" : "Technology",
        "image" : "images/Technology.jpg", 
        "subs" : []
    },
    {
        "name" : "Pets",
        "image" : "images/Pets.jpg", 
        "subs" : []
    },
    {
        "name" : "BBQ",
        "image" : "images/BBQ.jpg", 
        "subs" : []
    },
    ]        
}

app.get('/', (req, res) => {
    res.render('index', {lista: lista})
})

app.get('/subscribe/:name', (req, res) => {
    res.render('subs', {catName: req.params.name, nickname: nickname, email: email, err: x})
})

app.post('/subscribe/add/:name', (req, res) => {
    catName = req.params.name
    nickname = req.body.nickname
    email = req.body.email
    x=1
    var cat
    for (var i = 0; i<8; i++){
        if(lista.categories[i].name == catName){
            cat = lista.categories[i]
        }
    }
    for (sub of cat.subs){
        if (sub.nickname == nickname && sub.email == email) {
            x=0
            res.redirect(`/subscribe/${catName}`)
        }
    }
    if (x==1) {
        cat.subs.push({nickname: nickname, email: email})
        console.log(cat.subs)
        res.redirect('/')
    }
    
})

/* sretno... */

app.listen(3000);