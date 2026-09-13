#include <stdio.h>
#include <stdbool.h>

#define MAX 50 // Número máximo de elementos válidos na lista

// Definição do tipo de dado que será guardado (Registro)
typedef struct {
    int chave; // O campo chave que usaremos para ordenar e buscar
    // Outros campos do registro podem vir aqui (ex: nome, idade, etc.)
} REGISTRO;

// Definição da Estrutura da Lista Linear Sequencial
typedef struct {
    REGISTRO A[MAX]; // Arranjo (vetor) de registros
    int n;           // Número atual de elementos válidos na lista
} LISTA;

// Função para inicializar a lista
void inicializarLista(LISTA* l) {
    l->n = 0;
}

// Função para exibir os elementos da lista
void exibirLista(LISTA* l) {
    printf("Lista: ");
    for (int i = 0; i < l->n; i++) {
        printf("[%d] ", l->A[i].chave);
    }
    printf("\nTotal de elementos: %d\n\n", l->n);
}

// 1. INSERÇÃO ORDENADA (Baseada na explicação da aula)
bool inserirOrdenado(LISTA* l, REGISTRO reg) {
    // Verifica se a lista está cheia
    if (l->n >= MAX) {
        return false; // Lista cheia
    }

    // Começa a verificação do final para o começo para abrir espaço
    int pos = l->n;
    while (pos > 0 && l->A[pos - 1].chave > reg.chave) {
        l->A[pos] = l->A[pos - 1]; // Desloca o elemento para a direita
        pos--;
    }

    // Insere o registro na posição correta
    l->A[pos] = reg;
    l->n++; // Incrementa o número de elementos válidos
    return true;
}

// 2. BUSCA BINÁRIA (Funciona porque a lista está ordenada)
int buscaBinaria(LISTA* l, int chaveBuscada) {
    int esquerda = 0;
    int direita = l->n - 1;

    while (esquerda <= direita) {
        int meio = esquerda + (direita - esquerda) / 2; // Evita estouro de inteiro

        if (l->A[meio].chave == chaveBuscada) {
            return meio; // Elemento encontrado, retorna o índice
        } 
        else if (l->A[meio].chave < chaveBuscada) {
            esquerda = meio + 1; // Busca na metade direita
        } 
        else {
            direita = meio - 1;  // Busca na metade esquerda
        }
    }

    return -1; // Não encontrado
}

// Função principal (Exemplo de uso)
int main() {
    LISTA minhaLista;
    inicializarLista(&minhaLista);

    // Inserindo elementos desordenadamente para testar a ordenação automática
    REGISTRO r1 = {44};
    REGISTRO r2 = {11};
    REGISTRO r3 = {33};
    REGISTRO r4 = {22};
    REGISTRO r5 = {55};

    printf("Inserindo elementos...\n");
    inserirOrdenado(&minhaLista, r1);
    inserirOrdenado(&minhaLista, r2);
    inserirOrdenado(&minhaLista, r3);
    inserirOrdenado(&minhaLista, r4);
    inserirOrdenado(&minhaLista, r5);

    exibirLista(&minhaLista);

    // Testando a Busca Binária
    int chaveProcurada = 33;
    int resultado = buscaBinaria(&minhaLista, chaveProcurada);

    if (resultado != -1) {
        printf("Elemento %d encontrado na posicao (indice) %d do vetor.\n", chaveProcurada, resultado);
    } else {
        printf("Elemento %d nao encontrado na lista.\n", chaveProcurada);
    }

    chaveProcurada = 99; // Elemento que não existe
    resultado = buscaBinaria(&minhaLista, chaveProcurada);

    if (resultado != -1) {
        printf("Elemento %d encontrado na posicao %d.\n", chaveProcurada, resultado);
    } else {
        printf("Elemento %d nao encontrado na lista.\n", chaveProcurada);
    }

    return 0;
}