#include <stdio.h>

/* check that getchar() != EOF is 0 or 1*/

int main() {
    int c;  // use int instead of char as getchar() must handle EOF
    int e = EOF;
    printf("%i\n", e); // print value of EOF (-1)
    //while ((c = getchar()) != EOF) // need () as != takes precedence over =
    //check getchar() 1= EOF is 0 or 1
    while(c = (getchar() != EOF))
    {
        printf("%i\n", c);
    }
    printf("%i\n", c);

}