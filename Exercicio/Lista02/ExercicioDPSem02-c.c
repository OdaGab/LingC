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
