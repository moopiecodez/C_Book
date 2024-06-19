#include <stdio.h>
#define MAXLINE 10

//seems to be a getline function already so can't use that and used getLine instead
int getLine(char line[], int maxline);
void copy(char to[], char from[]);

/*
revise main routine of longest-line program so it will correctly print the length of arbitrarily
long input lines and as much as possible of the text

*/
int main() {
    int len;
    int max;
    char line[MAXLINE];
    char longest[MAXLINE];

    max = 0;
    while ((len = getLine(line, MAXLINE)) > 0) {
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    }
    if (max > 0) {
        printf("%s\n", longest);
        //depends what you're counting but if don't want to include \n char - 1
        printf("%d\n", max-1);
    }
    return 0;
    }

int getLine(char s[], int lim) {
    int c, i, j;

    j = 0;
    for (i=0; (c=getchar()) !=EOF && c!='\n'; ++i) {
        if (i < lim -2){
            s[j] = c;
            j++;
        }
    }
    //adds the \n char when it's reached even if chars between it can't be stored in buffer
    
    if (c == '\n') {
        s[j] = c;
        ++j;
        ++i;        
    }
    s[j] = '\0';
    return i;
    
}
/*
int getLine(char s[], int lim) {
    int c, i;

    for (i=0; i < lim-2 && (c=getchar()) !=EOF && c!='\n'; ++i) {
        s[i] = c;
    }
    //doesn't happen if \n comes after lim-1, need it for EOF to be registered
    
    if (c == '\n') {
        s[i] = c;
        ++i;        
    }
    //why if you add this does EOF no longer work to end program?     
    s[i] = '\n';
    ++i;   
    s[i] = '\0';
    return i;
    
}
*/

void copy(char to[], char from[]) {
    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}