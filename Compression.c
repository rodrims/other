#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void StringCompresssion(char *original, char *final);

int main()
{
    char *original =  "aabcccdddddda";
    char *compressed = malloc(sizeof(char) * ((strlen(original) * 2) + 1));
    StringCompresssion(original, compressed);
    printf("%s", compressed);
    free(compressed);
}

void StringCompresssion(char *original, char *compressed)
{
    int currInd = 1;
    int origLen = strlen(original);
    char prevChar = original[0];

    int consecutive = 1;
    char currChar;
    char *num;

    while (currInd < origLen)
    {
        currChar = (char) original[currInd];
        //
        // if (prevChar == currChar)
        // {
        //     consecutive++;
        // }
        // else
        // {
        //     sprintf(num, "%d", consecutive);
        //     strcat(compressed, &prevChar);
        //     strcat(compressed, num);
        //     prevChar = currChar;
        //     consecutive = 1;
        // }

        currInd++;
    }

    sprintf(num, "%d", consecutive);
    strcat(compressed, &prevChar);
    strcat(compressed, num);

    if (origLen <= strlen(compressed))
    {
        compressed = original;
    }
}
