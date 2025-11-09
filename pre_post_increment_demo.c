//Description: Demonstrates the use of pre-increment (++i) and post-increment (i++) operators
// in a single expression. Note: Using both on the same variable in one statement may cause
// undefined behavior in C, and results can vary between compilers.
#include <stdio.h>
int main (){
    int i=5,j;
    j=(i++)+(++i);
    printf("\n the j value is %d",j);
    return 0;
}
