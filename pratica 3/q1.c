#include<stdio.h>
#include<string.h>

int main()
{
    int i;
    char nome[21];

    printf("Digite o seu nome: ");
    gets(nome);
    for(i=0; nome[i]!='\0'; i++)
    {
        printf("\n%c", nome[i]);
    }
}

