// To print alphabets in a pattern using loops
//  A
//  A B
//  A B C

#include<stdio.h>

int main(){
    int i,j,n;
    printf("Enter n value");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%c", 'A'+j-1);
            if(j<i){printf(" ");};
        }printf("\n");
    }
    return 0;
}