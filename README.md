# Pet
Este repositório contém scripts simples para a simulação de um pet, atualmente em nível de terminal. O objetivo é demonstrar como organizar os scripts de um programa. 
As funções são simples e o código é fácil de entender, permitindo que suas ideias sejam facilmente absorvidas

### Makefile
- all) Compila o executável pet.
- pet) Vincula os arquivos objeto para criar o executável.
- main.o e pet.o) Compilam os arquivos .c em arquivos objeto.
- clean) Remove o executável e os arquivos objeto.

## pet.h
arquivo de cabeçalho que define a estrutura e as funções para um pet virtual.
A definição da estrutura Pet com atributos nome, fome, energia e diversão.
Declarações de funções que manipulam um Pet: criarPet, exibirNivel, alimentar, brincar, descansar, e menu.

## pet.c
- criarPet


Inicializa um pet com um nome e define seus níveis de fome, energia e diversão para 5.
- exibirNivel

Exibe o estado atual do pet, mostrando os níveis de fome, energia e diversão.
- alimentar

Reduz o nível de fome do pet em 3 e diminui a diversão em 1.
- brincar

Aumenta o nível de diversão do pet em 2 e reduz a energia em 2.
- menu

Proporciona uma interface interativa para o usuário cuidar do pet. Permite escolher entre brincar, 
alimentar, descansar ou exibir o estado atual do pet. 
Monitora e ajusta os níveis de atributos, emitindo avisos e encerrando o jogo
se necessário.

## main.c
#### bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "pet.h"

- main

Declara uma estrutura Pet chamada pet.
Declara uma string nome para armazenar o nome do pet,solicita ao usuário que digite o nome do pet
Chama a função criarPet para inicializar o pet com o nome fornecido pelo usuário
Chama a função menu para iniciar a interação com o usuário
Retorna 0 para indicar que o programa terminou com sucesso
