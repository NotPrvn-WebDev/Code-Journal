//Roots of a Quadratic Equation

#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    float D,r1,r2;
    float RP,IP;

    printf("Enter coeff. of a,b,c");
    scanf("%d %d %d",&a,&b,&c);
    D=(b*b-4*a*c);
    printf("%.2f\n",D);

    if(D>0){
        r1=(-b + (D)) / (2*a);
        r2=(-b - sqrt(D)) / (2*a);
        printf("The Roots are Real and Distinct %0.1f,%0.1f\n",r1,r2);
    }

    else if(D == 0){
        r1=(-b/2*a);
        r2=(-b/2*a);
        printf("The Roots are Real and Equal %0.1f,%0.1f\n",r1,r2);
    }

    else{
        RP=-b/(2*a);
        IP=sqrt(-D)/(2*a);
        printf("The Imaginary Roots r1=%0.2f + (i)%0.2f,r2=%0.2f - (i)%0.2f\n",RP,IP,RP,IP);
    }
    return 0;
}