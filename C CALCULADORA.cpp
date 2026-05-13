#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int numero1, numero2, resultado, opcao;
    float result_div;
    char repetir; // variável para decidir se repete

    do {
        // Menu e entrada de dados
        printf("Menu para operacao\n");
        printf("1 - Somar\n");    
        printf("2 - Subtrair\n"); 
        printf("3 - Multiplicar\n"); 
        printf("4 - Dividir\n"); 

        printf("Informe o primeiro numero INTEIRO: n1 = ");
        scanf("%d", &numero1);

        printf("Informe o segundo numero INTEIRO: n2 = ");
        scanf("%d", &numero2);

        printf("Escolha uma opcao (1, 2, 3, 4): ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                resultado = numero1 + numero2;
                printf("O resultado da soma = %d\n", resultado);
                break;
            case 2:
                resultado = numero1 - numero2;
                printf("O resultado da subtracao = %d\n", resultado);
                break;
            case 3:
                resultado = numero1 * numero2;
                printf("O resultado da multiplicacao = %d\n", resultado);
                break;
            case 4:
                if (numero2 != 0) {
                    result_div = (float) numero1 / numero2;
                    printf("O resultado da divisao = %.2f\n", result_div);
                } else {
                    printf("Erro: divisao por zero nao e permitida.\n");
                }
                break;
            default:
                printf("Voce digitou uma opcao invalida!\n");
                break;
        }

        // Pergunta se quer repetir
        printf("Deseja repetir o programa? (s/n): ");
        scanf(" %c", &repetir); // note o espaço antes do %c para ignorar enter

    } while(repetir == 's' || repetir == 'S'); // repete se for 's' ou 'S'

    printf("Fim do programa!\n");
    system("pause");
    return 0;
}
