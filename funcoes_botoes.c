#include <stdio.h>
#include <stdlib.h>
#include <gtk/gtk.h>
#include "indice.h"

//Esta parte do programa liga os botoes com as suas respectivas ações, no caso inserir os valores no buffer e chamar o calculo no caso
//do botao =

int tamanho_atual_buffer(struct estrutura_dados *dados)
{
    const char *tamanho;
    int resultado = 0;

    tamanho = gtk_entry_buffer_get_text(dados->buffer_calculo);

    resultado = strlen(tamanho);

    printf("O tamanho atual do buffer e: %i\n", resultado);

    return resultado;
}

void funcao_botao_1(struct estrutura_dados *dados)
{
    int tamanho = 0;

    tamanho = tamanho_atual_buffer(dados);

    printf("Apertou o botao 1!\n");
    gtk_entry_buffer_insert_text(dados->buffer_calculo, tamanho, "1", -1);
    return;
}
void funcao_botao_2(struct estrutura_dados *dados)
{
    int tamanho = 0;

    tamanho = tamanho_atual_buffer(dados);

    printf("Apertou o botao 2!\n");
    gtk_entry_buffer_insert_text(dados->buffer_calculo, tamanho, "2", -1);
    return;
}
void funcao_botao_3(struct estrutura_dados *dados)
{
    int tamanho = 0;

    tamanho = tamanho_atual_buffer(dados);

    printf("Apertou o botao 3!\n");
    gtk_entry_buffer_insert_text(dados->buffer_calculo, tamanho, "3", -1);
    return;
}
void funcao_botao_4(struct estrutura_dados *dados)
{
    int tamanho = 0;

    tamanho = tamanho_atual_buffer(dados);

    printf("Apertou o botao 4!\n");
    gtk_entry_buffer_insert_text(dados->buffer_calculo, tamanho, "4", -1);
    return;
}
void funcao_botao_5(struct estrutura_dados *dados)
{
    int tamanho = 0;

    tamanho = tamanho_atual_buffer(dados);

    printf("Apertou o botao 5!\n");
    gtk_entry_buffer_insert_text(dados->buffer_calculo, tamanho, "5", -1);
    return;
}
void funcao_botao_6(struct estrutura_dados *dados)
{
    int tamanho = 0;

    tamanho = tamanho_atual_buffer(dados);

    printf("Apertou o botao 6!\n");
    gtk_entry_buffer_insert_text(dados->buffer_calculo, tamanho, "6", -1);
    return;
}
void funcao_botao_7(struct estrutura_dados *dados)
{
    int tamanho = 0;

    tamanho = tamanho_atual_buffer(dados);

    printf("Apertou o botao 7!\n");
    gtk_entry_buffer_insert_text(dados->buffer_calculo, tamanho, "7", -1);
    return;
}
void funcao_botao_8(struct estrutura_dados *dados)
{
    int tamanho = 0;

    tamanho = tamanho_atual_buffer(dados);

    printf("Apertou o botao 8!\n");
    gtk_entry_buffer_insert_text(dados->buffer_calculo, tamanho, "8", -1);
    return;
}
void funcao_botao_9(struct estrutura_dados *dados)
{
    int tamanho = 0;

    tamanho = tamanho_atual_buffer(dados);

    printf("Apertou o botao 9!\n");
    gtk_entry_buffer_insert_text(dados->buffer_calculo, tamanho, "9", -1);
    return;
}
void funcao_botao_0(struct estrutura_dados *dados)
{
    int tamanho = 0;

    tamanho = tamanho_atual_buffer(dados);

    printf("Apertou o botao 0!\n");
    gtk_entry_buffer_insert_text(dados->buffer_calculo, tamanho, "0", -1);
    return;
}

void funcao_somar(struct estrutura_dados *dados)
{
    int tamanho = 0;

    tamanho = tamanho_atual_buffer(dados);

    printf("Apertou o botao Somar!\n");
    gtk_entry_buffer_insert_text(dados->buffer_calculo, tamanho, "+", -1);
    return;
}
void funcao_subtrair(struct estrutura_dados *dados)
{
    int tamanho = 0;

    tamanho = tamanho_atual_buffer(dados);

    printf("Apertou o botao Subtrair!\n");
    gtk_entry_buffer_insert_text(dados->buffer_calculo, tamanho, "-", -1);
    return;
}
void funcao_multiplicar(struct estrutura_dados *dados)
{
    int tamanho = 0;

    tamanho = tamanho_atual_buffer(dados);

    printf("Apertou o botao Multiplicar!\n");
    gtk_entry_buffer_insert_text(dados->buffer_calculo, tamanho, "*", -1);
    return;
}
void funcao_dividir(struct estrutura_dados *dados)
{
    int tamanho = 0;

    tamanho = tamanho_atual_buffer(dados);

    printf("Apertou o botao Dividir!\n");
    gtk_entry_buffer_insert_text(dados->buffer_calculo, tamanho, "/", -1);
    return;
}
void funcao_virgula(struct estrutura_dados *dados)
{
    int tamanho = 0;

    tamanho = tamanho_atual_buffer(dados);

    printf("Apertou o botao Virgula!\n");
    gtk_entry_buffer_insert_text(dados->buffer_calculo, tamanho, ",", -1);
    return;
}
void funcao_igual(struct estrutura_dados *dados)
{
    printf("Apertou o botao Igual!\n");

    printf("Chamando o identificador de calculos...\n");
    identificador_calculo(dados);

    return;
}

void funcao_botao_limpar_entrada(struct estrutura_dados *dados)
{
    printf("Apertou o botao Limpar Entrada!\n");
    gtk_entry_buffer_delete_text(dados->buffer_calculo, 0, -1);
    return;
}
void funcao_botao_sinal_negativo(struct estrutura_dados *dados)
{
    printf("Apertou o botao Sinal Negativo!\n");
    gtk_entry_buffer_insert_text(dados->buffer_calculo, 0, "-", 1);
    return;
}
void funcao_botao_limpar_tudo(struct estrutura_dados *dados)
{
    printf("Apertou o botao Limpar Tudo!\n");
    gtk_entry_buffer_delete_text(dados->buffer_calculo, 0, -1);
    gtk_label_set_text(dados->label_resultado_conta, "\0");
    return;
}
void funcao_botao_corrigir(struct estrutura_dados *dados)
{
    printf("Apertou o botao Corrigir!\n");
    int tamanho = 0;
    tamanho = gtk_entry_buffer_get_length(dados->buffer_calculo);
    gtk_entry_buffer_delete_text(dados->buffer_calculo, tamanho-1, 1);
    return;
}
