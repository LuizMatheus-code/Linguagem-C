/*
Nome: Luiz Matheus
Data: 10/05/2023
Descricao: Solicita a primeira nota e mostra a média juntamente com a situação escolar do aluno
*/

#include <stdio.h>
#include <locale.h>

void main() {
    //Transformando tudo em Português
    setlocale(LC_ALL, "Portuguese");

    //Cabecalho (opcional)
    printf("<<< EX015 - Bons alunos merecem parabéns >>>\n");

    //Declarando variáveis
    float primeira, segunda, media;

    //Solicitando a primeira nota
    printf("\nDigite a sua primeira nota: ");
    scanf("%f", &primeira);
    
    //Limpando o teclado
    fflush(stdin);

    //Solicitando a segunda nota
    printf("Digite a segunda nota: ");
    scanf("%f", &segunda);

    //Limpando o teclado novamente
    fflush(stdin);
    
    //Calculando a média
    media = (primeira + segunda) / 2;

    //Se a média for maior ou igual a 7, mostra esta mensagem
    if (media >= 7)
    {
        printf("\n--------------------------\n");
        printf("      Meus Parabéns!\n");
        printf("     Sua média foi %.1f\n", media);
        printf("--------------------------");
    }
    //Se a média for menor que 7, mostra esta mensagem
    else
    {
        printf("\nSua média foi %.1f\n", media);
        printf("É melhor praticar mais.");
    }
}
