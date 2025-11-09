// Print the prime numbers within the given range

#include<stdio.h>

int main(){
    int i,j,count,n;
    printf("Enter n value");
    scanf("%d",&n);

    for(i=2;i<=n;i++){
        count=0;
        for(j=1;j<=i;j++){
           if (i%j==0){count++;}
        }if(count==2){printf("%d is a Prime Number\n",i);}
    else{printf("%d is Not a Prime Number\n",i);}
    }
    
    return 0;
}