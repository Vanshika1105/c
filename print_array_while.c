#include <stdio.h>

int main() {
    int numbers[] = {10, 20, 30, 40, 50};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int i = 0;
    while (i < size) {
        printf("%d ", numbers[i]);
        i++;
    }

    return 0;
}