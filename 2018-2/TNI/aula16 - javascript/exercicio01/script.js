function calculadora () {

	var numero1 = document.getElementById("n1").value;
	var numero2 = document.getElementById("n2").value;
	var operacao = document.getElementById("operacao").value;

	numero1 = parseFloat(numero1);
	numero2 = parseFloat(numero2);
	
	switch (operacao) {
		case '+':
			alert(numero1 + numero2);
			break;
		case '-':
			alert(numero1 - numero2);
			break;
		case '*':
			alert(numero1 * numero2);
			break;
		case '/':
			alert(numero1 / numero2);
			break;
		default:
			alert("Por favor, selecione a operação!");
			break;
	}


}
