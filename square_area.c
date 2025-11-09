//to print the area of the square
#include<stdio.h>
#include<math.h>

int main(){
    
    float side,area;
    printf("Enter side value \n");
    scanf("%f",&side);
    area=pow(side,side);
    printf("Area of the Square is: %.2f ",area);

    return 0;
}