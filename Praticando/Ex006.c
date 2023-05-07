/*
Nome: Luiz Matheus
Data: 07/05/2023
Descricao: Solicita três números e diz se eles podem formar um triângulo
*/

#import <stdio.h>
#import <locale.h>

void main() {
    //Transforma tudo em português
    setlocale(LC_ALL, "Portuguese");

    //Declarando variáveis que serão usadas
    float primeiro, segundo, terceiro;

    //Solicitando a entrada de dados em float do primeiro lado
    printf("Primeiro lado do triângulo: ");
    scanf("%f", &primeiro);

    //Limpando o teclado
    fflush(stdin);

    //Solicitando a entrada do segundo lado em float
    printf("Segundo lado do triângulo: ");
    scanf("%f", &segundo);

    //limpando o teclado novamente
    fflush(stdin);

    //Solicitando entrada do terceiro lado
    printf("Terceiro lado do triângulo: ");
    scanf("%f", &terceiro);

    //Limpando de novo
    fflush(stdin);

    //Verificando se a soma do primeiro e o segundo é maior que o terceiro
    if (primeiro + segundo > terceiro)
    {
        //Verificando se a soma do segundo e o terceiro é maior que o primeiro
        if (segundo + terceiro > primeiro)
        {
            //Verificando se a soma do primeiro e o terceiro é maior que o segundo
            if (primeiro + terceiro > segundo)
            {
                printf("\nForma um triângulo");
            }
            //Se o segundo for maior ou igual à soma dos outros, não forma um triângulo
            else
            {
                printf("\nNão forma um triângulo, porque %.1f + %.1f (%.1f) não é maior que %.1f", primeiro, terceiro, primeiro + terceiro, segundo);
            }
        }
        //Se o primeiro for maior ou igual à soma dos outros, não forma um triângulo
        else
        {
            printf("\nNão forma um triângulo, porque %.1f + %.1f (%.1f) não é maior que %.1f", segundo, terceiro, segundo + terceiro, primeiro);
        }
    }
    //Se o terceiro for maior ou igual à soma dos outros, não forma um triângulo
    else
    {
        printf("\nNão forma um triângulo, porque %.1f + %.1f (%.1f) não é maior que %.1f", primeiro, segundo, primeiro + segundo, terceiro);
    }
}
