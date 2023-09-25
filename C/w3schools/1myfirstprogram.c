// comando para importar uma biblioteca
// a lib 'stdio.h' vem de standard input/output e serve para fornecer funções comuns úteis, como o printf e o scanf
#include <stdio.h>

// 'int' é um tipo de variável inteira - não fracionária. neste escopo quer dizer que o programa espera um retorno dessa natureza para cessar sua execução
// 'main' é o nome de uma função - esta, sempre estará nos programas pois é a que o compilador procura para iniciar
int main () {
    
    // 'printf' é uma função pertencente a biblioteca supracitada. é uma função para mostrar uma 'string' na tela - uma frase, basicamente.
    printf("Meu primeiro programa\n");
    printf("- na verdade não, mas sabe como é.\n");

    // 'return 0' satisfaz a função retornando um número inteiro, dessa forma finalizando a execução da classe.
    return 0;

}