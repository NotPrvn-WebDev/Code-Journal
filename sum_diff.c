//To print sum and difference of two values
#include<stdio.h>

int main(){
    int a,b,sum,diff;
    printf("Enter a and b values");
    scanf("%d %d",&a,&b);
    sum=a+b;
    diff=a-b;
    printf("Sum is: %d \n",sum);
    printf("Diff is: %d \n",diff);
    return 0;
}