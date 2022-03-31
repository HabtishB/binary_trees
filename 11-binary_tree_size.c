#include "binary_tree.h"

/**
 * binary_tree_size- measures the size of the binary tree
 * @tree: a pointer to the root node of the tree to measure the size
 *
 *Return: returns the size of the binary tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
if (tree)
return (1 + binary_tree_size(tree->right) + binary_tree_size(tree_left));
return (0);
}
