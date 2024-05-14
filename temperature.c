#include<stdio.h>

/* print fahrenheit-celsius table for fahr 0-300 */
int main() {
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    while (fahr <= upper) {
        celsius = 5 * (fahr-32) / 9; //avoids truncating 5/9 decimals
        printf("%3d\t%6d\n", fahr, celsius); //define width of digit field
        fahr = fahr + step;
    }
}