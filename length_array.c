#include <stdio.h>

int main() {
    int arr[] = {2, 4, 6, 8};
    int arrLength = sizeof arr / sizeof arr[0];
    printf("Array Length : %d\n", arrLength);
    return 0;
}