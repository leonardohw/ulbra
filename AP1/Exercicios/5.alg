algoritmo "algoritmo3"

var
notafinal, frequencia, substituicao, g1,g2, aulas: real
inicio
      Escreval("Escreva a sua nota do G1: ")
      leia(g1)
      Escreval("Escreva a sua nota do G2: ")
      leia(g2)
      Escreval("Escreva quantas aulas você frequentou: ")
      leia(aulas)

      notafinal <- (g1+g2*2)/3
      frequencia <- aulas*100/68

      se (notafinal >=6) e (frequencia >=75) entao
         escreval("Aprovado")
         
          senao (notafinal <=6) e (frequencia <=75) entao
            Escreval("Reprovado")
         
         se (notafinal <=6) e (frequencia >=75) entao
            Escreval("Substituição")

         Escreval("Informe a sua nota da substituição: ")
         leia(substituicao)
         se substituicao > g1 entao
         g1 <- substituicao senao
         g2 <- substituicao
         fimse

         notafinal <- (g1+g2*2)/3
      frequencia <- aulas*100/68

      se (notafinal >=6) e (frequencia >=75) entao
         escreval("Aprovado")

         se notafinal <=6 e (frequencia <=75) entao
            Escreval("Reprovado")
            fimse
            fimse
         fimse
         fimse
fimalgoritmo
