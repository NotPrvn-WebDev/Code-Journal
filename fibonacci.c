// To print the Fibonacci Series till it reaches the given number of values

#include<stdio.h>

int main(){
    int n,a=0,b=1,c;
    printf("Enter n value");
    scanf("%d",&n);

    printf("0   1");
    do{
        c=a+b;
        printf("\t %d",c);
        a=b;
        b=c;
        n--;
    }while(n-2>0);
    return 0;
}