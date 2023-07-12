#include <stdio.h>
#include <stdlib.h>
#include <gtk/gtk.h>
#include "indice.h"
#include <errno.h>

//Versão 1.0 Final!
//Feito por: Gustavo Moretto Itikawa


//A ideia e fazer uma calculadora básica
//Separar as funções e a construção do programa em arquivos diferentes
//A ideia de como vai ser interpretados os calculos e que a entrada sera uma string, e sera analisado se dentro da string há
//algum sinal matemático, caso contrário, será retornado o valor inserido

int main(int argc, char **argv)
{
    gtk_init(&argc, &argv);

    if(construtor()==TRUE)
    {
        printf("Erro! Erro nº %i, do tipo: %s", errno, strerror(errno));
        return TRUE;
    }

    gtk_main();

    return 0;
}
