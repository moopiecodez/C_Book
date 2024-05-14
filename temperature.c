#include<stdio.h>

/* print fahrenheit-celsius table for fahr 0-300 */
int main() {
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    printf("Fahrenheit to celsius conversion:\n");
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32.0); 
        printf("%3.0f\t%6.1f\n", fahr, celsius); //define width of digit field
        fahr = fahr + step;
    }
}