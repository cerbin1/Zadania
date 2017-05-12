#include <stdio.h>

int main() {
    int numbers;
    long sum = 0;
    scanf("%d", &numbers);
    int array[numbers];
    int i;

    for (i = 0; i < numbers; ++i) {
        scanf("%d", &array[i]);
        sum += array[i];
    }

    for (i = 0; i < numbers; ++i) {
        printf("%li ", sum);
        sum -= array[i];
    }

    return 0;
}
