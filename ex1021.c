#include <stdio.h>

int main() {
    double valor;
    int inteiro, nota100, nota50, nota20, nota10, nota5, nota2;
    int moeda1, moeda50, moeda25, moeda10, moeda5, moeda1c;
    scanf("%lf", &valor);
    inteiro = (int)(valor * 100);
    nota100 = inteiro / 10000;
    inteiro %= 10000;
    nota50 = inteiro / 5000;
    inteiro %= 5000;
    nota20 = inteiro / 2000;
    inteiro %= 2000;
    nota10 = inteiro / 1000;
    inteiro %= 1000;
    nota5 = inteiro / 500;
    inteiro %= 500;
    nota2 = inteiro / 200;
    inteiro %= 200;
    moeda1 = inteiro / 100;
    inteiro %= 100;
    moeda50 = inteiro / 50;
    inteiro %= 50;
    moeda25 = inteiro / 25;
    inteiro %= 25;
    moeda10 = inteiro / 10;
    inteiro %= 10;
    moeda5 = inteiro / 5;
    inteiro %= 5;
    moeda1c = inteiro / 1;
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", nota100);
    printf("%d nota(s) de R$ 50.00\n", nota50);
    printf("%d nota(s) de R$ 20.00\n", nota20);
    printf("%d nota(s) de R$ 10.00\n", nota10);
    printf("%d nota(s) de R$ 5.00\n", nota5);
    printf("%d nota(s) de R$ 2.00\n", nota2);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", moeda1);
    printf("%d moeda(s) de R$ 0.50\n", moeda50);
    printf("%d moeda(s) de R$ 0.25\n", moeda25);
    printf("%d moeda(s) de R$ 0.10\n", moeda10);
    printf("%d moeda(s) de R$ 0.05\n", moeda5);
    printf("%d moeda(s) de R$ 0.01\n", moeda1c);
    return 0;
}
