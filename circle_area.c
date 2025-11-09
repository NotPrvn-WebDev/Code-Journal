//to print the area of the circle
#include<stdio.h>
#include <math.h>
# define PI 3.14 //here this line of code mustn't have '=',Non capital variable or semi-column at the end

int main(){

   
    float  r ,area;
    printf("Enter radius: ");
    scanf("%f",&r);

    
    area=PI * pow(r,r);
    printf("Area of the circle: %.2f \n",area);
    return 0;

    // float R;
    // scanf("%f",&R);
    // printf("%f",(4.0/3.0)*3.14159*R*R*R);
    // return 0;
}