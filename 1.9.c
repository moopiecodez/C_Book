#include <stdio.h>

/*write a program to copy its input to its output, replacing each string of
one or more blanks by a single blank*/

int main() {
    int c, prev;
    prev = -1;
    while((c = getchar()) != EOF) {
        if (c != ' '){
            if (prev == ' '){
            putchar(' ');
            putchar(c);
            } else {
            putchar(c);
            }
        }
        prev = c;
    }
}
