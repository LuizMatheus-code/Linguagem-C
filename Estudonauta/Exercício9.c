/*
Autor: Luiz Matheus
Data: 28/04/2023
Descricao: Requisita o nome de um aluno e calcula as duas notas para mostrar a média.
*/

#import <stdio.h>
#import <locale.h>

void main() {

    //Mostrar os caracteres em língua portuguesa
    setlocale(LC_ALL, "Portuguese");

    //Mostrar o que o programa faz (opcional)
    printf("<<< EX009 - Média do aluno >>>\n");

    //Declarando as variaveis de nome, as duas notas e a media
    char nome[30];
    float nota1, nota2, media;

    //requisita o nome do aluno e pega esse nome como uma cadeia de caracteres
    printf("\nNome do aluno: ");
    gets(nome);

    //Requisita a primeira nota e salva como um numero float
    printf("Nota 1: ");
    scanf("%f", &nota1);

    //Requisita a segunda nota e também salva como float
    printf("Nota 2: ");
    scanf("%f", &nota2);

    //Calcula a média somando a primeira e segunda nota, depois, divide por 2
    media = (nota1 + nota2) / 2;

    //Mostra o nome, as notas e a média do aluno
    printf("O aluno %s tirou notas %.1f e %.1f e ficou com média %.1f", nome, nota1, nota2, media);
}
