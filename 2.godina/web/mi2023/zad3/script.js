async function loadBoth() {
    let promise1 = await fetch("first.json")
    var list1 = await promise1.json()
    let promise2 = await fetch("second.json")
    var list2 = await promise2.json()
    console.log(list1)
    console.log(list2)
    
    var presjek = []
    Object.keys(list1).forEach(key => {
        for(i=0; i < list2.length; i++){
            if (list2[i] == list1[key]){
                presjek.push(list1[key])
            }
        }
    })
    return presjek
}
 
loadBoth().then(msg => {
    console.log(msg)
})