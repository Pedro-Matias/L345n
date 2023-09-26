#include <stdio.h>

int main() {

    int indice = 10, i = 0;
    
    // Laço de Repetição Simples, testa se a condição é verdadeira antes de entrar no laço.
    while (i < indice) {
        printf("Contagem Atual (While): %i\n", i);
        
        i++;
        if (i == 4)             // quando chegar no 4o número, sairá do laço de repetição
            break;
        
    }


    // Diferente do while, o DoWhile testa a condição somente ao final de sua execução. 
    i = 0;
    do {
        printf("Contagem Atual (DoWhile): %i\n", i);

        if (i == 4) {           // quando chegar no 4o número, pulará para a próxima iteração do laço
            i++;
            continue;
        }
        
        i++;
    } while (i < indice);

    // Como um While melhorado. Permite a criação de variáveis em sua construção.
    for (i = 0; i < indice; i++) {
        printf("Contagem Atual (For): %i\n", i);
    }


    return 0;
}