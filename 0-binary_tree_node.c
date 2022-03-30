#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary node
 * @parent: is a pointer fo the parent node of the node to create
 * @value: is the value to put in the new node
 *
 * Return: returns a pointer to the new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *node;

node = malloc(sizeof(binary_tree_t));
if (!node)
return (NULL);
node->n = value;
node->parent = parent;
node->left = NULL;
node->right = NULL;
return (node);
}
