#include <stdio.h>

int main() {

    int valor1 = 10, valor2 = 3;
    printf("X = %i | Y = %i\n\n", valor1, valor2);
    
    // Exemplos de Operadores Aritméticos
    printf("Soma: %i\n", valor1 + valor2);              // <variável> = <valor1> + <valor2> - Soma valor1 a valor2 e atribui a variável;
    printf("Subtração: %i\n", valor1 - valor2);         // <variável> = <valor1> - <valor2> - Subtrai valor1 a valor2 e atribui a variável;
    printf("Multiplicação: %d\n", valor1 * valor2);     // <variável> = <valor1> * <valor2> - Multiplica valor1 por valor2 e atribui a variável;
    printf("Divisão: %.2f\n", (float) valor1 / valor2); // <variável> = <valor1> / <valor2> - Divide valor1 por valor2 e atribui a variável;
    printf("Resto: %i\n", valor1 % valor2);             // <variável> = <valor1> % <valor2> - Atribui a variável o resto da divisão de valor1 por valor2 (Módulo);


    // Exemplos de Operadores Unários
    valor1++;
    printf("Soma 1: %i\n", valor1);                     // <variável> ++ - Soma uma unidade ao valor atual da variável;
    valor1--;
    printf("Subtrai 1: %i\n\n", valor1);                // <variável> -- - Subtrai uma unidade ao valor atual da variável;


    // Exemplos de Operadores Condicionais - 1 se verdade, 0 se falso.
    printf("X > Y? [%i]\n", valor1 > valor2);           // (boolean) = <valor1> > <valor2> - Checa se o primeiro valor é maior que o segundo.
    printf("X < Y? [%i]\n", valor1 < valor2);           // (boolean) = <valor1> < <valor2> - Checa se o primeiro valor é menor que o segundo.
    printf("X >= Y? [%i]\n", valor1 >= valor2);         // (boolean) = <valor1> >= <valor2> - Checa se o primeiro valor é maior ou igual o segundo.
    printf("X <= Y? [%i]\n", valor1 <= valor2);         // (boolean) = <valor1> <= <valor2> - Checa se o primeiro valor é maior ou igual o segundo.
    printf("X == Y? [%i]\n", valor1 == valor2);         // (boolean) = <valor1> == <valor2> - Checa se o primeiro valor é igual o segundo.
    printf("X != Y? [%i]\n\n", valor1 != valor2);       // (boolean) = <valor1> != <valor2> - Checa se o primeiro valor é diferente do segundo.


    // Exemplos de Operadores de Atribuição
    printf("Soma X += 3: %i\n", valor1 += 3);            // <variavel> += <valor> - Soma valor à variável e atribui a ela mesma.             
    printf("Subtração X -= 3: %i\n", valor1 -= 3);       // <variavel> -= <valor> - Subtrai valor da variável e atribui a ela mesma.             
    printf("Multiplicação X *= 3: %i\n", valor1 *= 3);   // <variavel> *= <valor> - Multiplica valor pela variável e atribui a ela mesma.             
    printf("Divisão X /= 5: %i\n", valor1 /= 5*3);       // <variavel> /= <valor> - Divide valor pela variável e atribui a ela mesma.             
    printf("Resto X %%= 3: %i\n\n", valor1 %= 3);          // <variavel> %= <valor> - Atribui o resto da divisão a variável.             


    // Parte do Caraio - binário(10) = 00001010 e binário(5) = 000001001
    /**
     * <variavel> &= <variavel> - Modificador de bit 'AND';
     * <variavel> |= <variavel> - Modificador de bit 'OR';
     * <variavel> ^= <variavel> - Modificador de bit 'XOR', OR exclusivo;
     * <variavel> >>= <variavel> - Modificador de bit 'rightshift';
     * <variavel> <<= <variavel> - Modificador de bit 'leftshift'.
    */
    int a = 10, b = 6;
    printf("A = %i (00001010)   | B = %i (00000110)\n", a, b);
    printf("~A = %i (11110101)  | ~B = %i (11111001)\n", ~a, ~b);
    printf("A (10)      |B (6)      |X&Y            |X|Y            |X^Y\n");
    printf("00001010    |00000110   |%i (00000010)  |%i (00001110)  |%i (00001100)\n\n", a & b, a | b, a ^ b);
    printf("A (00001010) << 1: %i (00010100)\n", a<<1);            
    printf("A (00001010) >> 1: %i (00000101)\n\n", a>>1);            
                                                                  
    //SizeOf - Pra medir o tamanho da peça
    int inteiro;
    float flutuante;
    double duplo;
    char caractere;
    printf("Tamanho |int\t|float\t|double\t|char\n");
    printf("\t|%lu\t|%lu\t|%lu\t|%lu\n\n", sizeof(inteiro), sizeof(flutuante), sizeof(duplo), sizeof(caractere));       // '%lu' - Vem de Long Unsigned Int.

    return 0;
}