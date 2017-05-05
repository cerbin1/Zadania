#include <stdio.h>


int runStrain(int number) {
    if (number == 0) {
        return 2;
    }
    if (number % 2 == 0) {
        return runStrain(number / 2) * runStrain(number / 2);
    } else {
        return runStrain(number - 1);
    }
}

int main() {
    int number;
    scanf("%d", &number);

    printf("%d", runStrain(number));

    return 0;
}
