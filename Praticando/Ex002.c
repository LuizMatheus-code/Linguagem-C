/*
Nome: Luiz Matheus
Data: 03/05/2023
Descricao: Solicita três números reais e mostra a média entre eles
*/

#import <stdio.h>
#import <locale.h>

void main() {

    //Declarando variáveis
    float primeiro, segundo, terceiro, media;

    //Transformando tudo em português
    setlocale(LC_ALL, "Portuguese");

    //Requisitando ao usuário o primeiro valor em float
    printf("Escreva o primeiro valor: ");
    scanf("%f", &primeiro);

    //Requisitando o segundo valor em float
    printf("Escreva o segundo valor: ");
    scanf("%f", &segundo);

    //Requisitando o terceiro valor em float
    printf("Escreva o terceiro valor: ");
    scanf("%f", &terceiro);

    //Fazendo o cálculo da média, ao somar os três primeiro e dividir por 3
    media = (primeiro + segundo + terceiro) / 3;

    //Mostrando a média na tela
    printf("A média é %.2f", media);
}
