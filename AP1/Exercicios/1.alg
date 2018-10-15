algoritmo "1"

var
  id: inteiro
  horas, salario: real
  resultado: real
inicio
      Escreva("Escreva o ID do funcionário ")
      leia(id)
      Escreva("Quantas horas esse funcionário trabalhou? ")
      leia(horas)
      Escreva("Qual o salário por horas trabalhadas desse funcionário? ")
      leia(salario)
      resultado <- horas*salario
      Escreva("O funcionário ", id, " recebeu R$", resultado, " reais pelas horas trabalhadas")
fimalgoritmo
