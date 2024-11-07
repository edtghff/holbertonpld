#include "main.h"

int countWords(char *sentence)
{
    int count = 0;
    int inWord = 0;

    while (*sentence != '\0')
    {
        if (*sentence == ' ' || *sentence == '\n' || *sentence == '\t')
        {
            inWord = 0;
        }
        else if (inWord == 0)
        {
            inWord = 1;
            count++;
        }
        sentence++;
    }

    return count;
}

