#include<stdio.h>

#define LOWER 0 // lower limit as constant
#define UPPER 300
#define STEP 20 //step size

/* print fahrenheit - celsius table */

int main () {
    int fahr;
    printf("Fahrenheit to celsius table:\n");
    for (fahr = UPPER; fahr >= LOWER; fahr -= STEP) {
        printf("%3d \t %6.1f\n", fahr, (5.0/9.0) * (fahr - 32.0));
    }
}