# Super Trunfo em C

Programa desenvolvido em linguagem C que simula uma rodada do jogo Super Trunfo, comparando duas cartas de cidades através de um menu interativo.
Este projeto representa a evolução dos desafios anteriores, culminando em uma versão organizada, reutilizável e estruturada utilizando struct, funções auxiliares e menus dinâmicos.

## Cartas utilizadas

O programa trabalha com duas cartas pré-cadastradas:

- São Paulo
- Rio de Janeiro

Cada carta possui os seguintes atributos:

- População
- Área
- PIB
- Pontos turísticos
- Densidade demográfica (calculada automaticamente)

## Funcionalidades implementadas

O usuário pode:

- Escolher dois atributos diferentes para comparação
- Utilizar um menu dinâmico (o segundo menu não mostra o atributo já escolhido)
- Visualizar uma interface organizada no terminal
- Ver os valores de cada atributo para as duas cartas
- Ver a soma dos atributos escolhidos
- Descobrir qual carta venceu ou se houve empate

## Regras de comparação

- Para todos os atributos, vence a carta com o maior valor
- Exceção: Densidade demográfica → vence a carta com o menor valor
- Após comparar os dois atributos, é feita a soma dos valores
- A carta com a maior soma vence

## Conceitos de C aplicados

Este projeto utiliza:

- struct para representar as cartas
- Funções auxiliares
- switch
- if / else aninhados
- Operador ternário
- Menus interativos no terminal
- Organização e reutilização de código

## Como compilar e executar (Code::Blocks)

- Abra o Code::Blocks
- Clique em File → Open
- Selecione o arquivo do projeto ou o .c
- Clique em Build and Run (ou pressione F9)

O programa será compilado e executado automaticamente no console

### Projeto desenvolvido e testado utilizando a IDE Code::Blocks.
