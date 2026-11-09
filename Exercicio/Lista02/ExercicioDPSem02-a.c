/*
1 Exercicio 1
Escreva os comandos que definem uma estrutura (struct) chamada PESSOA que
possui tres campos: id do tipo inteiro; mae do tipo referencia para PESSOA; e
pai do tipo referencia para PESSOA.
*/

#include <stdlib.h>
#include <stdio.h>

typedef struct PESSOA
{
    int id;
    struct PESSOA *mae;
    struct PESSOA *pai;
} PESSOA;

// Resposta do Exercicío 2 esta no arquivo ExercicioDPSem02-b
