#include <stdio.h>

/* count blanks tabs and newlines*/
int main() {
    int c, nl, b, t;
    nl = 0;
    b = 0;
    t = 0;
    while ((c = getchar()) != EOF) {
        if(c == ' ') {
            ++b;
        }
        if(c == '\t') {
            ++t;
        }
        if(c == '\n') {
            ++nl;
        }
             
    }
    printf("blanks: %d, tabs: %d, newlines: %d\n", b, t, nl);    
}