let random = Math.random();
let num1 = prompt("Enter First Number :");
let operator = prompt("Enter operation :");
let num2 = prompt("Enter second Number :");

let operation = {
    "+" : "-",
    "-" : "/",
    "*" : "+",
    "/" : "**",
}

if(random > 0.1){
    console.log(`The result is ${num1} ${operator} ${num2}`);
    alert(`The result is ${eval(`${num1} ${operator} ${num2}`)}`)
}
else{
    operator = operation[operator]
    alert(`The result is ${eval(`${num1} ${operator} ${num2}`)}`)

}