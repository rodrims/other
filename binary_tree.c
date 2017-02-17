#include "binary_tree.h"

node_t *new_node(int data);
void insert_node(node_t *root, int data);
void remove_node(node_t *root, int data);
void free_bintree(node_t *root);

node_t *new_node(int data) {
	node_t *root = malloc(sizeof(node_t));
	root->data = data;
	root->left = NULL;
	root->right = NULL;
	return root;
}


void insert_node(node_t *root, int data) {
	if (root == NULL) {
		root = new_node(data);
		return;
	}

	node_t *ancestor;
	node_t *curr_node = root;
	bool is_left_child;
	while (curr_node != NULL) {
		if (data < curr_node->data) {
			ancestor = curr_node;
			curr_node = curr_node->left;
			is_left_child = true;
		} else {
			ancestor = curr_node;
			curr_node = curr_node->right;
			is_left_child = false;
		}
	}

	if (is_left_child) {
		ancestor->left = new_node(data);
	} else {
		ancestor->right = new_node(data);
	}
}

void remove_node(node_t *root, int data) {
	if (root == NULL) {
		return;
	}

	node_t *ancestor;
	node_t *curr_node = root;
	bool is_left_child;
	while (curr_node != NULL) {
		if (data < curr_node->data) {
			ancestor = curr_node;
			curr_node = curr_node->left;
			is_left_child = true;
		} else {
			ancestor = curr_node;
			curr_node = curr_node->right;
			is_left_child = false;;
		}
	}

	if (is_left_child) {
		if (ancestor->left->data == data) {
			;
		}
	} else {
		if (ancestor->right->data == data) {
		}
	}
}

// this is a helper function to remove_node()
void delete_node(node_t *node) {
	if (node->left || node->right) {
		;
	} 

	free_bintree(node);
}

void free_bintree(node_t *root) {
	if (root == NULL)  {
		return;
	}

	free_bintree(root->left);
	free_bintree(root->right);
	free(root);
}
