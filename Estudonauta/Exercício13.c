/*
Nome: Luiz Matheus
Data: 10/05/2023
Descricao: Solicita dois números e mostra o resultado bitwise de cada um deles
*/

#import <stdio.h>
#import <locale.h>

void main() {

    //Transformar todos os caracteres em língua portuguesa
    setlocale(LC_ALL, "Portuguese");

    //Declarando variáveis
    int primeiro, segundo;

    //Cabeçalho do código (Opcional)
    printf("<<< EX013 - Operadores Bitwise >>>\n");

    //Solicitando o primeiro valor
    printf("\nDigite o primeiro valor: ");
    scanf("%i", &primeiro);

    //Solicitando o segundo valor
    printf("Digite o segundo valor: ");
    scanf("%i", &segundo);

    //Cabeçalho (opcional)
    printf("\n-------- Operacões bitwise --------\n");

    //Mostrando a operacão de conjuncão
    printf("\nCalculando %i & %i = %i", primeiro, segundo, primeiro & segundo);

    //Operacão de disjuncão
    printf("\nCalculando %i | %i = %i", primeiro, segundo, primeiro | segundo);

    //operacão de disjuncão exclusiva
    printf("\nCalculando %i ^ %i = %i", primeiro, segundo, primeiro ^ segundo);
}
