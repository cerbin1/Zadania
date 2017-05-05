#include <stdio.h>

int main() {
    int n, index = -1;
    scanf("%d", &n);
    if (n < 0 || n > 1000) {
        return 1;
    }
    int array[n];
    for (int i = 0; i < n; ++i) {
        scanf("%d", &array[i]);
        if (array[i] == 0) index = i;
    }
    do {
        printf("%d ", array[index]);
        index = array[index];
    } while (array[index] != 0);

    return 0;
}
