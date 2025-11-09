//Bitwise Operators
#include<stdio.h>

int main(){
    int a,b;
    printf("Enter a and b values");
    scanf("%d %d",&a,&b);

    printf("\n using bitwise operator [AND &] on %d & %d: %4d",a,b,a&b);
    printf("\n using bitwise operator [OR |] on %d | %d: %4d",a,b,a|b);
    printf("\n using bitwise operator Left-Shift [<<] on %d << %d: %4d",a,b,a<<b);
    printf("\n using bitwise operator Right-Shift [>>] on %d >> %d: %4d",a,b,a>>b);
    printf("\n using bitwise operator [XOR ^] on %d ^ %d: %4d",a,b,a^b);
    printf("\n using bitwise operator [Compliment ~] on %d:%4d",a,~a);
    return 0;
}
