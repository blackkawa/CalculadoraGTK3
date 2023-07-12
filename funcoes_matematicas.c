#include <stdio.h>
#include <stdlib.h>
#include <gtk/gtk.h>
#include "indice.h"
#define _OPEN_SYS_ITOA_EXT

//Esta parte do programa e as funções matematicas em si

/*Cada funcao reparte o buffer em duas partes, e executa a funcao matematica necessaria, e devolve o valor nos dados->saida para
ser impresso
*/

void calculo_somar(struct estrutura_dados *dados)
{
    float buffer1=0, buffer2=0;
    char *entrada='\0', *operador="+";
    char *buffer_analise;

    buffer_analise = malloc(sizeof(char[tamanho_entrada]));

    //copia o valor do dados->saida para ser repartido
    printf("Organizando os valores...\n");
    strcpy(buffer_analise, dados->saida);

    //Neste primeiro recorte, obtem os valores antes do operador
    printf("Recortando o buffer...\n");
    entrada = strtok(buffer_analise, operador);

    buffer1 = atoi(entrada);

    //Neste segundo recorte, obtem os valores apos o operador
    printf("Recortando o buffer novamente...\n");
    entrada = strtok(NULL, operador);

    buffer2 = atoi(entrada);

    printf("Os valores dos buffers sao: buffer1: %f, e buffer2: %f\n", buffer1, buffer2);

    printf("Somando os valores...\n");

    buffer1 = buffer1+buffer2;

    printf("O resultado sera: %f\n", buffer1);

    //repassar o resultado da operacao para o dados->saida para ser impresso

    strcpy(dados->saida, "\0");

    sprintf(dados->saida, "%f", buffer1);

    printf("O resultado final sera: %s\n", dados->saida);

    free(buffer_analise);

    return;
}

void calculo_subtrair(struct estrutura_dados *dados)
{
    float buffer1=0, buffer2=0;
    char *entrada='\0', *operador="-";
    char *buffer_analise;

    buffer_analise = malloc(sizeof(char[tamanho_entrada]));

    //copia o valor do dados->saida para ser repartido
    printf("Organizando os valores...\n");
    strcpy(buffer_analise, dados->saida);

    //Neste primeiro recorte, obtem os valores antes do operador
    printf("Recortando o buffer...\n");
    entrada = strtok(buffer_analise, operador);

    buffer1 = atoi(entrada);

    //Neste segundo recorte, obtem os valores apos o operador
    printf("Recortando o buffer novamente...\n");
    entrada = strtok(NULL, operador);

    buffer2 = atoi(entrada);

    printf("Os valores dos buffers sao: buffer1: %f, e buffer2: %f\n", buffer1, buffer2);

    printf("Subtraindo os valores...\n");

    buffer1 = buffer1-buffer2;

    printf("O resultado sera: %f\n", buffer1);

    //repassar o resultado da operacao para o dados->saida para ser impresso

    strcpy(dados->saida, "\0");

    sprintf(dados->saida, "%f", buffer1);

    printf("O resultado final sera: %s\n", dados->saida);

    free(buffer_analise);

    return;
}

void calculo_multiplicar(struct estrutura_dados *dados)
{
    float buffer1=0, buffer2=0;
    char *entrada='\0', *operador="*";
    char *buffer_analise;

    buffer_analise = malloc(sizeof(char[tamanho_entrada]));

    //copia o valor do dados->saida para ser repartido
    printf("Organizando os valores...\n");
    strcpy(buffer_analise, dados->saida);

    //Neste primeiro recorte, obtem os valores antes do operador
    printf("Recortando o buffer...\n");
    entrada = strtok(buffer_analise, operador);

    buffer1 = atoi(entrada);

    //Neste segundo recorte, obtem os valores apos o operador
    printf("Recortando o buffer novamente...\n");
    entrada = strtok(NULL, operador);

    buffer2 = atoi(entrada);

    printf("Os valores dos buffers sao: buffer1: %f, e buffer2: %f\n", buffer1, buffer2);

    printf("Multiplicando os valores...\n");

    buffer1 = buffer1*buffer2;

    printf("O resultado sera: %f\n", buffer1);

    //repassar o resultado da operacao para o dados->saida para ser impresso

    strcpy(dados->saida, "\0");

    sprintf(dados->saida, "%f", buffer1);

    printf("O resultado final sera: %s\n", dados->saida);

    free(buffer_analise);
    return;
}

void calculo_dividir(struct estrutura_dados *dados)
{
    float buffer1=0, buffer2=0;
    char *entrada='\0', *operador="/";
    char *buffer_analise;

    buffer_analise = malloc(sizeof(char[tamanho_entrada]));

    //copia o valor do dados->saida para ser repartido
    printf("Organizando os valores...\n");
    strcpy(buffer_analise, dados->saida);

    //Neste primeiro recorte, obtem os valores antes do operador
    printf("Recortando o buffer...\n");
    entrada = strtok(buffer_analise, operador);

    buffer1 = atoi(entrada);

    //Neste segundo recorte, obtem os valores apos o operador
    printf("Recortando o buffer novamente...\n");
    entrada = strtok(NULL, operador);

    buffer2 = atoi(entrada);

    printf("Os valores dos buffers sao: buffer1: %f, e buffer2: %f\n", buffer1, buffer2);

    printf("Dividindo os valores...\n");

    buffer1 = buffer1/buffer2;

    printf("O resultado sera: %f\n", buffer1);

    //repassar o resultado da operacao para o dados->saida para ser impresso

    strcpy(dados->saida, "\0");

    sprintf(dados->saida, "%f", buffer1);

    printf("O resultado final sera: %s\n", dados->saida);

    free(buffer_analise);

    return;
}
