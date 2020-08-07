//store a function into a variable//
function sayName(name)
{
    return 'Hello ' + name;
}
var hello=sayName;
var anotherHello=hello; //storing function in different variables//
console.log(anotherHello('Yasin Rabby'));


function addIt(a,b)
{
    return "Sum is ";
  
}

var x=addIt;
var y=x;
console.log(y(2,3));

//store a function intop an array//

var arr=[1,2,3];
arr.push("Rabby");
console.log(arr);
arr.shift();
console.log(arr);

//A function can be stored as an object field//
let person=
{
    name:'Rabby',
    sayName:sayName
}
console.log(person);

var Res=
{
    name:"Yasin",
    Roll:"ASH1901034M",
    print: function()
    {
        console.log("Hello Rabby");
    }
}
console.log(Res);
//We can create function as needed//
//when we need string we use string//
var sum=10+(function(){return 20})();//self invoking function//
console.log(sum);
//we can pass a function as an argument//
function helLo(name)
{
    return name;
}
console.log(helLo('Rabby'));

function Wow(name,helLo)
{
    return helLo(name);
}
var result=Wow("Rabby khan",sayName);
console.log(result);

var rex=base(2)(3);
console.log(rex);

