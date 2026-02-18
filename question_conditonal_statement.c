#include  <stdio.h>

/*int main() {
    int maths; 
    int physics;
    int chemistry;
    printf("Enter percentage of maths:");
    scanf("%d", &maths);
    printf("Enter percentage of physics:");
    scanf("%d", &physics);  
    printf("Enter percentage of chemistry:");
    scanf("%d", &chemistry);
    if(maths<33 || physics<33 || chemistry<33){
        printf("You are fail\n");
    }
    else if((maths+physics+chemistry)/3 < 40){
        printf("You are fail\n");
    }
    else{
        printf("You are pass\n");
    }
    return 0;
}*/

/*int main(){
    int income;
    int tax=0;
    printf("Enter your income:");
    scanf("%d", &income);

    if (income>250000 && income <=500000){
        tax = 0.05 * (income - 250000);
    }
    else if(income>=500000 && income <=1000000){
        tax = 0.05 * (income - 250000) + 0.2 *(income - 500000);
    }
    else if(income > 1000000){
        tax = 0.05 * (income - 250000) + 0.2 *(income - 500000) + 0.3 *(income - 1000000);
    }
    printf("Your tax is %d\n", tax);
    return 0; 
}*/

/*int main(){
    int year;
    printf("Enter a year:");
    scanf("%d", &year);

    if(year %4 == 0 && year %100 != 0 || year %400 == 0){
        printf("%d year is a leap year\n",year);
    }
    else{
        printf("%d year is not leap year\n",year);
    }
    return 0;
}*/

/*int main(){
    char alphabet;
    printf("Enter an alphabet:");
    scanf("%c", &alphabet);
    printf("Ascii value of %c is %d:\n", alphabet, alphabet);
    int ascci_value = (int)alphabet;
    if(ascci_value>=97 && ascci_value<=122){
        printf("%c is a lowercase alphabet\n", alphabet);
    }else if(ascci_value>=65 && ascci_value<=90){
        printf("%c is an uppercase alphabet\n", alphabet);
    }else{
        printf("%c is Uppercase");
    }
    return 0;
}*/

int main(){
    int num1, num2, num3, num4;
    printf("Enter four numbers:");
    scanf("%d,%d,%d,%d",&num1,&num2,&num3,&num4);
    if(num1>num2 && num1>num3 && num1>num4){
        printf("%d is the gretest number of all.\n", num1);
    }
    if(num2>num1 && num2>num3 && num2>num4){
        printf("%d is the gretest number of all.\n", num2);
    }
    if(num3>num1 && num3>num2 && num3>num4){
        printf("%d is the gretest number of all.\n", num3);
    }
    if(num4>num1 && num4>num2 && num4>num3){
        printf("%d is the gretest number of all.\n", num4);
    }
    return 0;

}


