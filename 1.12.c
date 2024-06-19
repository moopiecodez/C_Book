#include <stdio.h>

/* question 1.11 how would you test a word count program:
input various different character combinations, use hyphenated words,
multiple new lines and tabs interspersed with one character words.*/

/*Write a program that prints its input one word per line.*/

int main() {
    int c, prev;
    prev = '\0';

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            if (prev != ' ' && prev != '\n' && prev != '\t') {
                putchar('\n');
            } 
        } else {
            putchar(c);
        }
        prev = c;   
    }
}