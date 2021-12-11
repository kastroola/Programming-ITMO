#include <stdio.h>
#include <math.h>

int main() {
    double pr1 = 0;
    printf("Enter your dot for 1st problem\n");
    scanf("%lf", &pr1);

    printf("Answer is ");
    double z1;
    z1 = (sin(2*pr1) + sin(5*pr1) - sin(3*pr1))/(cos(pr1) + 1 - 2*pow(sin(2*pr1), 2));
    printf("%lf\n", z1);

    double pr2 = 0;
    printf("Enter your dot for 2nd problem\n");
    scanf("%lf", &pr2);

    printf("Answer is ");
    double z2;
    z2 = 2*sin(pr2);
    printf("%lf", z2);

    return 0;
}