#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int data;
	struct node *left;
	struct node *right;
} node_t;

node_t *new_node(int data);
void insert_node(node_t *root, int data);
node_t remove_node(node_t *root, int data);
void in_order(node_t *root);
void swap_nodes(node_t *node1, node_t *node2);
node_t *get_leaf(node_t *root, int data);
node_t *get_parent(node_t *root, int data);
void free_bintree(node_t *root);
