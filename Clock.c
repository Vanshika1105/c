#include <stdio.h>
#include <time.h>

int main() {
    clock_t start, end;
    double cpu_time_used;
    int i;
    double sum = 0;
    
    start = clock();
    for (i = 0; i < 10000000; i++) {
        sum += i;
    }
    end = clock();
    
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Sum: %f\n", sum);
    printf("Elapsed CPU time: %f seconds\n", cpu_time_used);
    
    return 0;
}