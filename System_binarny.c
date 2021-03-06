#include <stdio.h>
#include <math.h>
#include <string.h>


char *strrev(char *str) {
    char *p1, *p2;

    if (!str || !*str)
        return str;
    for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2) {
        *p1 ^= *p2;
        *p2 ^= *p1;
        *p1 ^= *p2;
    }
    return str;
}

int main() {
    long long decimal;
    int index = 0;

    scanf("%lli", &decimal);
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
