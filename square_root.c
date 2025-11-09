//Find the Square ROot of the given integer
#include <stdio.h>
#include <math.h>

int main(){

    double num,root;
    printf("enter an interger");
    scanf("%lf",&num);
    root=sqrt(num);
    printf("\n The square root of %.2lf is %.2lf",num,root);

    

    return 0;
}