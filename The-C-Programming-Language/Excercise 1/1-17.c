#include <stdio.h>
#include <stdlib.h>

#define MAXLINE 100

int getLine(char *);
void copy(char *, char *);

int main(void)
{
    char line[MAXLINE];
    char longest[MAXLINE];
    int len;

    while((len = getLine(line)) > 0)
    {
        if(len >= 80)
        {
            copy(longest, line);
            printf("%s\n", longest);
        }
    }

    return 0;
}

int getLine(char line[])
{
    int c, nc = 0;

    while (((c = getchar()) != EOF) && c != '\n' && nc < MAXLINE)
    {
        line[nc] = c;
        nc++;
    }

    /*uncomment this for error checking*/
    // if(nc >= MAXLINE)
    // {
    //     printf("Error, exceeded maximum size of a line\n");
    //     exit(1);
    // }

    line[nc] = '\0';

    return nc;
}

void copy(char to[], char from[])
{
    int i = 0;

    while(from[i] != '\0')
    {
        to[i] = from[i];
        i++;
    }

    to[i] = '\0';
}
