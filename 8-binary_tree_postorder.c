#include "binary_trees.h"

/**
 * binary_tree_postorder - goes through a tree using post-order traversal
 * @tree: is a pointer to the root node of the tree to traverse
 * @func: is a pointer to a function to call for each node. The value is node must be
 * passed as a parameter to this function
 * 
 * Return: it returns nothing
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree && func)
{
binary_tree_postorder(tree->left, func);
binary_tree_postorder(tree->right, func);
func(tree->n);
}
}