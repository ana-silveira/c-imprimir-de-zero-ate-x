/*
44. Fa�a um programa que leia um n�mero da entrada e imprima os n�meros de 0 at�
o n�mero lido.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    system("cls");

    setlocale(LC_ALL, "Portuguese");

    int num;

    printf("Informe o n�mero desejado: ");
    scanf("%d", &num);

    for (int i = 0; i <= num; i++)
        {
         printf("%d\n", i);
        }
    system("pause");

}
