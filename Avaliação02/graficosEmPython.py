"""UNIVERSIDADE FEDERAL DO OESTE DO PARÁ
Curso: Sistemas de Informação
Professor: Cássio David Pinheiro
Aluna: Cássia Oliveira dos Santos

A partir de um programa em Python criado para apresentar um gráfico de dados, neste código irei reescrevê-lo 
usando as diretivas da programação funcional com foco na manipulação dos dados."""

"""
#código que será sobrescrito no paradigma funcional:
import matplotlib.pyplot as plt
def criar_grafico(dados):
    x = [item[0] for item in dados]
    y = [item[1] for item in dados]
    plt.plot(x, y)
    plt.show()

dados_originais = [(1, 2), (2, 3), (3, 5), (4, 4)]
criar_grafico(dados_originais) """

#biblioteca utilizada para criar visualizações gráficas em Python (ex: gráficos e plots)
import matplotlib.pyplot as plt

# Dados de exemplo (pontos no gráfico - plano cartesiano)
dados = [(1, 2), (2, 3), (3, 5), (4, 4)]

# Função de criação de um gráfico a partir dos dados
def criar_grafico(dados):
    x = [item[0] for item in dados]
    y = [item[1] for item in dados]
    plt.scatter(x, y)
    plt.show()

# 1. Mapeamento dos dados para extrair apenas os valores de x e y:
def extrair_x(dado):
    return dado[0]

def extrair_y(dado):
    return dado[1]

x_valores = list(map(extrair_x, dados))
y_valores = list(map(extrair_y, dados))

# 2. Aplicação de transformações ou filtros aos dados de maneira funcional: cálculo do quadrado de cada coordenada y
y_quadrados = list(map(lambda y: y**2, y_valores))

# 3. Redução dos dados usando uma função de agregação:
from functools import reduce

def somar(val1, val2):
    return val1 + val2

soma_y_quadrados = reduce(somar, y_quadrados)

# soma dos quadrados dos valores de y:
print("Soma dos quadrados de y:", soma_y_quadrados)
