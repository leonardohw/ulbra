function validarformulario() {

	// NOME

	if (document.formulario.nome.value=="" || document.formulario.nome.value.length < 5){

		document.getElementById("resposta_nome").innerHTML ="Por favor, digite o seu nome com mais de 5 digitos!";
		return false;

	}else {

		document.getElementById("resposta_nome").innerHTML ="Nome aprovado!";

	}

	// E-MAIL

	if  (document.formulario.email.value=="" || document.formulario.email.value.indexOf('@')==-1 || document.formulario.email.value.indexOf('.')==-1){
		document.getElementById("resposta_email").innerHTML ="Preencha campo E-MAIL corretamente!";
		return false;
	}else {
			document.getElementById("resposta_email").innerHTML ="E-mail aprovado!";

	}

	// GENEROS

	if(	document.formulario.genero.value == "") {
	   	document.getElementById("resposta_sexo").innerHTML ="Por favor selecione o seu sexo..";
	}

	if(	document.formulario.genero.value =="f") {
	   	document.getElementById("resposta_sexo").innerHTML ="Sra..";
	}

	if(	document.formulario.genero.value =="m") {
	   	document.getElementById("resposta_sexo").innerHTML ="Sr..";
	}

	// OPTIONS

	if (document.formulario.assunto.value =="selecione") {
	   document.getElementById("resposta_assunto").innerHTML ="Por favor, selecione o assunto!";
	} else {

		document.getElementById("resposta_assunto").innerHTML ="Assunto selecionado!";

	}
}