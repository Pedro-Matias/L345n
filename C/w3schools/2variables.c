#include <stdio.h>

int main() {
    // existem diferentes tipos de variáveis que podem ser empregadas na programação
    // os valores que se encontram pós sinal de igualdade são os valores iniciais das variáveis
    int intV = 1, intV2 = 10;   // tipo inteiro: guarda números inteiros sem decimais - negativos inclusos. dá pra declarar multiplas variáveis de mesmo tipo em conjunto.
    float floatV = 2.345;       // tipo flutuante: guarda números racionais, com decimais - negativos inclusos.
    char charUn = 'A';          // tipo caractere: guarda símbolos únicos - usar com aspas simples.
    // double - assim como o float, mas com maior alocação de memória (torna ele mais preciso em algumas aplicações). tipo %d. 
    // const <tipo> NOME - 'constante'. cria uma variável somente-leitura, que não pode ter seu valor alterado ao longo do código. geralmente declarada com caixa-alta. 

    printf("Número Inteiro: %i\n", intV);                   // para restaurar o valor de uma variável podemos dizer a posição com o placeholder %<tipo> e qual valor após uma vírgula.
    printf("-> Outro Número Inteiro: %i\n\n", intV-2);      //  '%i' é exclusivo à números inteiros e é possível fazer contas.
    printf("Número Racional: %f\n", floatV);                // '%f' por sua vez é usado para representar números de ponto flutuante.                  
    printf("-> Outro Número Racional: %.2f\n\n", floatV-1); //  assim como sua contraparte, %d permite contas e mais contagem de casas.                   
    printf("Char Unitário: %c\n", charUn);                  // '%c' é de 'char', caractere. é um símbolo, uma letra, um número. algo.                   
    printf("-> Outro Char Unitário: %c\n\n", charUn+1);     //  assim como suas contrapartes, %c permite contas (apesar de ser um uso um pouco estranho)
    printf("Tudo junto: %i || %.1f || %c\n\n", intV, floatV, charUn);    // também é possível colocar mais de um tipo de variável no mesmo 'printf'.                   

    intV = intV + 1;                                        // as variáveis podem ter seus valores atualizados, sempre sobreescrevendo os valores anteriores
    printf("Mais um número natural: %i\n", intV);

    floatV++;                                               // uma forma mais compacta de fazer a técnica anterior.
    printf("Mais um número racional: %.3f\n", floatV);
    
    charUn += intV2;                                            // uma forma compacta com maior liberdade;
    printf("Mais um caractere: %c\n\n", charUn);

    return 0;
}