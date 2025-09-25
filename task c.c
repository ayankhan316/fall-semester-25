#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    double exp;
    printf("Enter total expense: ");
    scanf("%lf", &exp);

    if (exp < 2000) {
        printf("\nYou get no discount!");
    }
    else if (exp >= 2000 && exp <= 4000) {
        printf("\nYou get a discount of 20%%");
        printf("\nThe actual amount was %.2lf\nAfter discount: %.2lf\nThe saved amount is %.2lf", 
               exp, exp - (exp * 0.2), exp * 0.2);
    }
    else if (exp > 4000 && exp <= 6000) {
        printf("\nYou get a discount of 30%%");
        printf("\nThe actual amount was %.2lf\nAfter discount: %.2lf\nThe saved amount is %.2lf", 
               exp, exp - (exp * 0.3), exp * 0.3);
    }
    else { 
        printf("\nYou get a discount of 50%%");
        printf("\nThe actual amount was %.2lf\nAfter discount: %.2lf\nThe saved amount is %.2lf", 
               exp, exp - (exp * 0.5), exp * 0.5);
    }

    return 0;
}

