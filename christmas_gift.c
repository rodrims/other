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

int *getScores(int size, char *argScores, int *retScores)
{
	int retScores[size];

	for (unsigned int i = 0; i < size; i++)
	{
		unsigned int ind = 1;
		char currChar = argScores[0];

		while (currChar != '\n')
		{
			currChar = argScores[ind];
		}
	}
}

/* I think also number of test cases will be used here */
int maxScore(int size, int *intScores)
{
	int maxScore = 0; 

	for (unsigned int i = 1; i <= size; i++)
	{
		max += intScores[i];
	}

	return max;
}
