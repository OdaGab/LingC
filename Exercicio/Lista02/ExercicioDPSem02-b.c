

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

// Resposta do Exercicío 2 esta no arquivo ExercicioDPSem02-c
