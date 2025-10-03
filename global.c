#include <stdio.h>

/* Global variable declaration */
int globalVar = 100;

int main() {
    /* Local variable declaration */
    int localVar = 50;
    
    /* Declaration and initialization in one line */
    int sum = globalVar + localVar;
    
    printf("Global Variable: %d\n", globalVar);
    printf("Local Variable: %d\n", localVar);
    printf("Sum: %d\n", sum);
    
    return 0;
}