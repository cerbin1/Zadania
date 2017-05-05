#include <stdio.h>
#include <math.h>

unsigned long long convertToBinary(unsigned long long number) {
    unsigned long long binaryNumber = 0, temp, i = 1;
    while (number != 0) {
        temp = number % 2;
        number /= 2;
        binaryNumber += temp * i;
        i *= 10;
    }
    return binaryNumber;
}

int main() {
    // Jezeli kompilator tu nie przejdzie bo bedzie chcial wprowadzic za duza liczbe na wejsciu trzeba bedzie
    // to poprawic poniewaz moze byc problem z wyswietlaniem liczby unsigned long long

    unsigned long long number;
    scanf("%d", &number);
    if (number < 1 || number > pow(10, 17)) {
        return 1;
    }
    printf("%d", convertToBinary(number));

    return 0;
}
