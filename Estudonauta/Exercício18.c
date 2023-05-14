/*
Nome: Luiz Matheus
Data: 14/05/2023
Descricao: Pergunta o ano de nascimento de uma pessoa e retorna se ela já deve ter se alistado
*/

#include <stdio.h>
#include <locale.h>
#include <time.h>

void main() {
    
    //Transforma tudo em Português
    setlocale(LC_ALL, "Portuguese");

    //Cabecalho (opcional)
    printf("<<< EX018 - Servico militar v1.0 >>>\n");

    time_t t;
    time(&t);
    struct tm *data;
    data = localtime(&t);

    //Declarando variaveis
    int ano = data ->tm_year + 1900, nascimento;

    //Mostra o ano atual
    printf("\nAtualmente estamos no ano de %i\n", ano);

    //Pergunta o ano de nascimento
    printf("\nEm que ano você nasceu? ");
    scanf("%i", &nascimento);

    printf("\n----------------------------\n");

    //Mostra a idade da pessoa, que é ano atual - ano de nascimento
    printf("Você tem %i anos de idade\n", ano - nascimento);

    //se a idade for maior ou igual a 18, mostra o resultado na tela
    if (ano - nascimento >= 18)
    {
        printf("\nJá fez 18 anos. Você já deve ter se alistado");
    }
    else
    {
        printf("Você ainda não tem 18 anos, não pode se alistar");
    }
}
