/*
Nome: Luiz Matheus
Data: 06/05/2023
Descricao: Solicita dois números inteiros e mostra qual é o maior
*/

#import <stdio.h>
#import <locale.h>

void main() {

    //Transformando todos os caracteres em português
    setlocale(LC_ALL, "Portuguese");

    //Declarando as variáveis que serão usadas
    int primeiro, segundo;

    //Solicitando o primeiro número
    printf("Escreva um número inteiro: ");
    scanf("%i", &primeiro);

    //Limpando o teclado para a próxima entrada de dados
    fflush(stdin);

    //Solicitando o segundo número
    printf("Escreva outro número inteiro: ");
    scanf("%i", &segundo);

    //Limpando o teclado de novo
    fflush(stdin);

    //Criando uma condição de "se o primeiro for maior que o segundo"
    if (primeiro > segundo)
    {
        printf("O número %i é maior que %i", primeiro, segundo); //Mostrando na tela
    }
    //Se o primeiro for menor ou igual ao segundo, executar o "else"
    else
    {
        printf("O %i é menor ou igual a %i", primeiro, segundo); //Mostrar ao usuário
    }
}
