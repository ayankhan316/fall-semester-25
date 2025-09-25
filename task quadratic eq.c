#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
    double a, b, c, Q1, Q2;
    printf("Enter a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    Q1 = (-b + sqrt(b*b - 4*a*c)) / (2*a);
    Q2 = (-b - sqrt(b*b - 4*a*c)) / (2*a);

    printf("The roots are %lf and %lf respectively\n", Q1, Q2);

    return 0;
}

