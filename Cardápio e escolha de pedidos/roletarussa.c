#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main ()
{
    setlocale (LC_ALL, "portuguese");
    int pedido,qnt;
    float total;
    printf("Cachorro Quente    COD 100     Pre�o R$ 1.20\n");
    printf("Bauru Simples      COD 101     Pre�o R$ 1.30\n");
    printf("Bauru com Ovo      COD 102     Pre�o R$ 1.50\n");
    printf("Hamburguer         COD 103     Pre�o R$ 1.20\n");
    printf("Cheeseburguer      COD 104     Pre�o R$ 1.30\n");
    printf("Refrigerante       COD 105     Pre�o R$ 1.00\n");
    printf ("\nDigite o c�digo do item desejado:\n");
    scanf ("%i", &pedido);
    printf ("\nDigite a quantidade item desejado:\n");
    scanf ("%i", &qnt);

    switch (pedido)
    {
    case 100:
        total = qnt * 1.20;
        printf("O valor a ser pago, junto com a quantidade, ser� de: R$ %.2f\n", total);
        break;
    case 101:
        total = qnt * 1.30;
        printf("O valor a ser pago, junto com a quantidade, ser�: R$ %.2f\n", total);
        break;
    case 102:
        total = qnt * 1.50;
        printf("O valor a ser pago, junto com a quantidade, ser�: R$ %.2f\n", total);
        break;
    case 103:
        total = qnt * 1.20;
        printf("O valor a ser pago, junto com a quantidade, ser�: R$ %.2f\n", total);
        break;
    case 104:
        total = qnt * 1.30;
        printf("O valor a ser pago, junto com a quantidade, ser�: R$ %.2f\n", total);
        break;
    case 105:
        total = qnt * 1.00;
        printf("O valor a ser pago, junto com a quantidade, ser�: R$ %.2f\n", total);
        break;
    default:
        printf("C�digo inv�lido!");
    }
}
