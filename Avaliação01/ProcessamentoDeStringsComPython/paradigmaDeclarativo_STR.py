''' Programadora: Cássia Oliveira dos Santos;
Professor: Cássio David Borralho Pinheiro;
Curso: Sistemas de Informação - Turma de 2022;


Este algoritmo recebe uma string e um caractere e retorna o número de vezes que esse caractere aparece na string.
Com ele, quero apresentar características do paradigma DECLARATIVO, que tem como foco a solução do problema, 
sem se preocupar como o passo a passo será implementado pelo computador. Essa caraterística pode ser vista na 
linha 25, através da chamada da função count(), nativa de Python, pois ela conta quantas vezes um 
determinado substring (ou caractere) ocorre na string principal e retorna o resultado. Logo, não é preciso que
o programador especifique o passo a passo, somente chame a função.'''

# ########################### PARADIGMA DECLARATIVO ###########################

#Solicitação de entrada de dados
string = input("String  a ser consutada: ")
caractere = input("Caracter que deseja consultar a ocorrência: ")


while len(caractere) > 1:
    caractere = input("Digite apenas 1 caracter que deseja consultar a ocorrência na string: ")


#impressão no prompt:
print(f"O caractere '{caractere}' aparece {string.count(caractere)} vez(es) na string '{string}'.")
