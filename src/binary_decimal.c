#include <stdio.h>
#include <math.h>
#include <conio.h>

#define BINARY_LENGTH 4

int main(int argc, char const *argv[])
{
    char binary[BINARY_LENGTH];
    int summation[BINARY_LENGTH], decimal = 0;

    printf("Digite o numero binario para ser convertido para decimal: ");
    scanf("%s", binary);

    int position = 0;
    for(int i = BINARY_LENGTH - 1; i >= 0; i--) {
        summation[i] = (binary[i] - '0') * pow(2, position);
        position++;
    }

    for(int i = 0; i < BINARY_LENGTH; i++) {
        decimal += summation[i];
    }
    
    printf("%d\n\n", decimal);

    getch();
    return 0;
}
