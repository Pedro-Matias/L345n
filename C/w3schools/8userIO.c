#include <stdio.h>

void main() {

    printf("Qual é o seu nome e idade? ");
    char nome[30] = {};                                             // quando trabalhando com strings, é um must colocar o tamanho máximo do campo
    int idade = 0;

    scanf (" %s %i", &nome, &idade);

    printf("Olá %s, como foram os últimos %i anos?", nome, idade);

}