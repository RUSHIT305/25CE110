#include<stdio.h>
int main(){
    float BMI,height,weight;
    printf("enter weight=");
    scanf("%f",&weight);
    printf("enter height=");
    scanf("%f",&height);
    if(weight>0 && height>0){
     BMI=weight/(height*height);
    }
    if(BMI<18.5){
    printf("you are not normal");
    }
    else if(BMI>18.5 && BMI<24.9) {
        printf("you are normal");
    }
    else if(BMI>24.9 && BMI<29.9){
        printf("you are over weight");
    }
    else{
        printf("input invalid");
    }
        return 0;
    }
