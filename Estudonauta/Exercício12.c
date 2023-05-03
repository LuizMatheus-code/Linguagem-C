/*
Nome: Luiz Matheus
Data: 03/05/2023
Descricao: Solicita dois números e mostra a média com a situação do aluno
*/

#import <stdio.h>
#import <locale.h>

void main() {

    //Transformar tudo em língua portuguesa
    setlocale(LC_ALL, "Portuguese");

    //declarando variáveis
    float primeira_nota, segunda_nota, media;

    //Cabeçalho (opcional)
    printf("<<< EX012 - Situação do aluno >>>\n");

    //Solicitando a primeira nota em float
    printf("\nPrimeira nota: ");
    scanf("%f", &primeira_nota);

    //limpando o teclado
    fflush(stdin);

    //Solicitando a segunda nota em float
    printf("Segunda nota: ");
    scanf("%f", &segunda_nota);

    //limpando o teclado
    fflush(stdin);

    //Atribuindo à média as notas e dividindo por dois
    media = (primeira_nota + segunda_nota) / 2;

    //Mostrando o resultado na tela
    printf("Com media %.1f a situacão é %s", media, (media >= 7)?"Aprovado":"Reprovado");
}
