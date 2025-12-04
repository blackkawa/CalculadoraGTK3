#include <stdio.h>
#include <stdlib.h>
#include <gtk/gtk.h>
#include "indice.h"
#include <ctype.h>

//Versão 1.0 - Finalizada!
///Versão 1.1 Correção de erros: refatoração da alocação para evitar estouro de memória

//Esta parte do programa monta a estrutura visual do programa em GTK, e liga os botoes aos sinais correspondentes, além de inicializar
//a estrutura global do programa.

//A quantidade de memoria necessaria para ser alocada nesta estrutura e de 120 bytes
struct estrutura_dados *dados;

//Esta parte constroi a parte visual do programa.
int construtor()
{
    //Bloco de variaveis do construtor
    GtkBuilder *construtor = NULL;
    GtkWidget *janela_calculadora = NULL;
    GtkWidget *box_geral = NULL;
    GtkWidget *grid_botoes = NULL;
    GtkWidget *botao_7 = NULL;
    GtkWidget *botao_8 = NULL;
    GtkWidget *botao_9 = NULL;
    GtkWidget *botao_6 = NULL;
    GtkWidget *botao_5 = NULL;
    GtkWidget *botao_4 = NULL;
    GtkWidget *botao_1 = NULL;
    GtkWidget *botao_virgula = NULL;
    GtkWidget *botao_0 = NULL;
    GtkWidget *botao_2 = NULL;
    GtkWidget *botao_3 = NULL;
    GtkWidget *botao_igual = NULL;
    GtkWidget *botao_dividir = NULL;
    GtkWidget *botao_multiplicar = NULL;
    GtkWidget *botao_subtrair = NULL;
    GtkWidget *botao_somar = NULL;
    GtkWidget *label_calculadora = NULL;
    GtkWidget *box_entradas = NULL;
    GtkWidget *entry_calculo = NULL;
    GtkWidget *label_calculo = NULL;
    GtkWidget *label_resultado = NULL;
    GtkWidget *botao_sinal_negativo = NULL;
    GtkWidget *botao_limpar_tudo = NULL;
    GtkWidget *botao_limpar_entrada = NULL;
    GtkWidget *botao_corrigir = NULL;
    GdkPixbuf *icone = NULL;

    if(alocar_estrutura()==TRUE)
    {
        printf("Erro! Erro nº %i, do tipo: %s", errno, strerror(errno));
        return TRUE;
    }

    printf("Criando a estrutura...\n");

    construtor = gtk_builder_new_from_file("Calculadora.glade");

    if(construtor==NULL)
    {
        printf("Erro! Erro nº %i, do tipo: %s", errno, strerror(errno));
        return TRUE;
    }

    icone = gdk_pixbuf_new_from_file("icone.png", NULL);

    janela_calculadora = criar_widget(janela_calculadora, construtor, "janela_calculadora");
    gtk_window_set_icon(GTK_WINDOW(janela_calculadora), GDK_PIXBUF(icone));

    g_signal_connect_swapped(janela_calculadora, "destroy", G_CALLBACK(free), dados->entrada);
    g_signal_connect_swapped(janela_calculadora, "destroy", G_CALLBACK(free), dados->saida);
    g_signal_connect_swapped(janela_calculadora, "destroy", G_CALLBACK(free), dados->label_resultado_conta);
    g_signal_connect_swapped(janela_calculadora, "destroy", G_CALLBACK(free), dados);
    g_signal_connect(janela_calculadora, "destroy", G_CALLBACK(gtk_main_quit), NULL);

    box_geral = criar_widget(box_geral, construtor, "box_geral");
    grid_botoes = criar_widget(grid_botoes, construtor, "grid_botoes");
    box_entradas = criar_widget(box_entradas, construtor, "box_entradas");
    label_resultado = criar_widget(label_resultado, construtor, "label_resultado");
    label_calculo = criar_widget(label_calculo, construtor, "label_calculo");
    label_calculadora = criar_widget(label_calculadora, construtor, "label_calculadora");

    dados->buffer_calculo = GTK_ENTRY_BUFFER(gtk_builder_get_object(construtor, "buffer_calculo"));
    if(dados->buffer_calculo==NULL)
    {
        printf("Erro! Erro nº %i, do tipo: %s", errno, strerror(errno));
    }

    botao_7 = criar_widget(botao_7, construtor, "botao_7");
    g_signal_connect_swapped(botao_7, "clicked", G_CALLBACK(funcao_botao_7), dados);

    botao_8 = criar_widget(botao_8, construtor, "botao_8");
    g_signal_connect_swapped(botao_8, "clicked", G_CALLBACK(funcao_botao_8), dados);

    botao_9 = criar_widget(botao_9, construtor, "botao_9");
    g_signal_connect_swapped(botao_9, "clicked", G_CALLBACK(funcao_botao_9), dados);

    botao_6 = criar_widget(botao_6, construtor, "botao_6");
    g_signal_connect_swapped(botao_6, "clicked", G_CALLBACK(funcao_botao_6), dados);

    botao_5 = criar_widget(botao_5, construtor, "botao_5");
    g_signal_connect_swapped(botao_5, "clicked", G_CALLBACK(funcao_botao_5), dados);

    botao_4 = criar_widget(botao_4, construtor, "botao_4");
    g_signal_connect_swapped(botao_4, "clicked", G_CALLBACK(funcao_botao_4), dados);

    botao_1 = criar_widget(botao_1, construtor, "botao_1");
    g_signal_connect_swapped(botao_1, "clicked", G_CALLBACK(funcao_botao_1), dados);

    botao_0 = criar_widget(botao_0, construtor, "botao_0");
    g_signal_connect_swapped(botao_0, "clicked", G_CALLBACK(funcao_botao_0), dados);

    botao_2 = criar_widget(botao_2, construtor, "botao_2");
    g_signal_connect_swapped(botao_2, "clicked", G_CALLBACK(funcao_botao_2), dados);

    botao_3 = criar_widget(botao_3, construtor, "botao_3");
    g_signal_connect_swapped(botao_3, "clicked", G_CALLBACK(funcao_botao_3), dados);

    botao_virgula = criar_widget(botao_virgula, construtor, "botao_virgula");
    g_signal_connect_swapped(botao_virgula, "clicked", G_CALLBACK(funcao_virgula), dados);

    botao_igual = criar_widget(botao_igual, construtor, "botao_igual");

    g_signal_connect_swapped(botao_igual, "clicked", G_CALLBACK(funcao_igual), dados);

    botao_dividir = criar_widget(botao_dividir, construtor, "botao_dividir");
    g_signal_connect_swapped(botao_dividir, "clicked", G_CALLBACK(funcao_dividir), dados);

    botao_multiplicar = criar_widget(botao_multiplicar, construtor, "botao_multiplicar");
    g_signal_connect_swapped(botao_multiplicar, "clicked", G_CALLBACK(funcao_multiplicar), dados);

    botao_subtrair = criar_widget(botao_subtrair, construtor, "botao_subtrair");
    g_signal_connect_swapped(botao_subtrair, "clicked", G_CALLBACK(funcao_subtrair), dados);

    botao_somar = criar_widget(botao_somar, construtor, "botao_somar");
    g_signal_connect_swapped(botao_somar, "clicked", G_CALLBACK(funcao_somar), dados);

    entry_calculo = criar_widget(entry_calculo, construtor, "entry_calculo");
    g_signal_connect_swapped(G_OBJECT(entry_calculo), "insert-text", G_CALLBACK(insercao_texto), dados);

    botao_limpar_entrada = criar_widget(botao_limpar_entrada, construtor, "botao_limpar_entrada");
    g_signal_connect_swapped(G_OBJECT(botao_limpar_entrada), "clicked", G_CALLBACK(funcao_botao_limpar_entrada), dados);

    botao_sinal_negativo = criar_widget(botao_sinal_negativo, construtor, "botao_sinal_negativo");
    g_signal_connect_swapped(G_OBJECT(botao_sinal_negativo), "clicked", G_CALLBACK(funcao_botao_sinal_negativo), dados);

    botao_limpar_tudo = criar_widget(botao_limpar_tudo, construtor, "botao_limpar_tudo");
    g_signal_connect_swapped(G_OBJECT(botao_limpar_tudo), "clicked", G_CALLBACK(funcao_botao_limpar_tudo), dados);

    botao_corrigir = criar_widget(botao_corrigir, construtor, "botao_corrigir");
    g_signal_connect_swapped(G_OBJECT(botao_corrigir), "clicked", G_CALLBACK(funcao_botao_corrigir), dados);

    printf("Criando a label_resultado_conta...\n");
    dados->label_resultado_conta = GTK_LABEL(gtk_builder_get_object(construtor, "label_resultado_conta"));

    printf("Checando a label_resultado_conta...\n");
    if(dados->label_resultado_conta==NULL)
    {
        printf("Erro! Erro nº %i, do tipo: %s", errno, strerror(errno));
    }

    g_object_unref(construtor);

    printf("Mostrando a Janela...\n");
    gtk_widget_show(janela_calculadora);

    printf("O programa foi construido corretamente!\n");
    return FALSE;
}

//funcao para criar os widgets a partir do construtor
GtkWidget* criar_widget(GtkWidget *objeto, GtkBuilder *construtor, char *nome)
{
    objeto = GTK_WIDGET(gtk_builder_get_object(construtor, nome));

    if(objeto==NULL)
    {
        printf("Erro! Erro nº %i, do tipo: %s", errno, strerror(errno));
        return NULL;
    }


    return objeto;
}

//Esta funcao evita que seja inserido texto no buffer de entrada
void insercao_texto(GtkEditable *editable, const gchar *text, gint length)
{
    int i;

    //passa por todo o buffer
    for (i = 0; i < length; i++) {
        //checa se o caractere e pontuacao ou nao, caso nao seja uma pontuacao, segue
        if (!ispunct(text[i]))
        {
            //checa se o texto e um digito ou nao, se nao for um digito, segue
            if(!isdigit(text[i]))
            {
                printf("Foi inserido texto!\n");
                g_signal_stop_emission_by_name(G_OBJECT(editable), "insert-text");
                return;
            }
        }
        }
    return;
}

//Esta funcao inicializa e aloca a estrutura global do programa.
int alocar_estrutura()
{
    char *teste = "\0";
    printf("Alocando os dados globais...\n");

    dados = malloc(sizeof(char[tamanho_estrutura]));
    if(dados==NULL)
    {
        printf("Erro! Erro nº %i, do tipo: %s", errno, strerror(errno));
        return TRUE;
    }

    printf("Alocando a entrada...\n");
    dados->entrada = malloc(sizeof(char [tamanho_entrada]));
    if(dados->entrada==NULL)
    {
        printf("Erro! Erro nº %i, do tipo: %s", errno, strerror(errno));
        return TRUE;
    }

    printf("Alocando a saida...\n");
    dados->saida = malloc(sizeof(char [tamanho_saida]));
    if(dados->saida==NULL)
    {
        printf("Erro! Erro nº %i, do tipo: %s", errno, strerror(errno));
        return TRUE;
    }

    printf("Alocando a label...\n");
    dados->label_resultado_conta = malloc(tamanho_label_resultado_conta * sizeof(char));
    if(dados->saida==NULL)
    {
        printf("Erro! Erro nº %i, do tipo: %s", errno, strerror(errno));
        return TRUE;
    }

    printf("Alocando o buffer...\n");
    dados->buffer_calculo = malloc(tamanho_entrada * sizeof(char));
    if(dados->buffer_calculo==NULL)
    {
        printf("Erro! Erro nº %i, do tipo: %s", errno, strerror(errno));
        return TRUE;
    }

    printf("Alocando o pega_texto...\n");
    dados->pegar_texto = malloc(sizeof(char[tamanho_entrada]));
    if(dados->pegar_texto==NULL)
    {
        printf("Erro! Erro nº %i, do tipo: %s", errno, strerror(errno));
        return TRUE;
    }

    dados->saida = malloc(tamanho_saida * sizeof(char));

    printf("Inicializando a entrada e a saida...\n");
    printf("Inicializando entrada...\n");
    if(!strncpy(dados->entrada, "\0", 2))
    {
        printf("Testando entrada...\n");
        if(strcmp(dados->entrada, teste)!=0)
        {
            printf("Erro! Erro nº %i, do tipo: %s", errno, strerror(errno));
            return TRUE;
        }

    }
    printf("Inicializando saida...\n");
    if(!strncpy(dados->saida, "\0", 2))
    {
        printf("Testando saida...\n");
        if(strcmp(dados->saida, teste)!=0)
        {
            printf("Erro! Erro nº %i, do tipo: %s", errno, strerror(errno));
            return TRUE;
        }
    }

    return FALSE;
}
