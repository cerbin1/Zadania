#include <stdio.h>

void run(int n, int *pointer, int bound) {
    for (int i = 0; i < n; ++i) {
        if (i % bound == 0) {
            printf("%d ", pointer[i]);
        }
    }
}

int main() {
    int numbersCount, bound;
    scanf("%d", &numbersCount);
    if (numbersCount < 1 || numbersCount > 1000) {
        return 1;
    }
    int array[numbersCount];
    for (int i = 0; i < numbersCount; ++i) {
        scanf("%d", &array[i]);
        if (array[i] < -1000 || array[i] > 1000) {
            return 1;
        }
    }
    scanf("%d", &bound);
    if (bound < 1 || bound > numbersCount) {
        return 1;
    }

    run(numbersCount, array, bound);

    return 0;
}