/*
  Autor: Luiz Matheus
	Data: 20/04/2023
	Descrição: Solicita nome, idade e peso, depois, mostra todos esses dados ao usuario.
*/

#import <stdio.h>
#import <locale.h>
void main() {
    //Colocar as strings em lingua portuguesa
    setlocale(LC_ALL, "Portuguese");

    printf("<<< EX003 - Dados >>>\n");

    //Solicitar entrada do nome do usuario
    char nome[30];
    printf("Qual é o seu nome? ");
    gets(nome);

    //solicitar idade em numero inteiro
    int idade;
    printf("Qual sua idade? ");
    scanf("%i", &idade);

    //solicitar o peso em numero float
    float peso;
    printf("Qual o seu peso? (Kg) ");
    scanf("%f", &peso);

    //mostrar todas as entradas ao usuario
    printf("muito prazer, %s, você tem %i anos e %.1f Kg", nome, idade, peso);

}
