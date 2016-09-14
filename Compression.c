#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void StringCompresssion(char *original, char *final);

int main()
{
    char *original =  "aabcccdddddda";
    char *compressed = malloc(sizeof(char) * ((strlen(original) * 2) + 1));
	StringCompression(original, compressed);
    free(compressed);
}

void StringCompresssion(char *original, char *compressed)
{
	puts(original);
	puts(compressed);
}
