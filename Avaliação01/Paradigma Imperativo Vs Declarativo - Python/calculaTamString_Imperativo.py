''' Programadora: Cássia Oliveira dos Santos;
Disciplina: Laborártório de Programação;
Docente: David Cássio Borralho;
Curso: Sistemas de Informação - 4º semestre;


Este algoritmo tem como finalidade, demonstrar o processamento de uma string e informar seu tamanho através do paradigma imperativo.
Neste, o passo a passo da solução é declarado, ou seja, informado para a máquina "o que" deve ser realizado. Isso é possível visualizar
nas linhas 17 e 18, em que compreende a declaração de um laço de repetição do tipo FOR para percorrer uma string e calcular seu tamanho.
Pois em cada iteração, o valor 1 é somado na string "tamanhoString" e após o calculo, o resultado é impresso na tela. '''


# Algoritmo:
def calcular_tamanho_string(string):
    if not string:  # Se a string estiver vazia
        return 0
    else:
        return 1 + calcular_tamanho_string(string[1:]) #recursão

# Exemplo de uso:
string = "Essa é a string que quero saber o tamanho!"
tamanho = calcular_tamanho_string(string)
print("O tamanho da string é:", tamanho)