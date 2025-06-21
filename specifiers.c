#include <stdio.h>

// Format specifier = Special tokens that begin with a % symbol,
// followed by a character that specifies the data type
// and optional modifiers (width, precision, flags).
// They control how data is displayed or interpreted.

int main()
{

    int age = 20;
    float price = 18.88;
    double pi = 3.1415926535;
    char currency = '$';
    char name[] = "tebeng ";

    printf("%d\n", age);
    printf("%.2f\n",price);
    printf("%.10lf\n",pi);
    printf("%c\n",currency);
    printf("%s",name);

    // width
    int num1 = 1;
    int num2 = 10;
    int num3 = 100;

    printf("%5d\n",num1);
    printf("%5d\n",num2);
    printf("%5d\n",num3);

    // precision
    float price1 = 18.88;
    float price2 = 1.50;
    float price3 = -999.99;

    printf("%.2f\n", price1);
    printf("%.2f\n", price2);
    printf("%.2f\n", price3);

    return 0;
}