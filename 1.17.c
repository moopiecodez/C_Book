#include <stdio.h>
#define MAXLINE 1000

//seems to be a getline function already so can't use that and used getLine instead
int getLine(char line[], int maxline);
void copy(char to[], char from[]);

/*
print lines longer than 80 chars
*/
int main() {
    int len;
    // min variable to set length at which printed
    int min = 80;
    char line[MAXLINE];
    char longest[MAXLINE];

    while ((len = getLine(line, MAXLINE)) > 0) {
        if (len > min) {
            printf("%s", line);
        }
    }
    
    return 0;
    }

int getLine(char s[], int lim) {
    int c, i;

    for (i=0; i < lim-1 && (c=getchar()) !=EOF && c!='\n'; ++i) {
        s[i] = c;
    }
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
    
}

