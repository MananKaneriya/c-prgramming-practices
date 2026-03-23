#include <stdio.h>

int farenheit_to_celsius(int fahrenheit){
    return (fahrenheit - 32) * 5 / 9;
}

int celcius_to_farenheit(int celcius){
    return (celcius * 1.8) + 32;
}

int main(){
    int farenheit;
    printf("Enter farenheit:");
    scanf("%d",&farenheit);
    printf("The temperature in celsius is %d\n",farenheit_to_celsius(farenheit));

    int celcius;
    printf("Enter celcius:");
    scanf("%d",&celcius);
    printf("celcius to farenheit is %d\n", celcius_to_farenheit(celcius));

    return 0;
}