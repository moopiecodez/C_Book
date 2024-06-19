#include <stdio.h>

/* write a program to print a histogram of the lengths of words in its input*/

int main() {
    int c, prev;
    prev = '\0';

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            if (prev != ' ' && prev != '\n' && prev != '\t') {
                putchar('\n');
            } 
        } else {
            putchar('_');
        }
        prev = c;   
    }
}
