#include <stdio.h>

int main() {
    int numbersCount;
    scanf("%d", &numbersCount);
    if (numbersCount < 1 || numbersCount > 50000) {
        return 1;
    }
    int array[numbersCount];
    for (int i = 0; i < numbersCount; ++i) {
        scanf("%d", &array[i]);
        if (array[i] < 1 || array[i] > 20000) {
            return 1;
        }
    }
    for (int i = 0; i < numbersCount; ++i) {
        int sum = 0;
        for (int j = i; j < numbersCount; ++j) {
            sum += array[j];
        }
        printf("%d ", sum);
    }

    return 0;
}
