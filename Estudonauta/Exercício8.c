/*
Autor: Luiz Matheus
Data: 28/04/2023
Descricao: Solicita uma letra ao usuario e mostra a ele essa mesma letra, também, o que vem antes e depois dela
*/

#import <stdio.h>
#import <locale.h>

void main() {

    //Transformar os caracteres para língua portuguesa
    setlocale(LC_ALL, "Portuguese");

    //Dizer ao usuario o nome do programa (opcional)
    printf("<<< EX008 - Alfabeto >>>");

    //Declarando as variaveis que serão usadas
    char letter;

    //Pedir para que ele digite uma letra
    printf("\nDigite uma letra:");
    scanf("%c", &letter);

    //Mostrar ao usuario a letra digitada, o que vem depois da letra (letra + 1) e o que vem antes (letra - 1)
    printf("Antes da letra %c, temos a letra %c. Depois, temos a letra %c", letter, letter - 1, letter + 1);
}
