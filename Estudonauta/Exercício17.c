/*
Nome: Luiz Matheus
Data: 14/05/2023
Descricao: Solicita o ano de nascimento e retorna a idade, juntamente com o aviso de qual fila pegar
*/

#include <stdio.h>
#include <locale.h>
#include <time.h>

void main() {
    
    //Transforma tudo em Português
    setlocale(LC_ALL, "Portuguese");
    
    //Cabecalho (opcional)
    printf("<<< EX017 - Fila de banco >>>\n");

    //Declarando variáveis
    int nascimento, idade;

    //Solicita o ano de nascimento
    printf("\nEm que ano você nasceu? ");
    scanf("%i", &nascimento);

    //Limpa o teclado
    fflush(stdin);
    
    time_t t;
    time(&t);
    struct tm * data;
    data = localtime(&t);
    int ano = data ->tm_year;

    //Adiciona o ano 1900 para ficar o ano atual
    ano += 1900;

    //Declarando a variável idade
    idade = ano - nascimento;

    //Mostra uma uma mensagem de boas-vindas
    printf("\n----------------------------\n");
    printf("Você tem %i anos\n", idade);
    printf("Bem-vindo(a) ao banco\n");
    
    //Se a idade for maior que 65, manda a pessoa para a fila preferencial
    if (idade > 65)
    {
        printf("\n===ATENCÃO===");
        printf("\nDirija-se a fila preferencial");
    }
}
