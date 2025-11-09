//to print the area of the triangle
#include<stdio.h>

int main(){
    float base,height,area;
    printf("Enter base and height values");
    scanf("%f %f ",&base,&height);
    area=(base * height)/2;
    printf("Area of the Triangle is: %.2f \n",area);
    return 0;
}