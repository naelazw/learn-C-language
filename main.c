#include <stdio.h>
#include <stdbool.h>

int main()
{

    int age = 20;
    int years = 2025;
    int quantity = 2;

    printf("you are %d years old \n", age);
    printf("the year is %d \n", years);
    printf("u have ordered %d x items\n", quantity);

    float gpa =2.5;
    float price = 12.000;
    float temperature = -10.1;

    printf("your gps is %.1f\n", gpa);
    printf("the price is Rp%.3f\n", price);
    printf("the temperature is %.1f Celcius\n", temperature);

    double pi = 3.1415926535;
    double e = 2.7268291876;

    printf("the value of pi is %.10lf \n", pi);
    printf("the value of e is %.10lf \n",e);
 
    char grade ='A';
    char simbol = '!';
    char currency = '$';

    printf("your grade is %c\n",grade);
    printf("your favorite symbol is %c \n",simbol);
    printf("the currency is %c\n",currency);


    char name[] = "cellls";
    char food[]= "nasi kuning";
    char email[]= "cells1012gmail.com";
    
    printf("Hello %s\n",name);
    printf("your favorit food is %s \n",food);
    printf("your email is %s \n",email);
 
    bool isOnline = 1;
    bool isStudent = true;
    bool forSale = 0;

    if (forSale)
    {
        printf("that item is for sale");
    }else{
        printf("that item is not for sale");
    }
    
    

    return 0;
}