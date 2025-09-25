#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	#include <stdio.h>


    unsigned char num; 
    printf("Enter an 8-bit number (0-255): ");
    scanf("%hhu", &num);

    printf("Original number: %u\n", num);

  
    if ((num % 16) >= 8) {
        num = num - 8; 
        printf("4th bit was ON, now turned OFF.\n");
    }

  
    if ((num % 128) >= 64) {
        num = num - 64; 
        printf("7th bit was ON, now turned OFF.\n");
    }

    printf("Modified number: %u\n", num);
	return 0;
   
}


