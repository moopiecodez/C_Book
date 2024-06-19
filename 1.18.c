#include <stdio.h>
#define MAXLINE 10000

int getLine(char line[], int maxline);

/*remove trailing blanks and tabs from each line of input, and delete blank lines*/

int main() {
    int len;
    char line[MAXLINE];

    while ((len = getLine(line, MAXLINE)) > 0) {
        printf("%s", line);
    }
    return 0;
}

int getLine(char line[], int maxline) {
    int c, i, j;
    //simple way to clear string before learning about malloc
    line[0] = '\0';
    for(i=j=0; j < maxline - 1 && (c=getchar()) !=EOF && c != '\n'; i++) {
        if (j < maxline - 2 && c != ' ' && c != '\t') {
            line[j] = c;
            j++;
        }
    }
    if (c == '\n') {
        if(j != 0) {
        line[j] = c;
        j++;
        } else {
        //need this to avoid terminating programme on blank input line
        i++;
        }
    }
    line[j] = '\0';
    return i;
}