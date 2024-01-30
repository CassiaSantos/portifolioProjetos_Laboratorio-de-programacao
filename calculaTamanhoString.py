''' Programadora: Cássia Oliveira dos Santos;
Disciplina: Laborártório de Programação;
Docente: David Cássio Borralho;
Curso: Sistemas de Informação - 4º semestre;


Este algoritmo tem como finalidade, demonstrar o processamento de uma string e informar seu tamanho através do paradigma imperativo.
Neste, o passo a passo da solução é declarado, ou seja, informado para a máquina "o que" deve ser realizado. Isso é possível visualizar
nas linhas 17 e 18, em que compreende a declaração de um laço de repetição do tipo FOR para percorrer uma string e calcular seu tamanho.
Pois em cada iteração, o valor 1 é somado na string "tamanhoString" e após o calculo, o resultado é impresso na tela. '''


# Algoritmo:
string = "Essa é a string que quero calcular o tamanho!"
tamanhoString = 0

for char in string:
    tamanhoString += 1

print("O tamanho da string inserida é: ", tamanhoString)