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

#include "FUNCAO.h"

FILE *MENU (FILE *log)
{
    FILE *arquivo;
    arquivo = fopen("01-08-2021.log","a");

    fprintf(arquivo,"\n\t----------------------MENU-------------------------------\n");
    fprintf(arquivo,"\t|\t1 - ANO NASCIMENTO E TAMANHO DO NOME           \t|\n");
    fprintf(arquivo,"\t|\t2 - OPERAÇÕES MATEMÁTICAS                      \t|\n");
    fprintf(arquivo,"\t|\t3 - CONVERSOR DE FAHRENHEIT PARA CELSIUS       \t|\n");
    fprintf(arquivo,"\t|\t4 - CALCULO DO FATORIAL                        \t|\n");
    fprintf(arquivo,"\t|\t5 - BOAS VINDAS DE ACORODO COM O HORÁRIO       \t|\n");
    fprintf(arquivo,"\t|\t6 - ARRAY MEDIA NUMEROS                        \t|\n");
    fprintf(arquivo,"\t|\t7 - TABUADA EM MATRIZ(MULTIPLICAÇÃO)           \t|\n");
    fprintf(arquivo,"\t|\t8 - MATRIZ DOUBLE 5 X 3                        \t|\n");
    fprintf(arquivo,"\t|\t0 - SAIR                                       \t|\n");
    fprintf(arquivo,"\t---------------------------------------------------------\n");

    return arquivo;
}

FILE *CABECALHO ()
{
    FILE *arquivo;
    arquivo = fopen("01-08-2021.log","w");

    printf("\n\t========================================================================\n");
    printf("\tNOME: Kaio Vinícius Marques de Lucena Sousa\n");
    printf("\tE-MAIL: kaiolucena13@gmail.com\n");
    printf("\tDESCRIÇÃO: Exercício O cliente mudou de ideia e a entrega vai ser maior! \n");
    printf("\tDATA: 28/07/2021");
    printf("\n\t========================================================================\n");

    fprintf(arquivo,"\n\t========================================================================\n");
    fprintf(arquivo,"\tNOME: Kaio Vinícius Marques de Lucena Sousa\n");
    fprintf(arquivo,"\tE-MAIL: kaiolucena13@gmail.com\n");
    fprintf(arquivo,"\tDESCRIÇÃO: Exercício O cliente mudou de ideia e a entrega vai ser maior! \n");
    fprintf(arquivo,"\tDATA: 28/07/2021");
    fprintf(arquivo,"\n\t========================================================================\n");
    return arquivo;
}

FILE *BOAS_VINDAS (int hora, FILE *log)//VERIFICA O HORÁRIO E RETORNA A SAUDAÇÃO DE ACORDO COM O MESMO
{
    FILE *arquivo;
    arquivo = fopen("01-08-2021.log","a");
    fprintf(arquivo,"\n--------------------------------------------------------------------------------\n");
    fprintf(arquivo,"\t|\t5 - EXERCÍCIO 1\t|\n");

    if( hora== 0 || hora < 12 )
    {
        printf("\tBOM DIA!");
        fprintf(arquivo,"\tBOM DIA!");
    }
    else if( hora == 12 || hora < 18 )
    {
        printf("\tBOA TARDE!");
        fprintf(arquivo,"\tBOA TARDE!");
    }
    else if( hora == 18 || hora <= 23 )
    {
        printf("\tBOA NOITE!");
        fprintf(arquivo,"\tBOA NOITE!");
    }
    else
    {
        printf("\tHORÁRIO INVÁLIDO!");
        fprintf(arquivo,"\tHORÁRIO INVÁLIDO!");
    }

    return arquivo;
}
void wait ( int seconds )
{
    clock_t endwait;
    endwait = clock () + seconds * CLK_TCK;
    while (clock() < endwait) {}
}
FILE *SAIR (FILE *log)//CONTADOR PARA SAIR DO PROGRAMA
{
    int n=10;
    FILE *arquivo;
    arquivo = fopen("01-08-2021.log","a");


    printf ("\n\t\tENCERRANDO\n\n");

    fprintf(arquivo,"\n--------------------------------------------------------------------------------\n");
    fprintf(arquivo,"\t|\t0 - SAIR\t|\n");
    fprintf (arquivo,"\n\t\tENCERRANDO\n\n");

    while(n!=0)
    {
        printf("\t\t%d\n",n);
        fprintf(arquivo,"\t\t%d\n",n);

        wait (1);
        n--;
    }
    printf ("\n\n============================FIM===================================\n");
    fprintf (arquivo,"\n\n============================FIM===================================\n");

    return arquivo;
}
FILE *FATORIAL (int n, FILE *log)//CALCULA O FATORIAL DE UM NÚMERO
{
    int fat;

    FILE *arquivo;
    arquivo = fopen("01-08-2021.log","a");

    fprintf(arquivo,"\n--------------------------------------------------------------------------------\n");
    fprintf(arquivo,"\t|\t4 - FATORIAL \t|\n");

    for(fat = 1; n > 1; n = n - 1)
    {
        fat = fat * n;
    }

    printf("\n\tFATORIAL CALCULADO: %d\n\n", fat);
    fprintf(arquivo,"\n\tFATORIAL CALCULADO: %d\n\n", fat);

    return arquivo;
}
FILE *CONVERSOR (float far, FILE *log)//FUNÇÃO QUE CONVERTE DE FAHRENHEIT PARA CELSIUS
{
    float cel;
    FILE *arquivo;
    arquivo = fopen("01-08-2021.log","a");

    cel = (far - 32)* 5/9;

    fprintf(arquivo,"\n--------------------------------------------------------------------------------\n");
    fprintf(arquivo,"\t|\t3 - CONVERSOR \t|\n");
    fprintf(arquivo,"\n\t O VALOR CONVERTIDO EM CELSIUS É: %.2f°",cel);

    printf("\n\t O VALOR CONVERTIDO EM CELSIUS É: %.2f°",cel);

    return arquivo;
}
FILE *MATEMATICA (int num1,int num2,FILE *log)
{
    FILE *arquivo;

    int produto;
    int quadrado1;
    int quadrado2;
    int soma_quadrados;
    int diferencanum1num2;
    float raiz;
    float seno;
    int modulo1;

    quadrado1 = pow(num1,2);
    quadrado2 = pow(num2,2);
    soma_quadrados = (quadrado1 + quadrado2);
    raiz = sqrt(soma_quadrados);
    diferencanum1num2 = (num1 - num2);
    seno = sin(diferencanum1num2);
    modulo1 = abs(num1);



    printf("\n\t A SOMA DOS DOIS NUMEROS: %d",num1+num2);
    printf("\n\t O PRODUTO DO PRIMEIRO PELO QUADARDO DO SEGUNDO: %d",produto = num1 * (num2*num2));
    printf("\n\t O QUADRADO DO PRIMEIRO: %d",quadrado1);
    printf("\n\t A RAIZ DA SOMA DOS QUADRADOS: %.2f",raiz);
    printf("\n\t O SENO DA DIFERENÇA DO PRIMEIRO NÚMERO PELO SEGUNDO: %.2f",seno);
    printf("\n\t O MÓDULO DO PRIMEIRO NUMERO: %d",modulo1);

    arquivo = fopen("01-08-2021.log","a");

    fprintf(arquivo,"\n--------------------------------------------------------------------------------\n");
    fprintf(arquivo,"\t|\t2 - MATEMATICA\t|\n");
    fprintf(arquivo,"\n\t A SOMA DOS DOIS NUMEROS: %d",num1+num2);
    fprintf(arquivo,"\n\t O PRODUTO DO PRIMEIRO PELO QUADARDO DO SEGUNDO: %d",produto = num1 * (num2*num2));
    fprintf(arquivo,"\n\t O QUADRADO DO PRIMEIRO: %d",quadrado1);
    fprintf(arquivo,"\n\t A RAIZ DA SOMA DOS QUADRADOS: %.2f",raiz);
    fprintf(arquivo,"\n\t O SENO DA DIFERENÇA DO PRIMEIRO NÚMERO PELO SEGUNDO: %.2f",seno);
    fprintf(arquivo,"\n\t O MÓDULO DO PRIMEIRO NUMERO: %d",modulo1);

    return arquivo;
}
FILE *TABUADA (FILE *log)//FUNÇÃO QUE IMPRIME A TABUADA DE MULTIPLICAÇÃO MENOS A DE 5
{
    int i=0;
    int j=0;
    int k=0;
    int l=0;
    int tab[TAM][TAM];
    FILE *kaio;
    FILE *arquivo;

    kaio = fopen("tabuada_kaio.txt","w");
    arquivo = fopen("01-08-2021.log","a");

    fprintf(arquivo,"\n--------------------------------------------------------------------------------\n");
    fprintf(arquivo,"\t|\t7 - TABUADA EM MATRIZ(SOMA)\t|\n");

    for(i=0; i<10; i++)
    {
        if(i==5)
        {
            i++;
        }
        printf("\tTABUADA DE MULTIPLICAÇÃO: %d\n",i);
        fprintf(arquivo,"\tTABUADA DE MULTIPLICAÇÃO: %d\n",i);
        for(j=0; j<10; j++)
        {
            tab[i][j]= i*j;
            printf("\t%d X %d = %d \n",i,j,tab[i][j]);
            fprintf(arquivo,"\t%d X %d = %d \n",i,j,tab[i][j]);
        }
    }

    for(k=0; k<10; k++)
    {
        fprintf(kaio,"\t------------TABUADA DE MULTIPLICAÇÃO: %d------------------\n",k);
        for(l=0; l<10; l++)
        {
            fprintf(kaio,"\t\t\t    %d X %d = %d \n",k,l,k*l);
            fflush(stdin);
        }
    }

    return arquivo;
}
FILE *MATRIZ (FILE *log) //FUNÇÃO QUE CRIA UMA MATRIZ DE 5X3 E CALCULA A DIFERENÇA DAS MEDIAS DOS VALORES DAS COLUNAS PARES PELAS IMPARES
{
    int i=0;
    int j=0;
    FILE *arquivo;

    arquivo = fopen("01-08-2021.log","a");

    double mat[LINHA][COLUNA];
    double somacolpar=0.0;
    double somacolimpar=0.0;

    for(i=0; i<LINHA; i++) //FUNÇÃO QUE PBTEM OS VALORES DA MATRIZ
    {
        for(j=0; j<COLUNA; j++)
        {
            printf("\n\tDIGITE A LINHA %d DA COLUNA %d: ",i,j);
            scanf("%lf",&mat[i][j]);

            if(j%2==0)
            {
                somacolpar = somacolpar + mat[i][j]; //SOMA OS VALORES SE A COLUNA FOR PAR
            }
            else if(j%2!=0)
            {
                somacolimpar = somacolimpar + mat[i][j]; //SOMA OS VALORES SE A COLUNA FOR IMPAR
            }
        }
    }

    printf("\n\t SOMA COLUNA PAR: %.2lf",somacolpar); //IMPRIME O SOMATORIO DOS VALORES DAS COLUNAS PARES
    printf("\n\t SOMA COLUNA IMPAR: %.2lf",somacolimpar); //IMPRIME O SOMATORIO DOS VALORES DAS COLUNAS IMPARES
    printf("\n\t MEDIA COLUNA PAR: %.2lf",somacolpar/LINHA); //CALCULA A MEDIA DA SOMA COLUNA PAR E IMPRIME
    printf("\n\t MEDIA COLUNA IMPAR: %.2lf",somacolimpar/LINHA);//CALCULA A MEDIA DA SOMA DA COLUNA IMPAR E IMPRIME
    printf("\n\t DIFERENÇA DAS MEDIAS DAS COLUNAS PARES PELAS IMPARES: %.2lf\n\n",((somacolpar/LINHA)-(somacolimpar/LINHA)));

    fprintf(arquivo,"\n--------------------------------------------------------------------------------\n");
    fprintf(arquivo,"\t|\t8 - MATRIZ DOUBLE 5 X 3\t|\n");
    fprintf(arquivo,"\n\t SOMA COLUNA PAR: %.2lf",somacolpar); //IMPRIME O SOMATORIO DOS VALORES DAS COLUNAS PARES
    fprintf(arquivo,"\n\t SOMA COLUNA IMPAR: %.2lf",somacolimpar); //IMPRIME O SOMATORIO DOS VALORES DAS COLUNAS IMPARES
    fprintf(arquivo,"\n\t MEDIA COLUNA PAR: %.2lf",somacolpar/LINHA); //CALCULA A MEDIA DA SOMA COLUNA PAR E IMPRIME
    fprintf(arquivo,"\n\t MEDIA COLUNA IMPAR: %.2lf",somacolimpar/LINHA);//CALCULA A MEDIA DA SOMA DA COLUNA IMPAR E IMPRIME
    fprintf(arquivo,"\n\t DIFERENÇA DAS MEDIAS DAS COLUNAS PARES PELAS IMPARES: %.2lf\n\n",((somacolpar/LINHA)-(somacolimpar/LINHA)));

    return arquivo;
}
FILE *FRASE (FILE *log) //FUNÇÃO QUE RECEBE UMA STRING E CALCULA A MEDIA DOS NUMEROS DIGITADOS
{
    FILE *arquivo;
    char numeros[10] = "";
    int i = 0;
    float numeros_soma = 0;
    float media = 0;
    float contador_media = 0;

    arquivo = fopen("01-08-2021.log","a");

    fprintf(arquivo,"\n--------------------------------------------------------------------------------\n");
    fprintf(arquivo,"\t|\t6 - ARRAY MEDIA NUMEROS\t|\n");
    printf ("\tDIGITE 10 CARACTERES:\n\n");

    for (int i = 0; i < 10;)
    {
        printf("\tDIGITE UM NUMERO: ");
        fflush(stdin);
        scanf("%c", &numeros[i]);
        fprintf(arquivo,"\tDIGITE UM NUMERO: %c\n",numeros[i]);

        if(isdigit(numeros[i]))
        {
            numeros_soma += (numeros[i] - '0');
            i++;
            contador_media++;
        }
        else
        {
            printf("\tCARACTERE INVALIDO!\n");
            fprintf(arquivo,"\tCARACTERE INVALIDO!\n");
        }
    }

    media = numeros_soma/contador_media;
    printf("\n\tMÉDIA: %.2f \n", media);
    fprintf(arquivo,"\tMÉDIA: %.2f \n", media);
    fflush(stdin);

    return arquivo;
}
FILE *NOME (char nome[TAM],char sobrenome[TAM],int idade, FILE *log)//FUNÇÃO QUE RECEBE O NOME SOBRENOME IDADE E RETORNA IDADE E QUANTIDADE DE CARACTERES DO NOME
{
    FILE *arquivo;
    char nome_completo[20];

    strcat(nome_completo,nome);
    strcat(nome_completo, " ");
    strcat(nome_completo,sobrenome);

    printf("\n\t%s ",nome_completo);
    printf("\n\tSEU ANO DE NASCIMENTO: %d",2021 - idade);
    printf("\n\tO TAMANHO DO SEU NOME : %d \n\n",strlen(nome)+strlen(sobrenome));

    arquivo = fopen("01-08-2021.log","a");

    fprintf(arquivo,"\n--------------------------------------------------------------------------------\n");
    fprintf(arquivo,"\t|\t1 - ANO NASCIMENTO E TAMANHO DO NOME\t|\n");
    fprintf(arquivo,"\n\t%s ",nome_completo);
    fprintf(arquivo,"\n\tSEU ANO DE NASCIMENTO: %d",2021 - idade);
    fprintf(arquivo,"\n\tO TAMANHO DO SEU NOME : %d \n\n",strlen(nome)+strlen(sobrenome));


    return arquivo;
}
