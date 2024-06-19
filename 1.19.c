#include <stdio.h>
#define MAXLINE 10000

int getLine(char line[], int maxline);
void reversecopy(char to[], char from[], int length);

/*reverse input a line at a time */
int main() {
    int len;
    char line[MAXLINE];
    char reverse[MAXLINE];

    while ((len = getLine(line, MAXLINE)) > 0) {
        reversecopy(reverse, line, len);
        printf("%s", reverse);
    }
    return 0;
}

int getLine(char line[], int maxline) {
    int c, i, j;
    line[0] = '\0';
    for(i=0; i < maxline - 1 && (c=getchar()) !=EOF && c != '\n'; i++) {
        line[i] = c;
    }
    if (c == '\n') {
        line[i] = c;
        i++;
    }
    line[i] = '\0';
    //length does not include the \0 char
    return i;
}

void reversecopy(char to[], char from[], int length) {
    int i = 0;
    int rev_start = length - 1;
    //ensure that if previous line was longer no chars creep into current line
    to[length] = '\0';   
    while ((to[rev_start - i] = from[i]) != '\0') {
        i++;
    }        
}