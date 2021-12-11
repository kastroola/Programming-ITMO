#include <stdio.h>

int main() {

    int hex;
    printf("Enter num in hexadecimal system\n");
    scanf("%x", &hex);

    printf("It's your num in octal system - %o\n", hex);

    printf("It's your num in octal system after left shift by 3 bits - %o\n", hex << 3);

    printf("It's your num in octal system after inversion - %o\n", ~hex);

    int oct;
    printf("Enter your other num in octal system\n");
    scanf("%o", &oct);

    printf("It's your second num and first num in octal system with exclusive or - %o", oct^hex);

    return 0;
}