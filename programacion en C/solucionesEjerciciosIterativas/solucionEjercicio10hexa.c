#include <stdio.h>

void decToHex(int decimal) 
{
    if (decimal == 0) 
    {
        printf("Hexadecimal: 0\n");
        return;
    }

    char hexadecimal[100];
    int indx = 0;

    while (decimal > 0) 
    {
        int remainder = decimal % 16;

        if (remainder < 10)
            hexadecimal[indx++] = remainder + '0';
        else
            hexadecimal[indx++] = remainder + 'A' - 10;

        decimal /= 16;
    }

    printf("Hexadecimal number is: ");

    for (int i = indx - 1; i >= 0; i--)
        printf("%c", hexadecimal[i]);

    printf("\n");
}

int main() 
{
    int decimalNum = 27;
    decToHex(decimalNum);
    return 0;
}