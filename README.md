# CalculadoraGTK3
Uma calculadora implementada em C e GTK3

//----------------------------------------------------------------------------------------------------------------------------

Descrição:

Uma calculadora simples, possuindo todas as funções completas, como as funções matemáticas, botão de sinal negativo, botão de limpar a entrada e o resultado das contas, o botão para corrigir o último valor inserido e os botões numéricos.

//----------------------------------------------------------------------------------------------------------------------------


Estrutura:

Foram utilizadas apenas as bibliotecas padrão da linguagem C e da API GTK, além da API GLADE para montar os arquivos .XML de estrutura.

//----------------------------------------------------------------------------------------------------------------------------


Como compilar:

Favor compilar usando o seguinte comando: 

gcc `pkg-config --cflags gtk+-3.0` main.c indice.h construtor.c funcoes_botoes.c funcoes_calculos.c funcoes_matematicas.c -o Teste `pkg-config --libs gtk+-3.0`

Para compilar é necessário ter os pacotes GTK3 no sistema, caso não os tenha, segue o link de tutorial sobre como compilar programas usando o GTK3, conforme o link: https://docs.gtk.org/gtk3/compiling.html

//----------------------------------------------------------------------------------------------------------------------------

Versionamento:

Versão 1.0: Inicial
Versão 1.1: Correção de erros de memória que causavam crashes ao tentar executar operações.

//----------------------------------------------------------------------------------------------------------------------------


Considerações Finais:

O arquivo de ícone e o arquivo .Glade são essenciais para a estrutura do programa!

Caso encontre algum bug, por favor entre em contato!

//----------------------------------------------------------------------------------------------------------------------------

