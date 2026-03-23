#include <stdio.h>

double average(int a , int b){
    return (a + b) / 2.0;
}

int main(){
    int a=2, b=4;
    printf("the average of %d and %d is %f\n",a,b,average(a,b));
    return 0;
}