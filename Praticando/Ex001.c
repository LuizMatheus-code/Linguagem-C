/*
Nome: Luiz Matheus
Data: 02/05/2023
Descricao: Solicitar o tempo em segundos e converter para minutos e horas
*/

#import <stdio.h>
#import <locale.h>

void main() {
    //Transformar tudo em portugues
    setlocale(LC_ALL, "Portuguese");

    //declarar as variaveis float
    float segundos, minutos, horas;

    //requisitar o tempo ao usuario em float
    printf("Digite o tempo em segundos: ");
    scanf("%f", &segundos);

    //converter segundos para minutos e minutos para horas
    minutos =  segundos / 60;
    horas = minutos / 60;

    //Mostrar ao usuario o resultado final
    printf("\nSegundos: %.0f; \nMinutos: %.2f; \nHoras: %.3f", segundos, minutos, horas);
}
