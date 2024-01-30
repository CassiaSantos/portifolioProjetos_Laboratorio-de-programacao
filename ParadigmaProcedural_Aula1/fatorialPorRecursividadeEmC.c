/* Autora do código: Cássia Oliveira dos Santos;
Professor: Cássio David Borralho;
Disciplina: Laborátorio de Programação;
Curso: Sistemas de Informação - 4º semestre;
Instituição: Universidade Federal do Oeste do Pará - Santarém


Este pequeno programa exemplifica o paradgma de programação imperativo, também chamado de procedural,
pois detalha à maquina o passo a passo de como realizar o cálculo fatorial de um número (por recursividade).
Escolhi codificá-lo na liguagem C porque apresendi durante o curso em semestres anteriores e achei mais simples.
Fiz utilizando a recursividade porque aprendi a lógica com ela e queria relembrar. Eu acho legal dessa forma.*/ 

#include <stdio.h>

double calculaFatorial(int numero) {
    //caso base:
    if((numero == 1) ||  (numero == 0)){
        return 1;
    } else {
        return numero*calculaFatorial(numero - 1);
    }
} 

void main() {
    
    int fatorialDe  = 5; 
    double resultadoFatorial = calculaFatorial(fatorialDe);
    
    //printf("\n\nDigite o número que deseja obter o fatorial: ");
    //scanf("%d", &fatorialDe);
    
    if (fatorialDe < 0){
        printf("NÚMEROS NEGATIVOS NÃO POSSUEM FATORIAL!");
    } else {                     
        printf("%d! = %.f", fatorialDe, resultadoFatorial);
    }
}
