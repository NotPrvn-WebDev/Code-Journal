//Reverse the Number

#include<stdio.h>
int main(){
    int n,r=0,s=0;
    printf("\n Enter n value");
    scanf("%d",&n);

    while(n>0){
        r=n%10; //takes the last digi
        s=s*10+r;  //Forms the reversed Number Value
        n=n/10;  //Removes the last digit from the Given Value
    }
    printf("%d",s);
    return 0;
}