/*#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <conio.h>
#include <time.h>
#include <string.h>
#include <ctype.h>*/

#include "FUNCAO.h"
#include "FUNCAO.c"

//teste
/*#define LINHA 5
#define COLUNA 3
#define TAM 10
#define TOTAL_PARAMETROS 3
#define SENHA "teste"*/


//========================================================================================================================================
//========================================================================================================================================

int main(int argc, char *argv[])
{
    setlocale(LC_ALL, "Portuguese");

    if(argc >= TOTAL_PARAMETROS)
    {
        if(strcmp(argv[1], "-valida") != 0 || strcmp(argv[2], SENHA) != 0)
        {
            printf("Senha invalida");
            return 1;
        }
    }

    FILE *log;

    log = fopen("01-08-2021.log","a");

    CABECALHO(log); //CABEÇALHO EXIBIDO NO INÍCIO DO PROGRAMA E O IMPRIME NO ARQUIVO DE LOG
    MENU (log); //IMPRIME O MENU NO ARQUIVO.LOG

    int opcao = 0;

    do
    {
        printf("\n\t----------------------MENU-------------------------------\n");
        printf("\t|\t1 - ANO NASCIMENTO E TAMANHO DO NOME           \t|\n");
        printf("\t|\t2 - OPERAÇÕES MATEMÁTICAS                      \t|\n");
        printf("\t|\t3 - CONVERSOR DE FAHRENHEIT PARA CELSIUS       \t|\n");
        printf("\t|\t4 - CALCULO DO FATORIAL                        \t|\n");
        printf("\t|\t5 - BOAS VINDAS DE ACORODO COM O HORÁRIO       \t|\n");
        printf("\t|\t6 - ARRAY MEDIA NUMEROS                        \t|\n");
        printf("\t|\t7 - TABUADA EM MATRIZ(MULTIPLICAÇÃO)           \t|\n");
        printf("\t|\t8 - MATRIZ DOUBLE 5 X 3                        \t|\n");
        printf("\t|\t0 - SAIR                                       \t|\n");
        printf("\t---------------------------------------------------------\n");

        printf("\tDIGITE UM VALOR: ");
        scanf("%d",&opcao);

        switch ( opcao )
        {
        case 1 :
        {
            char nome[TAM];
            char sobrenome[TAM];
            int idade;

            system("cls");
            printf("\t|\t1 - ANO NASCIMENTO E TAMANHO DO NOME\t|\n");
            printf("\n\tDIGITE O SEU NOME: ");
            fflush(stdin);
            scanf("%s",nome);

            printf("\n\tDIGITE O SEU SOBRENOME: ");
            fflush(stdin);
            scanf("%s",sobrenome);

            printf("\n\tDIGITE SUA IDADE: ");
            scanf("%d",&idade);
            NOME (nome,sobrenome,idade,log);
            break;
        }
        case 2 :
        {
            int num1;
            int num2;

            system("cls");
            printf("\t|\t2 - MATEMATICA\t|\n");

            printf("\n\tDIGITE O PRIMEIRO NUMERO: ");
            scanf("%d",&num1);

            printf("\n\tDIGITE O SEGUNDO NUMERO: ");
            scanf("%d",&num2);

            MATEMATICA (num1,num2,log);
            break;
        }
        case 3 :
        {
            system("cls");
            printf("\t|\t3 - CONVERSOR \t|\n");
            float far;

            printf("\n\tDIGITE O VALOR EM FAHRENHEIT: ");
            scanf("%f",&far);

            CONVERSOR (far,log); //CHAMADA DA FUNÇÃO CONVERSOR
            break;
        }
        case 4 :
        {
            system("cls");
            printf("\t|\t4 - FATORIAL \t|\n");
            int  n;
            printf("\n\tINSIRA UM VALOR PARA O QUAL DESEJA CALCULAR SEU FATORIAL: ");
            scanf("%d", &n);

            FATORIAL (n,log); //CHAMADA DA FUNÇÃO FATORIAL
            break;
        }
        case 5 :
        {
            int hora;

            system("cls");
            printf("\t|\t5 - EXERCÍCIO 1\t|\n");
            printf("\n\t\tDIGITE O HORÁRIO: ");
            scanf("%d",&hora);

            BOAS_VINDAS (hora,log); //CHAMADA DA QUESTÃO 5
            break;
        }
        case 6 :
        {
            system("cls");
            printf("\t|\t6 - ARRAY MEDIA NUMEROS\t|\n");
            FRASE (log);
            break;
        }
        case 7 :
        {
            system("");
            printf("\t|\t7 - TABUADA EM MATRIZ(SOMA)\t|\n");
            TABUADA (log);
            break;
        }
        case 8 :
        {
            system("cls");
            printf("\t|\t8 - MATRIZ DOUBLE 5 X 3\t|\n");
            MATRIZ (log);
            break;
        }

        default :
        {
            system("cls"); //LIMPA A TELA
            printf("\t|\t0 - SAIR\t|\n");
            SAIR (log); //CHAMADA DA FUNÇÃO SAIR
        }

        }

    }
    while (opcao!=0);

    return 0;
}
