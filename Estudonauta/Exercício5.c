/*
Nome: Luiz Matheus
Data: 26/04/2023
Descricao: Gera um numero aleatorio e pede para o usuario adivinhar
*/

#import <stdio.h>
#import <locale.h>
#import <stdlib.h>
#import <time.h>

void main() {
    int escolha;

    //colocar a acentuação de língua portuguesa
    setlocale(LC_ALL, "Portuguese");

    //exibir cabeçalho para o usuário
    printf("<<< Ex005 - Será que você acerta? >>>\n");
    printf("\nVou gerar um número entre 1 e 5. Tente adivinhar!");

    //Gerar um numero aleatorio
    srand(time(NULL));
    int num = rand() % 5 + 1; //somar +1 para que o numero chegue a 5

    //pedir ao usuario que digite o numero
    printf("\nQual é o número? ");
    scanf("%i", &escolha);

    //retornar o numero gerado e a escolha do usuario
    printf("\nNúmero gerado: %i\n", num);
    printf("Escolha: %i", escolha);
}
