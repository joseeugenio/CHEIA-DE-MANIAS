#include<stdio.h>
#include<string.h>

int main()
{
    int i,j,b;
    char nome[21];

    printf("Digite o seu nome: ");
    gets(nome);

    for(i=0; nome[i]!='\0'; i++)
    {
        b=0;
        for(j=0 ; j<=i ; j++)
        {
            printf("%c", nome[b]);
            b++;
        }
        printf("\n");
    }
}

