const express = require('express')
const session = require('express-session')
const viewejs = require('ejs')
const app = express()

var glob = 0
var globid = 0

app.use(express.static("public"))
app.use(express.urlencoded({ extended: true }));

app.use(session({
    secret: "velika tajna",
    resave: false,
    saveUninitialized: true
}))

app.set('views', 'views')
app.set('view engine', 'ejs')

app.get('/', (req, res) => {
    if (!req.session.lista) {
        req.session.lista = {
            "categories": [{
                "name" : "Work", 
                "todos" : []
            },
            {
                "name" : "Movies and books", 
                "todos" : []
            },
            {
                "name" : "Fun", 
                "todos" : []
            },
            {
                "name" : "Sports", 
                "todos" : []
            },
            ]        
        }
    }
    var noTodos = 0
    for (let cat of req.session.lista.categories) {
        noTodos += cat.todos.length
    }
    res.render("index", {lista: req.session.lista, br1: noTodos, br2: glob})
})

app.post('/add', (req, res) => {
    if (!req.session.uk)
        req.session.uk = 0
    var lista = req.session.lista
    var today = new Date()
    for (let cat of lista.categories) {
        if (cat.name == req.body.ime) {
            cat.todos.push({opis: req.body.opis, datum: today.toLocaleDateString(), id: globid})
            console.log(cat.todos)
            req.session.uk++
            break
        }
    }
    req.session.lista = lista
    glob++
    globid++
    res.redirect('/')
})

app.post('/delete/:id', (req, res) => {
    var lista = req.session.lista
    var id = req.params.id
    for (let cat of lista.categories) {
        for (var i = 0; i < cat.todos.length; i++) {
            if (cat.todos[i].id == id) {
                cat.todos.splice(i, 1)
                break
            }
        }
    }
    req.session.lista = lista
    glob--
    res.redirect('/')
})

app.listen(3000)