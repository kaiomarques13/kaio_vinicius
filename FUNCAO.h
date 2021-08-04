#ifndef FUNCAO_H_INCLUDED
#define FUNCAO_H_INCLUDED

#define TAM 10

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <conio.h>
#include <time.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

#define LINHA 5
#define COLUNA 3
#define TAM 10

#define TOTAL_PARAMETROS 3
#define SENHA "teste"

FILE *MENU (FILE *log);

/*
* Nome: kaioviniciussousa13@gmail.com
* Data: 01-08-2021
* Descri��o: Essa funcao exibe um cabe�alho na execu��o do programa.
* Descri��o de parametros <--
*/
FILE *CABECALHO ();
/*
* Nome: kaioviniciussousa13@gmail.com
* Data: 01-08-2021
* Descri��o: Essa funcao solicita que o usu�rio insira a hora do tipo inteiro, e imprime a sauda��o de acordo com o hor�rio.

             se o valor for maior ou igual a 0 e menor do q 12, escrever "Bom dia"
             se o valor for maior ou igual a 12 e menor do q 18, escreve "Boa tarde"
             se o valor for maior ou igual a 18 e menor ou igual a 23, escreve "Boa noite"
             se o valor n�o atender a nenhuma das condi��es acima, escreve "Hor�rio inv�lido"

* Descri��o de parametros <--
*/
FILE *BOAS_VINDAS (int hora, FILE *log);//

/*
* Nome: kaioviniciussousa13@gmail.com
* Data: 01-08-2021
* Descri��o: Essa funcao faz alguma coisa
* Descri��o de parametros <--
*/
void wait (int seconds);

/*
* Nome: kaioviniciussousa13@gmail.com
* Data: 01-08-2021
* Descri��o: Essa funcao imprime um contador regressivo de 10 segundos e depois encerra o programa
* Descri��o de parametros <--
*/
FILE *SAIR (FILE *log);

/*
* Nome: kaioviniciussousa13@gmail.com
* Data: 01-08-2021
* Descri��o: Essa funcao recebe um valor inteiro, e calcula o fatorial desse n�mero, e imprime
* Descri��o de parametros <--
*/
FILE *FATORIAL (int n, FILE *log);

/*
* Nome: kaioviniciussousa13@gmail.com
* Data: 01-08-2021
* Descri��o: Essa fun��o recebe um valor tipo float correspondente a temperatua em fahrenheit e calcula em celsius e imprime
* Descri��o de parametros <--
*/
FILE *CONVERSOR (float far,FILE *log);

/*
* Nome: kaioviniciussousa13@gmail.com
* Data: 01-08-2021
* Descri��o: Essa funcao recebe 2 strings nome e sobrenome, e um inteiro , e imprime o nome completo, calcula o ano de nascimento e imprime

             Faz uma chamada que l� "primeiro nome" e "sobrenome" o "ano que voc� nasceu" e imprime:

             Seu nome completo;
             Idade;
             Sua idade mais a quantidade de caracteres tem seu nome.

* Descri��o de parametros <--
*/
FILE *NOME (char nome[TAM],char sobrenome[TAM],int idade, FILE *log);

/*
* Nome: kaioviniciussousa13@gmail.com
* Data: 01-08-2021
* Descri��o: Essa Solicita ao usu�rio 2 n�meros e informa:

             A soma dos n�meros;
             O produto do primeiro n�mero pelo quadrado do segundo;
             O quadrado do primeiro n�mero;
             A raiz quadrada da soma dos quadrados;
             O seno da diferen�a do primeiro n�mero pelo segundo;
             O m�dulo do primeiro n�mero.

* Descri��o de parametros <--
*/
FILE *MATEMATICA (int num1,int num2,FILE *log);

/*
* Nome: kaioviniciussousa13@gmail.com
* Data: 01-08-2021
* Descri��o: Essa funcao Cria uma matriz e imprime a tabuada de 1 a 10 sem conter a de 5,
             e tamb�m cria um arquivo que cria uma tabuada completa de multiplica��o.

* Descri��o de parametros <--
*/
FILE *TABUADA (FILE *log);

/*
* Nome: kaioviniciussousa13@gmail.com
* Data: 01-08-2021
* Descri��o: Essa funcao Faz uma chamada para que l� valores para uma matriz do tipo "Double"
             de 5 linhas por 3 colunas e imprime a diferen�a entre a m�dia dos elementos das colunas
             pares e a m�dia dos elementos das linhas �mpares.


* Descri��o de parametros <--
*/
FILE *MATRIZ (FILE *log);

/*
* Nome: kaioviniciussousa13@gmail.com
* Data: 01-08-2021
* Descri��o: Essa fu��o cria uma array de char de 10 posi��es, que receba apenas caracteres referentes a n�meros
             recebidos pelo teclado:

             Dever� ler e converter para inteiro os valores contidos em cada posi��o char possibilitando calcular
             a m�dia dos valores;

            Exemplo: ( 1+2+3+ 4+ 5+ 6+ 7+ 8+ 9+ 10  ) / 10
            Imprimir o array de char informado
            O valor da m�dia entre eles.

* Descri��o de parametros <--
*/
FILE *FRASE (FILE *log);

//FILE *criar_arquivo ();


#endif // FUNCAO_H_INCLUDED
