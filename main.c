#include <stdio.h>

int main() 

    printf("Enter string\n");
    int c;
    while ((c = getchar()) != '\n')
            printf("%c", c);

    printf("\nEnter float num\n")
    foat f;
    scanf("%f", &f);
    printf("%f\n", f);

    return 0;
}
