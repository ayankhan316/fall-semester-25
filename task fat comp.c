#include <stdio.h>

int main() {
    double fat, cal, perc;

    printf("Enter total calories: ");
    scanf("%lf", &cal);

    printf("Enter fat in grams: ");
    scanf("%lf", &fat);

    fat = fat * 9;               
    perc = (fat / cal) * 100;   
    if (perc == 30) {
        printf("\nThe fat content is healthy.\nIt is around %.2lf%%", perc);
    }
    else if (perc < 30) {
        printf("\nThe fat content is low.\nIt is around %.2lf%%", perc);
    }
    else if (perc > 30) {
        printf("\nThe fat content is high.\nIt is around %.2lf%%", perc);
    }
    else {
        printf("Invalid composition!");
    }

    return 0;
}

