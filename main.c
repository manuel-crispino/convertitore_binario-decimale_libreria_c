#include <stdio.h>
#include <math.h>
#include "conversion.h"

int main() {
    int choice; // Variabile per la scelta dell'utente

    printf("Scegli il tipo di conversione:\n");
    printf("1. Convertire da decimale a binario\n");
    printf("2. Convertire da binario a decimale\n");
    printf("Inserisci la tua scelta (1 o 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        // Decimale a Binario
        int yourDecimalNumber;
        printf("Inserisci un numero decimale da convertire in binario: ");
        scanf("%d", &yourDecimalNumber);

        long long myConvertedBinaryNumber = decimalToBinary(yourDecimalNumber);
        printf("%d decimale convertito in = %lld binario\n", yourDecimalNumber, myConvertedBinaryNumber);
    } 
    else if (choice == 2) {
        // Binario a Decimale
        long long yourBinaryNumber;
        printf("Inserisci un numero binario da convertire in decimale: ");
        scanf("%lld", &yourBinaryNumber);

        int myConvertedDecimalNumber = binaryToDecimal(yourBinaryNumber);
        printf("%lld binario convertito in = %d decimale\n", yourBinaryNumber, myConvertedDecimalNumber);
    } 
    else {
        // Scelta non valida
        printf("Scelta non valida! Riprova eseguendo il programma di nuovo.\n");
    }

    return 0;
}