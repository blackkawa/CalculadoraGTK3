#ifndef INDICE_H_INCLUDED
#define INDICE_H_INCLUDED

#include <gtk/gtk.h>

#define tamanho_estrutura 150
#define tamanho_entrada 14
#define tamanho_saida 14
#define tamanho_label_resultado_conta 14

//Versão 1.0 - Finalizada!
///Versão 1.1 - Reestruturação do cabeçalho para evitar erros

///estrutura contendo as variaveis globais
typedef struct estrutura_dados{
    GtkLabel *label_resultado_conta; //alocado
    GtkEntryBuffer *buffer_calculo; //alocado
    char *entrada; //alocado
    char *saida; //alocado
    const char *pegar_texto; //alocado
}DadosCalculadora;


///Bloco construtor
int construtor();
GtkWidget* criar_widget(GtkWidget *objeto, GtkBuilder *construtor, char *nome);
int alocar_estrutura();

///Bloco funcoes
void funcao_botao_1(DadosCalculadora *dados);
void funcao_botao_2(DadosCalculadora *dados);
void funcao_botao_3(DadosCalculadora *dados);
void funcao_botao_4(DadosCalculadora *dados);
void funcao_botao_5(DadosCalculadora *dados);
void funcao_botao_6(DadosCalculadora *dados);
void funcao_botao_7(DadosCalculadora *dados);
void funcao_botao_8(DadosCalculadora *dados);
void funcao_botao_9(DadosCalculadora *dados);
void funcao_botao_0(DadosCalculadora *dados);

///Bloco funções matematicas
void funcao_somar(DadosCalculadora *dados);
void funcao_subtrair(DadosCalculadora *dados);
void funcao_multiplicar(DadosCalculadora *dados);
void funcao_dividir(DadosCalculadora *dados);
void funcao_virgula(DadosCalculadora *dados);
void funcao_igual(DadosCalculadora *dados);

///Bloco funções extras
void funcao_botao_limpar_entrada(DadosCalculadora *dados);
void funcao_botao_sinal_negativo(DadosCalculadora *dados);
void funcao_botao_limpar_tudo(DadosCalculadora *dados);
void funcao_botao_corrigir(DadosCalculadora *dados);
int tamanho_atual_buffer(DadosCalculadora *dados);
void identificador_calculo(DadosCalculadora *dados);
void insercao_texto();

///Bloco de calculos
void calculo_somar(DadosCalculadora *dados);
void calculo_subtrair(DadosCalculadora *dados);
void calculo_multiplicar(DadosCalculadora *dados);
void calculo_dividir(DadosCalculadora *dados);




#endif // INDICE_H_INCLUDED
