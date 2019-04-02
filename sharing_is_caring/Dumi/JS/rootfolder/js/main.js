function calc(){
  var a = parseInt(document.querySelector("#value1").value);
  var b = parseInt(document.querySelector("#value2").value);
  var op = document.querySelector("#operator").value;
  var calculate;

  switch (op) {
    case "add":
      calculate = a + b;
      break;
    case "min":
      calculate = a - b;
      break;
    case "div":
      calculate = a / b;
      break;
    case "mul":
      calculate = a * b;
      break;
  }

  document.querySelector("#result").innerHTML = "<h1>"+calculate+"</h1>";
}
