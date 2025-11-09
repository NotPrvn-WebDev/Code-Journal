// Print '*' characters in an inc order using Loops
//    *
//   * *
//  * * *

#include<stdio.h>

int main(){
    int i,j,n,k;
    printf("Enter n value");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        for(j=n;j>=i+1;j--){    //For space
            printf(" ");
        }
        for(k=1;k<=i;k++){   //To print *
            printf(" *");
        }
        printf("\n");
    }
    return 0;
}

