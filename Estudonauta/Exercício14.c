/*
Nome: Luiz Matheus
Data: 10/05/2023
Descricao: Solicita dois números e retorna o resultado com operadores de deslocamento
*/

#import <stdio.h>
#import <locale.h>

void main() {

    //Transforma tudo em português
    setlocale(LC_ALL, "Portuguese");

    //Cabecalho (opcional)
    printf("<<< EX014 - Operadores de deslocamento >>>\n");

    //Declarando variáveis
    int numero, deslocamento;

    //Solicitando o primeiro número
    printf("\nDigite um número: ");
    scanf("%i", &numero);
    
    //Limpando o teclado
    fflush(stdin);

    //Solicitando o deslocamento
    printf("Digite o deslocamento desejado: ");
    scanf("%i", &deslocamento);
    
    //Limpando o teclado
    fflush(stdin);

    //Cabecalho (opcional)
    printf("\n------ Operacões Shift ------\n");

    //Mostrando resultado do Operador right shift
    printf("\nCalculando %i >> %i = %i", numero, deslocamento, numero >> deslocamento);

    //Mostrando resultado do Operador left shift
    printf("\nCalculando %i << %i = %i", numero, deslocamento, numero << deslocamento);
}
