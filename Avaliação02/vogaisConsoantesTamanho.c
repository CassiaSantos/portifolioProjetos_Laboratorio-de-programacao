#include <stdio.h>
#include <string.h>

void main() {

    //Cálculo da quantidade de letras e consoante na palavra:
    char palavra[] = "Conte A quantidade De Vogais E consoantes Nesta Frase";
    int qtVogais = 0, qtConsoantes = 0, espacoBranco = 0;

    for(int i=0; i < strlen(palavra); i++){
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
    }

    for(int i = 0; i < strlen(palavra); i++){
        switch(palavra[i]) {
            case ' ':
                espacoBranco++;
                break;
        }
    }
    

    //Impressões na tela:     
    printf("Quantidade de vogais: %d\n", qtVogais);
    printf("Quantidade de consoantes: %d\n", (qtConsoantes-espacoBranco));
    printf("Quantidade de espaços em branco: %d\n", espacoBranco);
    printf("Total de caracteres inseridos: %d", (qtVogais+qtConsoantes));
}