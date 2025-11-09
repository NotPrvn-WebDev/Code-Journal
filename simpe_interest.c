//Calculation of Sinple Interest
#include <stdio.h>
#include<math.h>

int main(){
    float principle,rate,time,si,ci;
    printf("Enter principle value");
    scanf("%f",&principle);
    printf("Enter rate value");
    scanf("%f",&rate);
    printf("Enter time(in Yrs) value");
    scanf("%f",&time);
    si=(principle * rate * time)/100;
    printf("Simple Interest is: %f \n",si);
    return 0;
}