#include <stdio.h>

void funkcja1(int n, int *pointer, int bound) {
    for (int i = 0; i < n; ++i) {
        if (i % bound == 0) {
            printf("%d ", pointer[i]);
        }
    }
}

int main() {
    int n, m;

    n = 9;
    m = 2;
    int tablica[] = {4, 4, 4, 7, 5, 7, 6, 8, 6};
    printf("Powinno byc: \n");
    printf("4 4 5 6 6 \n");
    funkcja1(n, tablica, m);

    n = 20;
    m = 5;
    int tablica2[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    printf("\nPowinno byc: \n");
    printf("1 6 11 16 \n");
    funkcja1(n, tablica2, m);

    n = 5;
    m = 1;
    int tablica3[] = {1, 2, 3, 4, 5};
    printf("\nPowinno byc: \n");
    printf("1 2 3 4 5 \n");
    funkcja1(n, tablica3, m);


    return 0;
}