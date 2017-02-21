#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	double price;
	double tip_p;
	double tax_p;
	double total;

	price = (double) gets();
	tip_p = (double) gets();
	tax_p = (double) gets();

	total = (1 + ((tip_p + tax_p) / 100.00)) * price;
	puts(total);

	return 0;
}
