////Write a program to calculate the factorial of a given number using a while loop.
#include <stdio.h>
int main(){
    int n, fact=1;
    int i =1;
    printf("Enter a number:");
    scanf("%d",&n);
    while(i<=n){
        fact = fact*i;
        i++;
    }
    printf("Factorial of %d is %d\n",n,fact);
    return 0;
}