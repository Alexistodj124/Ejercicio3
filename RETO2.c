#include <stdio.h>

void decimalBinario(int decimal) {
    int binario[4];
    int i;

    for (i = 3; i >= 0; i--) {
        binario[i] = decimal % 2;
        decimal /= 2;
    }

    for (i = 0; i < 4; i++) {
        printf("%d", binario[i]);
    }

    printf("\n");
}

int main() {
    int decimalNumber;

    printf("Ingrese un numero decimal: ");
    scanf("%d", &decimalNumber);

    if (decimalNumber >= 0 && decimalNumber <= 15) {
        printf("El numero binario de 4 bits es: ");
        decimalBinario(decimalNumber);
    } else {
        printf("El numero debe estar en el rango de 0 a 15.\n");
    }

    return 0;
}
