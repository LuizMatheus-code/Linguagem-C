/*
Nome: Luiz Matheus
Data: 03/05/2023
Descricao: Solicita um número e mostra se é par ou impar
*/

#import <stdio.h>
#import <locale.h>

void main() {

    //Transformando tudo em português
    setlocale(LC_ALL, "Portuguese");

    //Cabeçalho (opcional)
    printf("<<< EX011 - Par ou ímpar>>>\n");

    //Declarando variáveis
    int numero, verificar;
    char par_impar[10];

    //Solicitando ao usuáio o número
    printf("\nDigite um número inteiro: ");
    scanf("%i", &numero);

    //Verificando se é par ou impar
    verificar = numero % 2;

    //Mostrando o resultado na tela
    printf("O numero %i é %s", numero, (verificar == 0)?"Par":"Impar");
}
