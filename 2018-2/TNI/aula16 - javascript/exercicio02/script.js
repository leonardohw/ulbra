function descobrirTriangulo(lado1, lado2, lado3){
	
	if(lado1 == lado2 && lado2 == lado3){
		document.getElementById("triangulo").innerHTML ="Triangulo Equilatero";
	}else if(lado1 != lado2 && lado2 != lado3){
		document.getElementById("triangulo").innerHTML ="Triangulo Escaleno";
	}else{
		document.getElementById("triangulo").innerHTML ="Triangulo Isoceles";
	}

}