#include <stdio.h>
#include <stdlib.h>

int main() {
	int **myArr;
	int *tmpArr;

	myArr = (int **) malloc(3 * sizeof(int *));
	tmpArr = (int *) malloc(3 * 3 * sizeof(int));
	
	for (int i = 0; i < 3; i++) {
		myArr[i] = tmpArr + (3 * i);
	}

	myArr[0][0] = 0;
	myArr[0][1] = 1;
	myArr[0][2] = 2;
	myArr[1][0] = 3;
	myArr[1][1] = 4;
	myArr[1][2] = 5;
	myArr[2][0] = 6;
	myArr[2][1] = 7;
	myArr[2][2] = 8;

	for (int i = 0; i < 3; i++) {
		for (int j =0; j < 3; j++) {
			printf("%i ", myArr[i][j]);
		}
		printf("\n");
	}
	
	free(myArr);
	free(tmpArr);

	return 0;
}
