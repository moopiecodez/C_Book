#include <stdio.h>

/* count tabs*/
int main() {
    int c, n1;

    n1 = 0;
    while ((c = getchar()) != EOF) {
        if (c == '\t')
            ++n1;
        printf("%d\n", n1);
    }
}