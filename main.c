#include <stdio.h>
#include <stdlib.h>
#include <gtk/gtk.h>
#include "indice.h"
#include <errno.h>

//Vers�o 1.0 Final!
//Feito por: Gustavo Moretto Itikawa


//A ideia e fazer uma calculadora b�sica
//Separar as fun��es e a constru��o do programa em arquivos diferentes
//A ideia de como vai ser interpretados os calculos e que a entrada sera uma string, e sera analisado se dentro da string h�
//algum sinal matem�tico, caso contr�rio, ser� retornado o valor inserido

int main(int argc, char **argv)
{
    gtk_init(&argc, &argv);

    if(construtor()==TRUE)
    {
        printf("Erro! Erro n� %i, do tipo: %s", errno, strerror(errno));
        return TRUE;
    }

    gtk_main();

    return 0;
}
