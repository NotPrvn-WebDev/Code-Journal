//to print the area of the rectangle
#include<stdio.h>

int main(){
    
    float length,breadth,area;
    printf("Enter length and breadth values \n");
    scanf("%f %f",&length,&breadth);
    area=(length * breadth);
    printf("Area of the Rectangle is: %.2f ",area);

    return 0;
}