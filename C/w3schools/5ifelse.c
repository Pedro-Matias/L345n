#include <stdio.h>

// exemplo de uso de if, else, else if e switch case 
int main() {

    int numero_pessoa = 0, numero_computador = 0;
    printf("Escolha um número inteiro qualquer: ");
    scanf(" %i", &numero_pessoa);                           // armazena um dado digitado pelo usuário em uma variável local

    numero_computador = numero_pessoa + 1;                  // sempre escolhe um número maior que o que foi selecionado.

    printf("Eu escolhi %i", numero_computador);
    if (numero_computador > numero_pessoa) {
        printf(", logo, ganhei!\n\n");
    } else if (numero_computador == numero_pessoa) {        // código inalcançável
        printf(", logo, empatamos!\n\n");
    } else {
        printf(", logo, perdi!\n\n");
    }

    // isso é um if ternário, uma estrutura compacta e complexa para tarefas simples
    numero_computador > numero_pessoa ? printf("AAAA") : printf("BBBB");            // true : false

    // o switch torna mais intuitiva a maneira de trabalhar com variáveis com vários outcomes.
    switch (numero_computador) {
    case 0:
        printf ("Você escolheu (-1).");
        break;
    
    case 1:
        printf ("Você escolheu (0).");
        break;
    
    default:                                                    // default é o padrão, caso o switch não encontre um caso verdadeiro
        printf ("Você escolheu %i.", numero_pessoa);
        break;
    }


    return 0;
}