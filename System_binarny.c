#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
    long long decimal;
    int index = 0;

    scanf("%lli", &decimal);
    if (decimal < 1 || decimal > 100000000000000000) {
        return 1;
    }
    char binary[(int) ceil(log2(decimal))];

    while (decimal > 0) {
        binary[index] = (char) ((decimal % 2) + '0');
        decimal /= 2;
        index++;
    }
    binary[index] = '\0';

    printf("%s", strrev(binary));

    return 0;
}
