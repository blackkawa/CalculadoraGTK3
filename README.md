# CalculadoraGTK3
Uma calculadora implementada em C e GTK3

//------------------------------------------------------------------------------------------------------------------------------------------------------------

Descrição:

Uma calculadora simples, possuindo todas as funções completas, como as funções matemáticas, botão de sinal negativo, botão de limpar a entrada e o resultado das contas, o botão para corrigir o último valor inserido e os botões numéricos.

//------------------------------------------------------------------------------------------------------------------------------------------------------------

Estrutura:

Foram utilizadas apenas as bibliotecas padrão da linguagem C e da API GTK, além da API GLADE para montar os arquivos .XML de estrutura.

//------------------------------------------------------------------------------------------------------------------------------------------------------------

Como compilar:

Favor compilar usando o seguinte comando: 

cc `pkg-config --cflags gtk+-3.0` main.c indice.h construtor.c funcoes_botoes.c funcoes_calculos.c funcoes_matematicas.c -o Teste `pkg-config --libs gtk+-3.0`

//------------------------------------------------------------------------------------------------------------------------------------------------------------

Considerações Finais:

O arquivo de ícone e o arquivo .Glade são essenciais para a estrutura do programa!

Caso encontre algum bug, por favor entre em contato!

//------------------------------------------------------------------------------------------------------------------------------------------------------------
