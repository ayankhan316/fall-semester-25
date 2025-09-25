#include <stdio.h>
int main() {
    int a, b;

    printf("1. School of Electrical Engineering\n");
    printf("2. School of Computer Science\n");
    printf("Make your choice: ");
    scanf("%d", &a);

    switch(a) {
        case 1:
            printf("You chose Electrical Engineering\n");
            break;

        case 2:
            printf("Available Departments\n");
            printf("1. Department of DataScience\n");
            printf("2. Department of CyberSecurity\n");
            scanf("%d", &b);

            switch(b) {
                case 1:
                    printf("You chose DataScience\n");
                    break;
                case 2:
                    printf("You chose CyberSecurity\n");
                    break;
                default:
                    printf("Invalid department choice\n");
            }
            break;

        default:
            printf("Invalid school choice\n");
    }

    return 0;
}

