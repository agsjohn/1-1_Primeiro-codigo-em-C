#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

main()
{
    setlocale(LC_ALL, "Portuguese");
    float dolar, total, real;
    printf ("Digite o valor em real: ");
    scanf ("%f", &real);
    getchar();
    printf ("Digite a cotação do dólar atual: ");
    scanf ("%f", &dolar);
    getchar();
    total = real / dolar;
    printf ("\nO valor em real é R$%.2f e a cotação do dólar atual é R$%.2f logo você possui $%.2f dólares", real, dolar, total);
    getchar();
}
