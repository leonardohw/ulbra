function calcular () {

	var valor_unitario = document.getElementById("valor_unitario").value;
	var quantidade = document.getElementById("quantidade").value;
	
	valor_unitario = parseFloat(valor_unitario);
	quantidade = parseFloat(quantidade);

	total = valor_unitario*quantidade

	if (quantidade>100 && quantidade<201) {

		total= total + (total*25)/100;
	}

	else if (quantidade>200) {
		total= total + (total*50)/100;
	}

	alert(total);

	}
