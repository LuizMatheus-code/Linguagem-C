/*
Nome: Luiz Matheus
Data: 04/05/2023
Descricao: Solicita um numero inteiro e mostra se ele é par ou impar
*/

#import <stdio.h>
#import <locale.h>

void main() {
    
    //Transformar tudo em portugues
    setlocale(LC_ALL, "Portuguese");

    //Declarando variaveis
    int numero;

    //Solicitando que o ususario digite um numero inteiro
    printf("Digite um numero inteiro: ");
    scanf("%i", &numero);

    //mostrando na tela o resultado
    printf("O numero %i é %s", numero, (numero % 2 == 0)?"Par":"Impar");
}
