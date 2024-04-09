/* UNIVERSIDADE FEDERAL DO OESTE DO PARÁ
Curso: Sistemas de Informação
Professor: Cássio David Pinheiro
Aluna: Cássia Oliveira dos Santos

Nesse programa, busco calcular a quantidade de vogais, consoantes, espaço em branco e total de caracteres
inseridos manualmente no código através do paradigma imperativo sem utilizar metódos da biblioteca string.h
para exibir diretamente no console.*/

#include <stdio.h>
#include <string.h>

void main() {

    //defina a string a ser processada aqui:
    char palavra[] = "Conte A quantidade De Vogais E consoantes Nesta Frase";
    
    //variáveis necessárias:
    int qtVogais = 0, qtConsoantes = 0, espacoBranco = 0;
    
    //Cálculo da quantidade de vogais e consoante na string de entrada:
    for(int i=0; i < strlen(palavra); i++){
        //caso o caracter atual for vogal:
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
                //será incrementado 1 em qtVogais:
                qtVogais++;
                break;
            //caso contrário:
            default:
                //a letra atual pode ser consoante:
                qtConsoantes++;
        }
    }

    //loop que percorre novamente a string e conta quantidade de espaços em branco:
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
