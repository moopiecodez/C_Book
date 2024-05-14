#include <stdio.h>

/* count new characters*/
int main() {
    int c, n1;

    n1 = 0;
    while ((c = getchar()) != EOF) {
        ++n1;
        printf("%d\n", n1);
    }
}