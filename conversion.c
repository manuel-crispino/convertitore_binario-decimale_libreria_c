#include <math.h>
#include "conversion.h"

/* Funzione per convertire un numero decimale in binario */
long long decimalToBinary(int decimal) {
    long long binary = 0;
    int position = 1;

    while (decimal > 0) {
        int bit = decimal % 2;
        binary += bit * position;
        position *= 10;
        decimal /= 2;
    }

    return binary;
}

/* Funzione per convertire un numero binario in decimale */
int binaryToDecimal(long long binary) {
    int decimal = 0;
    int position = 0;

    while (binary > 0) {
        int lastDigit = binary % 10;
        decimal += lastDigit * pow(2, position);
        position++;
        binary /= 10;
    }

    return decimal;
}