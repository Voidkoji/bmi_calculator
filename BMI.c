#include<stdio.h>
#include<math.h>
int main(){
    float h,w,BMI;
    printf("Enter Your Height(Meter) : ");
    scanf("%f" ,&h);
    printf("Enter Your Weight(Kilogram) : ");
    scanf("%f",&w);
    if (h <= 0 || w <= 0) {
    printf("Height and weight must be positive numbers.\n");
    return 0;   
}
    printf("Your Body Mass Index(BMI) : %f",w/pow(h,2));
    BMI = w/pow(h,2);
    if(BMI<18.5)
    {
        printf("\nUnderweight");
    }
    else if(BMI<=24.9)
    {
        printf("\nNormal");
    }
    else if(BMI<=29.9)
    {
        printf("\nOverweight");
    }
    else 
    {
        printf("\nObese");
    }


    return 0;
}