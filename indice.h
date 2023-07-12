#ifndef INDICE_H_INCLUDED
#define INDICE_H_INCLUDED

#define tamanho_estrutura 150
#define tamanho_entrada 14
#define tamanho_saida 14
#define tamanho_label_resultado_conta 14

//Bloco construtor
int construtor();
GtkWidget* criar_widget(GtkWidget *objeto, GtkBuilder *construtor, char *nome);
int alocar_estrutura();

//Bloco funcoes
void funcao_botao_1();
void funcao_botao_2();
void funcao_botao_3();
void funcao_botao_4();
void funcao_botao_5();
void funcao_botao_6();
void funcao_botao_7();
void funcao_botao_8();
void funcao_botao_9();
void funcao_botao_0();

void funcao_somar();
void funcao_subtrair();
void funcao_multiplicar();
void funcao_dividir();
void funcao_virgula();
void funcao_igual();

void funcao_botao_limpar_entrada();
void funcao_botao_sinal_negativo();
void funcao_botao_limpar_tudo();
void funcao_botao_corrigir();

int tamanho_atual_buffer();

void identificador_calculo();

void insercao_texto();

void calculo_somar();
void calculo_subtrair();
void calculo_multiplicar();
void calculo_dividir();

//estrutura contendo as variaveis globais
struct estrutura_dados{
    GtkLabel *label_resultado_conta; //alocado
    GtkEntryBuffer *buffer_calculo; //alocado
    char *entrada; //alocado
    char *saida; //alocado
    const char *pegar_texto; //alocado
};



#endif // INDICE_H_INCLUDED
