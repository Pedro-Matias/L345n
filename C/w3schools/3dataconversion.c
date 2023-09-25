#include <stdio.h>

int main() {
    /**
     * C conta com 2 tipos de conversão de dados:
     * > Implicita, que é feita automaticamente;
     * > Explicita, que é feita pelo programador.
    */

    // exemplo de conversão implícita
    float naverdadeint = 9;
    printf("Conversão Automática (Implicita) int->float: %.2f\n\n", naverdadeint);

    int naverdadefloat = 9.99;
    printf("Conversão Automática (Implicita) float->int: %i\n\n", naverdadefloat);

    int x = 10, y = 3;
    float xpory = x / y;        // o erro matemático está no tipo de variável utilizado. ao dividir um int por outro, a linguagem interpreta que o resultado deve é int.
    printf("O Resultado da Divisão de %i por %i é %.1f (?)\n", x, y, xpory);

    // exemplo de conversão explícita
    printf("Na verdade o resultado da Divisão de %i por %i é %.1f (?)\n\n", x, y, (float) x/y); // aqui temos uma conversão explicita de dados.

    return 0;
}