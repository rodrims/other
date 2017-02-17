#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

void node_insert(node_t *root, int data);
void node_delete(node_t *root, int data);

typedef struct node {
	int data;
	node_t *left;
	node_t *right;
} node_t;
