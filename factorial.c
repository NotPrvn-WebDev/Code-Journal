//Print the factorial of the Given Number

#include<stdio.h>

int main(){
    int n,a,p=1;
    printf("Enter n value");
    scanf("%d",&n);

    for(a=n;a>=1;a--){
        p=p*a;
    }printf("\n The factorial of %d is %d",n,p);
    return 0;
}
