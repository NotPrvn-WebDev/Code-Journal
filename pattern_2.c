// Print '*' characters in an inc order using Loops
//***
//**
//*

#include<stdio.h>
int main(){
int n,sum=0,i,j;
printf("Enter n value");
scanf("%d",&n);

for(i=n;i>=1;i--)
{for(j=1;j<=i;j++)
{printf("*");}
printf("\n");}
return 0;
}