#include <stdio.h>


int runStrain(int a, int b, int k) {
    if (k == 1) {
        return a;
    }
    if (k % 2 == 0) {
        return b * runStrain(a, b, k / 2);
    } else {
        return a + runStrain(a, b, k - 1);
    }
}

int main() {
    int a, b, k;
    scanf("%d %d %d", &a, &b, &k);

    printf("%d", runStrain(a, b, k));


    return 0;
}
