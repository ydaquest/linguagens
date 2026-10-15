programa {
  funcao inicio() {
    inteiro opcao
    real saldo = 1000
    real valor

    faca {
      escreva("\n1 - Consultar saldo")
      escreva("\n2 - Sacar")
      escreva("\n0 - Sair")
      escreva("\nDigite uma opcao: ")
      leia(opcao)

      se (opcao == 1) {
        escreva("\nSaldo: ", saldo)
      }
      senao se (opcao == 2) {
        escreva("\nDigite o valor do saque: ")
        leia(valor)

        se (valor > 0 e valor <= saldo) {
          saldo = saldo - valor
          escreva("\nSaque realizado!")
        }
        senao {
          escreva("\nValor invalido ou saldo insuficiente!")
        }
      }
      senao se (opcao != 0) {
        escreva("\nOpcao invalida!")
      }

    } enquanto (opcao != 0)

    escreva("\nPrograma finalizado.")
  }
}
