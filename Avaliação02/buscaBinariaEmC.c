#include <stdio.h>

// Função de busca binária
int buscaBinaria(int array[], int tamanho, int alvo) {
    int inicio = 0;         // Define o índice inicial do intervalo de busca
    int fim = tamanho - 1;  // Define o índice final do intervalo de busca

    // Enquanto o intervalo de busca não estiver vazio
    while (inicio <= fim) {
        int meio = (inicio + fim) / 2;  // Calcula o índice do meio do intervalo

        // Se o valor na posição do meio for igual ao alvo, retorna o índice do meio
        if (array[meio] == alvo)
            return meio;

        // Se o alvo for menor que o valor na posição do meio, ajusta o fim para a posição anterior ao meio
        else if (array[meio] > alvo)
            fim = meio - 1;

        // Se o alvo for maior que o valor na posição do meio, ajusta o início para a posição posterior ao meio
        else
            inicio = meio + 1;
    }

    // Se o alvo não estiver presente no array, retorna -1
    return -1;
}

int main() {
    int array[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int tamanho = sizeof(array) / sizeof(array[0]);  // Calcula o tamanho do array --> retorna quantidade de elementos no array
    int alvo = 23;
    int resultado = buscaBinaria(array, tamanho, alvo);  // Chama a função de busca binária

    // Verifica se o alvo foi encontrado e exibe a mensagem correspondente
    if (resultado != -1)
        printf("Elemento encontrado na posição %d.\n", resultado);
    else
        printf("Elemento não encontrado no array.\n");

    return 0;
}