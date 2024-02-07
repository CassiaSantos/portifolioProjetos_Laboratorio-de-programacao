''' Programadora: Cássia Oliveira dos Santos;
Professor: Cássio David Borralho Pinheiro;
Curso: Sistemas de Informação - Turma de 2022;


Este lgoritmo recebe uma string e um caractere e retorna o número de vezes que esse caractere aparece na string.
Com ele, quero apresentar características do paradigma DECLARATIVO, o foco é a solução do problema, sem se 
preocupar como será implemntada pelo computador. Isso é possível visualizar na linhas 22 através da chamada da 
função count() nativa de python'''

# ########################### PARADIGMA DECLARATIVO ###########################

#Solicitação de entrada de dados
string = input("String  a ser consutada: ")
caractere = input("Caracter que deseja consultar a ocorrência: ")


while len(caractere) > 1:
    caractere = input("Digite apenas 1 caracter que deseja consultar a ocorrência na string: ")


#impressão no prompt:
print(f"O caractere '{caractere}' aparece {string.count(caractere)} vez(es) na string '{string}'.")