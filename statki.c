#include <stdio.h>

int main() {
    int numbersCount;
    scanf("%d", &numbersCount);
    if (numbersCount < 1 || numbersCount > 100) {
        return 1;
    }

    char board[8][8];
    for (int j = 0; j < 8; ++j) {
        for (int i = 0; i < 8; ++i) {
            board[j][i] = '.';
        }
    }

    for (int k = 0; k < numbersCount; ++k) {
        int x, y;
        scanf("%d", &x);
        if (x < 1 || x > 8) {
            return 1;
        }
        scanf("%d", &y);
        if (y < 1 || y > 8) {
            return 1;
        }
        board[x - 1][y - 1] = 'X';
    }

    for (int j = 0; j < 8; ++j) {
        for (int i = 0; i < 8; ++i) {
            printf("%c", board[j][i]);
        }
        printf("\n");
    }

    return 0;
}
