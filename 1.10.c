#include <stdio.h>

/* write a program to copy its input to its output, replacing each tab by
\t each backspace by \b and each backslash by \\. 
Note backspace is caught as ^H in the terminal, but does not delete previously
included input*/

int main() {
    int c;

    while((c = getchar()) != EOF) {
        if (c == '\t') {
            putchar('\\');
            putchar('t');
        } 
        else if (c == '\b') {
            putchar('\\');
            putchar('b');
        }
         else if (c == '\\') {
            putchar('\\');
            putchar('\\');
        } else {
            putchar(c);
        }
        
    }
}