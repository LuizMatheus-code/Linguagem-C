/*
Nome: Luiz Matheus
Data: 11/05/2023
Descricao: Solicita dois números e retorna a soma ou subtracão dependendo da escolha do usuário
*/

#include <stdio.h>
#include <locale.h>

void main () {

    //Transforma tudo em português
    setlocale(LC_ALL, "Portuguese");

    //Declarando as variáveis
    int primeiro, segundo, escolha;

    //Solicita o primeiro número
    printf("Digite o primeiro número: ");
    scanf("%i", &primeiro);

    //Limpando o teclado
    fflush(stdin);

    //Solicita o segundo número
    printf("Digite o segundo número: ");
    scanf("%i", &segundo);

    //Limpando o teclado
    fflush(stdin);

    //Mostra as opcões para o usuário
    printf("Escolha uma das seguintes operacões: \n");
    printf("\n[1] Somar (+)\n");
    printf("[2] Subtrair (-)\n");

    //Registra o que o usuário escolheu
    printf("\nSua escolha: ");
    scanf("%i", &escolha);

    //Se a escolha for 1, mostra a soma, caso contrário, não faz nada
    if (escolha == 1)
    {
        printf("\nA soma entre %i e %i é %i", primeiro, segundo, primeiro + segundo);
    }
    //Se a escolha for 2, mostra a subtracão, caso contrário, não faz nada
    if (escolha == 2)
    {
        printf("\nA subtração entre %i e %i é %i", primeiro, segundo, primeiro - segundo);
    }
}
