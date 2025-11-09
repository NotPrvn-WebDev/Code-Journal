//Usage of c in Motion in 2D
#include<stdio.h>

int main(){
    float u,d,a;
    int t;
    printf("Enter initial velocity value");
    scanf("%f",&u);

    printf("Enter acceleration value");
    scanf("%f",&a);

    printf("Enter time value");
    scanf("%d",&t);

    d=(u * t) + (a * t * t)/2;
    printf("The Distance is: %f",d);
    
    return 0;
}