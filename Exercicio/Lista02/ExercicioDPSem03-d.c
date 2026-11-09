/*

exemplo completo da lista de exercicío 


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
/*
2 Exercıcio 2
Implemente uma funncão para a inicializacao da estrutura do tipo PESSOA
(definida na questao anterior). 
A assinatura e apresenta a seguir. 
A funcao tera um parametro de entrada chamado id do tipo inteiro e devera: alocar memoria
para uma PESSOA e preencher seus campos da seguinte forma: 
o campo id devera receber o valor do parametro id; 
os campos mae e pai deverao receber o valor NULL. Por fim, a funcao devera retornar o endereco da memoria que foi
alocada para essa PESSOA.
PESSOA* inicializar(int id)
*/

PESSOA* inicializar(int id)
{
    PESSOA *nova_pessoa = malloc(sizeof *nova_pessoa);
    if (nova_pessoa == NULL) {
        return NULL;
    }

    nova_pessoa->id = id;
    nova_pessoa->mae = NULL;
    nova_pessoa->pai = NULL;

    return nova_pessoa;
}

/*
3 Exerc´ıcio 3
Implemente uma fun¸c˜ao que recebe como parˆametros os endere¸cos de mem´oria
(referˆencias) de trˆes PESSOAS (filho, mae e pai) e atribui o valor do parˆametro
mae no campo mae da PESSOA referenciada pelo parˆametro filho e atribui o
valor do parˆametro pai no campo pai da PESSOA referenciada pelo parˆametro
filho. A assinatura dessa fun¸c˜ao ´e apresentada a seguir:
void registrar(PESSOA* filho, PESSOA* mae, PESSOA* pai)
*/
void registrar(PESSOA* filho, PESSOA* mae, PESSOA* pai)
{
    if (filho == NULL) {
        return;
    }

    filho->mae = mae;
    filho->pai = pai;
}

/*
    Implementação da função main para demonstrar as chamadas.
*/


int main(void)
{
    /* Cria as três pessoas: filho, mãe e pai. */
    PESSOA *filho = inicializar(1);
    PESSOA *mae = inicializar(2);
    PESSOA *pai = inicializar(3);

    /* Se alguma alocação falhar, libera o que foi alocado e encerra com erro. */
    if (filho == NULL || mae == NULL || pai == NULL) {
        fprintf(stderr, "Erro ao alocar memoria para as pessoas.\n");
        free(filho);
        free(mae);
        free(pai);
        return EXIT_FAILURE;
    }

    /* Registra os ponteiros da mãe e do pai nos campos do filho. */
    registrar(filho, mae, pai);

    /* Exibe o ID do filho e os IDs das pessoas apontadas por mae e pai. */
    printf("Filho: %d\n", filho->id);
    printf("Mae: %d\n", filho->mae->id);
    printf("Pai: %d\n", filho->pai->id);

    /* Libera a memória alocada para cada pessoa. */
    free(filho);
    free(mae);
    free(pai);

    /* Indica que o programa terminou sem erros. */
    return EXIT_SUCCESS;
}
