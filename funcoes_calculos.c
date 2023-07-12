#include <stdio.h>
#include <stdlib.h>
#include <gtk/gtk.h>
#include "indice.h"

//esta parte do programa identifica qual funcao matematica sera chamada e retorna o resultado
//Apos identificado o operador matematico, e repassado o buffer para dados->saida, para que seja usado na operação matematica

void identificador_calculo(struct estrutura_dados *dados)
{
    int indice = 0;
    const char *buffer_analise[tamanho_entrada];

    printf("Repassando os dados do buffer para ser analisado...\n");
    *buffer_analise = gtk_entry_buffer_get_text(dados->buffer_calculo);

    //Este loop busca o buffer pelo operador matematico
    printf("Buscando operadores...\n");
    for(indice = 0;indice<tamanho_entrada;indice++)
    {

        if(strpbrk(*buffer_analise, "+")!=NULL)
           {
                printf("A funcao SOMA foi encontrada! Repassando para analisar...\n");
                strcpy(dados->saida, *buffer_analise);
                calculo_somar(dados);
                break;
           }else if(strpbrk(*buffer_analise, "-")!=NULL)
                {
                    printf("A funcao SUBTRAIR foi encontrada! Repassando para analisar...\n");
                    strcpy(dados->saida, *buffer_analise);
                    calculo_subtrair(dados);
                    break;

                }else if(strpbrk(*buffer_analise, "*")!=NULL)
                    {
                        printf("A funcao MULTIPLICAR foi encontrada! Repassando para analisar...\n");
                        strcpy(dados->saida, *buffer_analise);
                        calculo_multiplicar(dados);
                        break;

                    }else if(strpbrk(*buffer_analise, "/")!=NULL)
                        {
                            printf("A funcao DIVIDIR foi encontrada! Repassando para analisar...\n");
                            strcpy(dados->saida, *buffer_analise);
                            calculo_dividir(dados);
                            break;

                        }
    }

    printf("O resultado a ser impresso e: %s\n", dados->saida);
    gtk_label_set_text(dados->label_resultado_conta, dados->saida);

    gtk_entry_buffer_set_text(dados->buffer_calculo, "\0", -1);

    return;
}
