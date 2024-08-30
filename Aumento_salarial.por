programa {
  funcao inicio() {
    cadeia nome
    real salario
    inteiro idade

  escreva("Digite seu nome: ")
  leia(nome)
  escreva("Digite sua idade: ")
  leia(idade)
  escreva("Digite seu salario: ")
  leia(salario)

  se(idade <= 35){
    escreva("Voce teve um aumento salarial e seu novo salario é: ",salario + (salario * 0.12))
  }senao se(idade >= 36 e idade <= 50){
    escreva("Voce teve um aumento salarial e seu novo salario é: ",salario + (salario * (14.5/100)))
    }senao{
      escreva("Voce teve um aumento salarial e seu novo salario é: ",salario + (salario * 0.17))
    }

  
  }
}
