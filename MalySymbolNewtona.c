#include <stdio.h>

int countFactorial(int number) {
    if (number < 2) {
        return 1;
    }
    return number * countFactorial(number - 1);
}

int main() {
    int n, k;
    scanf("%d", &n);
    scanf("%d", &k);
    if (k < 0 || k > 10) {
        return 1;
    }
    if (n < k || n > 10) {
        return 1;
    }

    printf("%d", countFactorial(n) / (countFactorial(k) * countFactorial(n - k)));

    return 0;
}
