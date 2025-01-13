#include <stdio.h>
#include <math.h>


long long decimalToBinary(int decimal) {
    long long binary = 0; // Variabile per memorizzare il numero binario
    int position = 1;     // Posizione in base 10 (1, 10, 100, ...)

    while (decimal > 0) {
        int bit = decimal % 2; // Ottieni l'ultimo bit
        binary += bit * position; // Somma il bit con il peso corretto
        position *= 10; // Aggiorna la posizione
        decimal /= 2;   // Dividi per 2 per calcolare il prossimo bit
    }

    return binary; // Ritorna il numero binario completo
};


int binaryToDecimal(long long binary) {
    int decimal = 0;
    int position = 0;

    while (binary > 0) {
        int lastDigit = binary % 10; // Ottieni l'ultimo bit
        decimal += lastDigit * pow(2, position); // Calcola il valore decimale
        position++;
        binary /= 10; // Rimuovi l'ultimo bit
    }

    return decimal;
};
