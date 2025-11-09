//Check whether the given number is a Prime or Not

#include<stdio.h>

int main(){
    int n,count=0;
    printf("Enter n value");
    scanf("%d",&n);

    for(int a=1;a<=n;a++){
        if(n%a==0){count++;}}
        if(count==2){printf("Prime Number");}
        else{printf("Not a Prime Number");}

    return 0;
}