/* UNIVERSIDADE FEDERAL DO OESTE DO PARÁ
Curso: Sistemas de Informação
Professor: Cássio David Pinheiro
Aluna: Cássia Oliveira dos Santos

Nesse programa, busco abordar um tópico de estruta de dados chamado busca binária. Para isso, criei um algoritmo
em C que implementa essa busca utilizando o paradigma imperativo.*/

#include <stdio.h>

//Função de busca binária
int buscaBinaria(int array[], int tamanho, int elementoAlvo) {

    int inicio = 0;         //índice inicial do intervalo de busca
    int fim = tamanho - 1;  //índice final do intervalo de busca

    //Enquanto o intervalo de busca for válido (maior que 0):
    while (inicio <= fim) {
        int meio = (inicio + fim) / 2;  //Calcula o índice do meio do intervalo

        //Se a chave (valor alvo) estiver no índice do meio do vetor, ele será retornado:
        if (array[meio] == elementoAlvo)
            return meio;

        /*Se o valor da chave for menor que o valor na posição do meio do vetor, 
        o fim do intervalo de busca é ajustado para a posição anterior a esse elemento do meio*/
        else if (array[meio] > elementoAlvo)
            fim = meio - 1;

        /*Se o valor da chave for maior que o valor na posição do meio do vetor, 
        o início do intervalo de busca é ajustado para a posição posterior a esse elemento do meio*/
        else
            inicio = meio + 1;
    }

    //Se o alvo não existir no array, retorna -1
    return -1;
}

void main() {
    
    //array em que a busca biária será aplicada:
    int array[] = {2, 5, 8, 12, 16, 23, 38, 48, 56, 72, 87, 91, 102};
    
    //cálculo da quantidade de elementos no array:
    int tamanho = sizeof(array) / sizeof(array[0]);
    
    //elemento que será buscado no vetor (chave):
    int elementoAlvo = 91;
  
     //Chamada da função de busca binária: buscaBinaria()
    int resultado = buscaBinaria(array, tamanho, elementoAlvo);

    //Verificação se a chave foi encontrada e exibiçõa da mensagem correspondente:
    if (resultado != -1)
        printf("Elemento encontrado no index %d do vetor.\n", resultado);
    else
        printf("Elemento não encontrado no array.\n");
}
