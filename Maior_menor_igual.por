programa {
  funcao inicio() {
    inteiro numero1, numero2
    escreva("Digite dois numeros: ")
    leia(numero1, numero2)
    se(numero1 > numero2){
     
      escreva("O", numero1,"é o maior valor")
    }senao se(numero1 < numero2){
     
      escreva("O maior valor é: ",numero2)
    }senao{
      escreva("Os valores sao iguais")
    }
  }
}
