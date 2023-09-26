#include <stdio.h>
#include <string.h>

void main() {

    // uma array pode ser alocada na memória de uma forma mais geral, podendo ser alterada depois 
    int array_inteiros[] = {1, 2, 3, 4};
    for (int i = 0; i < 4; i++)
        printf("[%i]\t", array_inteiros[i]);
    
    // dessa segunda forma somente o espaço alocado ficará disponível
    int array_inteiros_fixa[4] = {4, 3, 2, 1};
    for (int i = 0; i < 4; i++)
        printf("[%i]\t", array_inteiros_fixa[i]);
    
    /**
     * Sobre Strings - strings são arrays de char. Então, herdam as caracteristicas de ambas as partes
     * Pode ser editadas individualmente por meio de uma chamada direta a uma posição, um char, ou
     * também podem aparecer como textos longos.
    */

    // ambas as formas de declaração estão certas. contudo na segunda é necessário colocar o char nulo no final, para avisar que aquele é o final da string. 
    char minha_frase[] = {"Teste"};
    char frase_minha[] = {'T', 'e', 's', 't', 'e', '\0'};

    printf("\nTamanho da Minha Frase (%lu), tamanho na memória (%lu)\n", strlen(minha_frase), sizeof(minha_frase));
    printf("Tamanho da Frase Minha (%lu), tamanho na memória (%lu)\n\n", strlen(frase_minha), sizeof(frase_minha));
    printf("%s\n\n", strcat(minha_frase, frase_minha));


    /**
     * Matrizes N-dimensionais
     * É possível fazer matrizes com mais de 1 dimensão em C
    */
    int matriz_2d[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            printf("[%i, %i]\t%i\t\t", i, j, matriz_2d[i][j]);
        printf("\n");
    }
        
}