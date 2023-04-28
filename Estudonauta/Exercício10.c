/*
Autor: Luiz Matheus
Data: 28/04/2023
Descricao: Requisita o nome do produto, o preco e o desconto. Depois, retorna o 
preco final com o desconto já incluso
*/

#import <stdio.h>
#import <locale.h>

void main() {

    //Transforma todos os caracteres em língua portuguesa
    setlocale(LC_ALL, "Portuguese");

    //Mostra o nome do programa (opcional)
    printf("<<< EX010 - Preco do produto >>>\n");

    //Declarando variaveis que serao usadas
    char nome[30];
    float preco, desconto, preco_final;

    //Requisita o nome do produto em uma cadeia de caracteres
    printf("\nNome do produto: ");
    gets(nome);

    //Requisita o preco do produto em float
    printf("Preco do produto: ");
    scanf("%f", &preco);

    //Requisita o percentual de desconto em float
    printf("Desconto(%): ");
    scanf("%f", &desconto);

    //Calcula o preco final subtraindo o desconto que foi informado anteriormente
    preco_final = preco - (preco * (desconto/100));

    //Mostra quanto o produto custava, quanto foi o desconto em porcentagem e o preco final já com o desconto
    printf("\nO produto %s custava %.2f$", nome, preco);
    printf("\nCom o desconto de %.2f%%, agora custa %.2f$", desconto, preco_final);
}
