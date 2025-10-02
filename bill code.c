#include <stdio.h>

int main() {
    float datausage, bill;

    printf("Enter the total amount of data used this month: ");
    scanf("%f", &datausage);

    if (datausage > 0 && datausage <= 100) {
        bill = datausage * 2;   // rate for 0-100
    }
    else if (datausage > 100 && datausage <= 200) {
        bill = datausage * 1.5; // rate for 101-200
    }
    else if (datausage > 200 && datausage <= 400) {
        bill = datausage * 1;   // rate for 201-400
    }
    else if (datausage > 400) {
        bill = datausage * 0.5; // rate for >400
    }
    else {
        printf("Invalid data usage!\n");
        return 0;
    }

    // Add 10% tax
    bill = bill + (bill * 0.1);

    printf("\nYour internet bill with tax is: %.2f\n", bill);

    return 0;
}

