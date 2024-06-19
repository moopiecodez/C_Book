#include <stdio.h>

#define MAXCHARTYPE 128

/* write a program to print a histogram of the frequences of different 
characters in its input */

int main() {
    int c, i, j;
    int nchar[MAXCHARTYPE];

    for (i = 0; i < MAXCHARTYPE; i++) {
        nchar[i] = 0;
    }

    while ((c = getchar()) != EOF) {
        ++nchar[c];
    }

    for (i = 0; i < MAXCHARTYPE; i ++) {
        if (nchar[i] > 0){
            putchar(i);
            putchar('|');
            for (j = 0; j < nchar[i]; j++) {
            putchar('_');
        }
        putchar('\n');
        }        
        
    }
    printf("\n");

}