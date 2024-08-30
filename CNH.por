programa {
  funcao inicio() {
    inteiro idade
    cadeia nome
    escreva("Digite seu nome e sua idade: ")
    leia(nome, idade)
    se(idade > 17){
      escreva("Parabens, ",nome," voce pode tirar sua CNH")
    }senao{
      escreva(nome," voce ainda nao pode tirar sua CNH")
    
    }
  }
}
