#include <stdio.h>
#include <conio.h>

#define BINARY_LENGTH 8

int main(int argc, char const *argv[])
{
    int decimal;
    int binary[BINARY_LENGTH];

    printf("Digite o numero decimal para ser convertido para binario: ");
    scanf("%d", &decimal);

    for(int i = BINARY_LENGTH - 1; i >= 0; i--) {
        if (decimal % 2 == 0) binary[i] = 0;
        else binary[i] = 1;
        decimal /= 2;
    }

    for(int i = 0; i < BINARY_LENGTH; i++) {
        printf("%d", binary[i]);
    }
    
    printf("\n\n");

    getch();
    return 0;
}
