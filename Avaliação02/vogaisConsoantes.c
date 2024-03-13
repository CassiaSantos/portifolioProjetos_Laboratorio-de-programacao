#include <stdio.h>
#include <string.h>

void main() {
    char palavra[] = "ConteAquantidadeDeVogaiEconsoantesNestaFrase!";
    int qtVogais = 0, qtConsoantes = 0;

    for(int i=0; i < strlen(palavra); i++)
        switch(palavra[i]) {
            case 'A':
            case 'a':
            case 'E':
            case 'e':
            case 'I':
            case 'i':
            case 'O':
            case 'o':
            case 'U':
            case 'u':
                qtVogais++;
                break;
            default:
                qtConsoantes++;
        }
            
    printf("Quantidade de vogais: %d\n", qtVogais);
    printf("Quantidade de consoantes: %d\n", qtConsoantes);
    printf("Total de letras inseridas: %d", (qtVogais+qtConsoantes));
}