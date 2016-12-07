// Code Chef
// https://www.codechef.com/ACM15KOL/problems/KOL1502

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function Declarations
int *getScores(int amt, char *argScores, int *retScores);
int maxScore(unsigned int max, int *intScores);

int main() 
{
	unsigned int amtCases;
	unsigned int amtIngredients;
	char *tasteScores;

	return EXIT_SUCCESS
}

int *getScores(int amt, char *argScores, int *retScores)
{
	int retScores[amt];

	for (unsigned int i = 0; i < amt; i++)
	{
		unsigned int ind = 1;
		char currChar = argScores[0];

		while (currChar != '\n')
		{
			currChar = argScores[ind];
		}
	}
}

int maxScore(unsigned int max, int *intScores)
{
	int maxScore = 0; // TODO Should this be unsigned?

	for (unsigned int i = 0; i < amt; i++)
	{
		max += intScores[i];
	}

	return max;
}
