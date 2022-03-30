#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left child of another node
 *
 * @parent: is a pointer to the node to insert the left-child in
 * @value: is a value to store in the new node
 *
 * Return: returns a pointer to the created node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *new_tree;

if (parent == NULL)
return (NULL);

new_tree = binary_tree_node(parent, value);
if (new_tree == NULL)
return (NULL);

if (parent->left != NULL)
{
new_tree->left = parent->left;
parent->left->parent = new_tree;
}
parent->left = new_tree;

return (new_tree);
}
