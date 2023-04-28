/*
Nome: Luiz Matheus
Data: 28/04/2023
Descricao: Requisita um numero e mostra o dobro e a terca parte desse mesmo numero
*/

#import <stdio.h>
#import <locale.h>

void main() {

    //Transformar todos os caracteres em língua portuguesa
    setlocale(LC_ALL, "Portuguese");

    //Explicar ao usuario o que o programa faz (opcional)
    printf("<<< EX007 - Dobro e terca parte >>>");

    //Declarando a variavel que sera usada
    float num;

    //requisitando ao usuario uma entrada de numero inteiro
    printf("\nDigite um numero: ");
    scanf("%f", &num);

    //Mostrar ao usuario o numero digitado, o dobro e a terca parte desse numero
    printf("Analisando o número %.2f ...", num);
    printf("\nO dobro: %.2f", num * 2);
    printf("\nA terca parte: %.2f", num / 3);
}
