/*
Nome: Luiz Matheus
Data: 05/05/2023
Descricao: Solicita dois números e mostra qual é o maior entre eles
*/

#import <stdio.h>
#import <locale.h>

void main() {
    
    //Transformar tudo em português
    setlocale(LC_ALL, "Portuguese");

    //Declarando as variáveis inteiras
    int primeiro, segundo;

    //Solicitando o primeiro número para o usuário
    printf("Digite o primeiro número: ");
    scanf("%i", &primeiro);
    
    //limpando o teclado
    fflush(stdin);

    //solicitando o segundo número
    printf("Digite o segundo número: ");
    scanf("%i", &segundo);
    
    //limpando o teclado de novo
    fflush(stdin);

    //mostrando para o usuário o maior número a partir de um operador ternário
    printf("Entre %i e %i, o maior é %i", primeiro, segundo, (primeiro > segundo)?primeiro:segundo);
}
