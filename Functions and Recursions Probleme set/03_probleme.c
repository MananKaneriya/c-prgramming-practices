#include  <stdio.h>
float g=9.8;

float force_attraction(float m, float g){
    return m*g;
}

int main(){
    float m;
    printf("Enter mass:");
    scanf("%f",&m);
    printf("The force of Attraction is %f\n",force_attraction(m,g));
    return 0;
}