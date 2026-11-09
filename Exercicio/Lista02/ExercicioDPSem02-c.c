/*
3 Exercıcio 3
Implemente uma funcao que recebe como parametros os enderecos de memoria
(referencias) de tres PESSOAS (filho, mae e pai) e atribui o valor do parametro
mae no campo mae da PESSOA referenciada pelo parametro filho e atribui o
valor do parametro pai no campo pai da PESSOA referenciada pelo parametro
filho. A assinatura dessa funcao e apresentada a seguir:
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

// Exercicío completo no ExercicioDPSem03-d
