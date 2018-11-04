var variavel = [];

variavel[0] = prompt("Digite o seu nome: ");
variavel[1] = prompt("Digite o seu endereço: ");
variavel[2] = prompt("Digite o seu e-mail: ");

var objeto = {nome:variavel[0], endereco:variavel[1], email:variavel[2]}

alert("Seu nome é: " + objeto.nome);
alert("Seu endereço é: " + objeto.endereco);
alert("Seu e-mail é: " + objeto.email);