''' Programadora: Cássia Oliveira dos Santos;
Professor: Cássio David Borralho Pinheiro;
Curso: Sistemas de Informação - Turma de 2022;


Este algoritmo recebe uma string e um caractere e retorna o número de vezes que esse caractere aparece na string.
Com ele, quero apresentar características do paradigma imperativo,  onde o passo a passo da solução do problema é 
especificado pelo programador no código para a máquina. Escolhi fazê-lo na função conta_caractere() pois acho que 
fica mais organizado a escrita do código. É nela (linhas 15-20 do arquivo) que se pode visualizar a processo de 
contagem dos caracteres.'''

# ########################### PARADIGMA IMPERATIVO ###########################

#função que fará o calculo da ocorrência de determinado caracter na string:
def conta_caractere(string, caractere):
    ocorrencia = 0
    for char in string:
        if char == caractere:
            ocorrencia += 1
    return ocorrencia


#uso da função:
string = input("String  a ser consutada: ")
caractere = input("Caracter que deseja consultar a ocorrência: ")

while len(caractere) > 1:
    caractere = input("Digite apenas 1 caracter que deseja consultar a ocorrência na string: ")

#chamada da função:
ocorrencias = conta_caractere(string, caractere)

#impressão no prompt:
print(f"O caractere '{caractere}' aparece {ocorrencias} vezes na string '{string}'.")
