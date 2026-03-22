#include <stdio.h>
#include <math.h>

double area_rectangle(double a,double b){
    return a*b;
}

int main(){
    double a = 2.0;
    double b = 3.0;
    printf("Area of Rectangle is %f", area_rectangle(a, b));
    return 0;
}