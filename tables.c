//Print a Table

#include<stdio.h>
int main(){
    int n;
    printf("Enter n value");
    scanf("%d",&n);

    int i=1;
    while(i<=12){
        printf("%d*%d=%d\n",n,i,n*i);
        i++;
    }
    return 0;  
}