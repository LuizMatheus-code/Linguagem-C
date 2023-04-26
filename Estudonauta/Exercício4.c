/*
Nome: Luiz Matheus
Data: 20/04/2023
Descricao: Cadastra o nome, genero e nota de 3 pessoas e mostra uma
listagem de todas essas pessoas.
*/

#import <stdio.h>
#import <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    printf("<<< EX004 - Listagem >>>\n");

    //declarando as variaveis
    char nome[30];
    char genero;
    float nota;

    printf("\nCadastrando a primeira pessoa");
    printf("\n-----------------------------");
    fflush(stdin);

    //Recebendo o nome
    printf("\nNome: ");
    gets(nome);

    //recebendo uma letra do genero
    printf("Gênero [M/F]: ");
    scanf("%c", &genero);

    //recebendo a nota em um numero float
    printf("Nota: ");
    scanf("%f", &nota);

    printf("\nCadastrando a segunda pessoa");
    printf("\n-----------------------------");
    fflush(stdin);

    //declarando variaveis da segunda pessoa
    char nome2[30];
    char genero2;
    float nota2;

    //entrada do nome da segunda pessoa
    printf("\nNome: ");
    gets(nome2);

    //entrada do genero da segunda pessoa
    printf("Gênero [M/F]: ");
    scanf("%c", &genero2);

    //entrada da nota da segunda pessoa
    printf("Nota: ");
    scanf("%f", &nota2);

    //variaveis da terceira pessoa
    char nome3[30];
    char genero3;
    float nota3;

    printf("\nCadastrando a terceira pessoa");
    printf("\n-----------------------------");
    fflush(stdin);

    //nome da terceira pessoa
    printf("\nNome: ");
    gets(nome3);

    //genero da terceira pessoa
    printf("Gênero [M/F]: ");
    scanf("%c", &genero3);

    //nota da terceira pessoa
    printf("Nota: ");
    scanf("%f", &nota3);

    printf("\nListagem completa");
    printf("\n------------------------------\n");
    printf("Nome | Gênero | Nota\n");
    printf("\n%s | %c | %.1f\n", nome, genero, nota);
    printf("%s | %c | %.1f\n", nome2, genero2, nota2);
    printf("%s | %c | %.1f\n", nome3, genero3, nota3);

}
