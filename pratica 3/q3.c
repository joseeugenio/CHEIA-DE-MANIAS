#include<stdio.h>
#include<string.h>

int EhPalindromo(const char *str)
{
    int i, j;
    i = 0;
    j = strlen(str) - 1;
    for (i = 0; i < strlen(str); i++, j--){
        if (str[i] != str[j]){
            return 0;
        }
    }
    return 1;
}
int main()
{
    char nome[100],carac;

    printf("\n digite a palavra: ");
    gets(nome);

    printf("\"%s\" eh palindromo? %s\n",
            nome, EhPalindromo(nome) ? "sim" : "nao");

}
