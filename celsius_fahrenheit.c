//Temperature Converter (c to k) and (k to c)
#include<stdio.h>

int test(){
    float celsius,fahrenheit;
    printf("\n Enter fahrenheit Value");
    scanf("%f",&fahrenheit);
    celsius=(fahrenheit-32) * 5/9;
    printf("celsius value is: %f",celsius);
    return 0;
}

int main(){
    float celsius,fahrenheit;
    printf("Enter Celsius Value");
    scanf("%f",&celsius);
    fahrenheit=celsius * 9/5 + 32;
    printf("fahrenheit value is: %f",fahrenheit);
    test();
    return 0;
}

