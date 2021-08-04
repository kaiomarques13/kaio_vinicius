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
* Descrição: Essa funcao exibe um cabeçalho na execução do programa.
* Descrição de parametros <--
*/
FILE *CABECALHO ();
/*
* Nome: kaioviniciussousa13@gmail.com
* Data: 01-08-2021
* Descrição: Essa funcao solicita que o usuário insira a hora do tipo inteiro, e imprime a saudação de acordo com o horário.

             se o valor for maior ou igual a 0 e menor do q 12, escrever "Bom dia"
             se o valor for maior ou igual a 12 e menor do q 18, escreve "Boa tarde"
             se o valor for maior ou igual a 18 e menor ou igual a 23, escreve "Boa noite"
             se o valor não atender a nenhuma das condições acima, escreve "Horário inválido"

* Descrição de parametros <--
*/
FILE *BOAS_VINDAS (int hora, FILE *log);//

/*
* Nome: kaioviniciussousa13@gmail.com
* Data: 01-08-2021
* Descrição: Essa funcao faz alguma coisa
* Descrição de parametros <--
*/
void wait (int seconds);

/*
* Nome: kaioviniciussousa13@gmail.com
* Data: 01-08-2021
* Descrição: Essa funcao imprime um contador regressivo de 10 segundos e depois encerra o programa
* Descrição de parametros <--
*/
FILE *SAIR (FILE *log);

/*
* Nome: kaioviniciussousa13@gmail.com
* Data: 01-08-2021
* Descrição: Essa funcao recebe um valor inteiro, e calcula o fatorial desse número, e imprime
* Descrição de parametros <--
*/
FILE *FATORIAL (int n, FILE *log);

/*
* Nome: kaioviniciussousa13@gmail.com
* Data: 01-08-2021
* Descrição: Essa função recebe um valor tipo float correspondente a temperatua em fahrenheit e calcula em celsius e imprime
* Descrição de parametros <--
*/
FILE *CONVERSOR (float far,FILE *log);

/*
* Nome: kaioviniciussousa13@gmail.com
* Data: 01-08-2021
* Descrição: Essa funcao recebe 2 strings nome e sobrenome, e um inteiro , e imprime o nome completo, calcula o ano de nascimento e imprime

             Faz uma chamada que lê "primeiro nome" e "sobrenome" o "ano que você nasceu" e imprime:

             Seu nome completo;
             Idade;
             Sua idade mais a quantidade de caracteres tem seu nome.

* Descrição de parametros <--
*/
FILE *NOME (char nome[TAM],char sobrenome[TAM],int idade, FILE *log);

/*
* Nome: kaioviniciussousa13@gmail.com
* Data: 01-08-2021
* Descrição: Essa Solicita ao usuário 2 números e informa:

             A soma dos números;
             O produto do primeiro número pelo quadrado do segundo;
             O quadrado do primeiro número;
             A raiz quadrada da soma dos quadrados;
             O seno da diferença do primeiro número pelo segundo;
             O módulo do primeiro número.

* Descrição de parametros <--
*/
FILE *MATEMATICA (int num1,int num2,FILE *log);

/*
* Nome: kaioviniciussousa13@gmail.com
* Data: 01-08-2021
* Descrição: Essa funcao Cria uma matriz e imprime a tabuada de 1 a 10 sem conter a de 5,
             e também cria um arquivo que cria uma tabuada completa de multiplicação.

* Descrição de parametros <--
*/
FILE *TABUADA (FILE *log);

/*
* Nome: kaioviniciussousa13@gmail.com
* Data: 01-08-2021
* Descrição: Essa funcao Faz uma chamada para que lê valores para uma matriz do tipo "Double"
             de 5 linhas por 3 colunas e imprime a diferença entre a média dos elementos das colunas
             pares e a média dos elementos das linhas ímpares.


* Descrição de parametros <--
*/
FILE *MATRIZ (FILE *log);

/*
* Nome: kaioviniciussousa13@gmail.com
* Data: 01-08-2021
* Descrição: Essa fução cria uma array de char de 10 posições, que receba apenas caracteres referentes a números
             recebidos pelo teclado:

             Deverá ler e converter para inteiro os valores contidos em cada posição char possibilitando calcular
             a média dos valores;

            Exemplo: ( 1+2+3+ 4+ 5+ 6+ 7+ 8+ 9+ 10  ) / 10
            Imprimir o array de char informado
            O valor da média entre eles.

* Descrição de parametros <--
*/
FILE *FRASE (FILE *log);

//FILE *criar_arquivo ();


#endif // FUNCAO_H_INCLUDED
