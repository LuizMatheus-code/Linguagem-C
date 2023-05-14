/*
Nome: Luiz Matheus
Data: 14/05/2023
Descricao: Solicita o preco de um produto e, se esse preco for maior que 500, o consumidor recebe 10% de desconto
*/

#include <stdio.h>
#include <locale.h>

void main() {
    
    //Transforma tudo em Português
    setlocale(LC_ALL, "Portuguese");

    //Cabecalho (opcional)
    printf("<<< EX016 - Consumidor ganha desconto >>>\n");

    //Declarando variáveis
    float compras;

    //Solicitando o número do total de compras
    printf("\nQual foi o valor total das compras?");
    scanf("%f", &compras);
    
    //Se as compras forem menores que 500, mostra o preco sem alterar nada
    if (compras <= 500)
    {
        printf("\n------------------------------------\n");
        printf("Você comprou R$%.2f na loja", compras);
    }
    //se o preco for maior que 500, coloca 10% de desconto
    else
    {
        printf("\n------------------------------------\n");
        printf("Você comprou R$%.2f na loja", compras);


        printf("\n=========ATENCÃO=========\n");
        
        //Mostra o desconto que o produto vai receber
        printf("Por comprar mais de R$500, você vai receber R$%.2f de desconto", (compras * 10/100));

        //Adiciona esse desconto na variável produto
        compras -= (compras * 10/100);

        printf("\nO valor a ser pago é %.2f", compras);
    }
}
