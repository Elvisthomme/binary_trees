#include "binary_trees.h"
#include <stdlib.h>

/**
  * binary_tree_insert_left - create au binary tree node
  * @parent: a pointer to the parent node
  * @value: the value to put in the new node
  * Return: a pointer to the new node or NULL on failure
  */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (!parent)
		return (NULL);
	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);
	node->n = value;

	node->parent = parent;
	if (parent->left)
	{
		parent->left->parent = node;
		node->left = parent->left;
		parent->left = node;
	}
	else
		parent->left = node;
	return (node);
}
