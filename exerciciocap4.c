#include <stdio.h>

int main(void)
{
    int i, j, s;

    for (i = 9; i >= 0; i--)
    {
        int indent = 9 - i; /* um espaço a cada linha para alinhar à direita */
        for (s = 0; s < indent; s++)
            printf(' ');

        for (j = 0; j <= i; j++)
            printf('*');

        printf('\n');
    }

    return 0;
}



