#include <stdio.h>

int main(){

    // arithmetic operators = + - * / % ++ --

    int a = 10;
    int b = 3;
    int c = 0;

    c = a + b; 
    c = a - b;
    c = a * b;
    c = a / b; 
    c = a % b; 

    //a++; // increment a by 1
    //a--; // decrement b by 1

    //augmented assignment operators
    c += 3; // equivalent to a = a + b
    c -= 2; // equivalent to b = b - 2
    c *= 2; // equivalent to a = a * 2

    printf("%d\n",c);

    return 0;
}