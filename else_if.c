#include <stdio.h>
int main() {
    char grade;
    int a;
    printf("Enter value of a:");
    scanf("%d", &a);
    
    if(a<=100 && a>=90){
        grade = 'A';
    }
    else if(a<=90 && a>=80){
        grade = 'B';
    }
    else if(a<=80 && a>=70){
        grade = 'C';
    }
    else if(a<=70 && a>=60){
        grade = 'D';
    }
    else if(a<=60 && a>=50){
        grade = 'E';
    }
    else{
        grade = 'F';
    }

    printf("Grade is: %c\n", grade);

    return 0;
}