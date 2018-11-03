var numero1 = prompt("Digite um número: ");

var numero2 = prompt("Digite outro número: ");

var operacao = prompt("Operação: (Adição: 1) (Subtração: 2) (Multiplicação: 3) (Divisão : 4)");

var numero1=parseFloat(numero1);
var numero2=parseFloat(numero2);
var operacao=parseFloat(operacao);

adicao=numero1+numero2
subtracao=numero1-numero2
multiplicacao=numero1*numero2
divisao=numero1/numero2

switch (operacao) {
case (1):
alert(numero1 + " + " + numero2 + " é igual a " + adicao);
break;
case (2) :
alert(numero1 + " + " + numero2 + " é igual a " + subtracao);
break;
case (3) :
alert(numero1 + " x " + numero2 + " é igual a " + multiplicacao);
break;
case (4) :
alert(numero1 + " / " + numero2 + " é igual a " + divisao);
break;
default:
alert("Opção inválida!");
break;
}