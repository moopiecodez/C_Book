#include<stdio.h>

/* print celsius-fahrenheit table for celsius 0-300 */
int main() {
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    printf("Celsius to fahrenheit conversion:\n");
    while (celsius <= upper) {
        fahr = (celsius * 9.0/5.0) + 32.0; 
        printf("%3.0f\t%6.1f\n", celsius, fahr); 
        celsius = celsius + step;
    }
}