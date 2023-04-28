/*
Nome: Luiz Matheus
Data: 28/04/2023
Descricao: solicita um numero ao usuario e retorna esse mesmo numero
junto com o sucessor e antecessor respectivos
*/

#import <stdio.h>
#import <locale.h>

void main() {

    //Transformar todos os caracteres para a Língua portuguesa
    setlocale(LC_ALL, "Portuguese");

    //Declarando as variaveis que serao usadas
    int numero;

    //Explicar ao usuario o que tem que fazer (opcional)
    printf("<<< EX006 - Antecessor e Sucessor >>>");

    //solicitar ao usuario que digite um numero inteiro e atribuir isso a variavel "numero"
    printf("\nDigite um número inteiro: ");
    scanf("%i", &numero);

    //Mostrar a variavel contendo o numero que a pessoa digitou
    printf("\nAnalisando o número %i ...", numero);
    
    //mostrar o antecessor do numero (numero - 1)
    printf("\nO antecessor: %i", numero -1);
    
    //mostrar o sucessor do numero (numero + 1)
    printf("\nO sucessor: %i", numero +1);
}
