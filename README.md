# Programa de Cálculo do IMC

Este é um programa simples em C++ para calcular o Índice de Massa Corporal (IMC) de uma pessoa. O programa recebe o peso e a altura como entrada, calcula o IMC e fornece a classificação correspondente com base nos valores do IMC.

## Funcionalidades

- **Cálculo do IMC**: O programa solicita ao usuário seu peso (em quilogramas) e altura (em metros) e calcula o IMC usando a fórmula:

  \[
  IMC = \frac{\text{peso}}{\text{altura}^2}
  \]

- **Classificação do IMC**: Com base no valor calculado, o programa retorna a classificação do IMC, que pode ser uma das seguintes:

  - Magreza grave
  - Magreza moderada
  - Magreza leve
  - Saudável
  - Sobrepeso
  - Obesidade Grau I
  - Obesidade Grau II
  - Obesidade Grau III

## Como Funciona

1. O programa solicita que o usuário insira seu peso e altura.
2. Calcula o IMC usando a fórmula mencionada.
3. Exibe o IMC e a classificação correspondente.

## Requisitos
O programa foi desenvolvido em C++ e requer um compilador C++ que suporte a norma C++11 ou superior.
Configuração de locale para suporte ao idioma português do Brasil (pt_BR.UTF-8).

# Como Compilar e Rodar

Usando g++ no Linux ou macOS:
1. Compile o codigo:
   ```text
   g++ -o calculo_imc imc.cpp

2. Execulte o progama:
   ```text
   ./calculo_imc

Usando MinGW no Windows:
1. Compile o codigo:
   ```text
   g++ -o calculo_imc.exe imc.cpp


2. Execulte o progama:
   ```text
   calculo_imc.exe
 
   










