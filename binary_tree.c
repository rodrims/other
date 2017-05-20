#include "binary_tree.h"

#define SIZE 10

int main() {
	int arr[SIZE] = {1, 4, 6, 2, 18, 9, -1, 0, 3, 4};
	node_t *root = new_node(arr[0]);
	for (int i = 1; i < SIZE; i++) {
		insert_node(root, arr[i]);
	}

	in_order(root);
}

node_t *new_node(int data) {
	node_t *new_node = (node_t *) malloc(sizeof(node_t));
	new_node->data = data;
	new_node->left = NULL;
	new_node->right = NULL;
	return new_node;
}

void insert_node(node_t *root, int data) {
	if (root == NULL) {
		root = new_node(data);
		return;
	}

	node_t *leaf = get_leaf(root, data);
	if (data < leaf->data) {
		leaf->left = new_node(data);
	} else {
		leaf->right = new_node(data);
	}
}

node_t remove_node(node_t *root, int data) {
	node_t *curr = get_parent(root, data);

	if (curr->left == NULL && curr->right == NULL) {
		node_t tmp = *curr;
		free(curr);
		return tmp;
	}
}

void in_order(node_t *root) {
	if (root != NULL) {
		in_order(root->left);
		printf("%d ", root->data);
		in_order(root->right);
	}
}

/*
 HELPER METHODS
 */
// swaps data between two nodes
void swap_nodes(node_t *node1, node_t *node2) {
	int tmp = node1->data;
	node1->data = node2->data;
	node2->data = tmp;
}

// returns leaf node where data should be inserted
node_t *get_leaf(node_t *root, int data) {
	node_t *ancestor = NULL;
	node_t *curr = root;
	while (curr != NULL) {
		ancestor = curr;
		curr = data < curr->data ? curr->left : curr->right;
	}

	return ancestor;
}

node_t *get_parent(node_t *root, int data) {
	node_t *ancestor = NULL;
	node_t *curr = root;
	while (curr != NULL && curr->data != data) {
		ancestor = curr;
		curr = data < curr->data ? curr->left : curr->right;
	}

	return ancestor;
}

// bubbles a node down to a leaf so it can be removed easily
node_t *bubble_down(node_t *node, node_t *parent) {
	if (node->left != NULL) {
		swap(node, node->left);
		bubble_down(node->left, node);
	} else if (node->right != NULL) {
		swap(node, node->right);
		bubble_down(node->right, node);
	} else {
		return parent;
	}
}

// recursively free all nodes in a tree
void free_bintree(node_t *root) {
	if (root == NULL)  {
		return;
	}

	free_bintree(root->left);
	free_bintree(root->right);
	free(root);
}
