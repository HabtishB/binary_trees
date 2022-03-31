#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of the tree
 * @tree: is a pointer to the node to measure the depth
 *
 * Return: returns the size_t of the tree; if it null, it returns 0
 */

size_t binary_tree_depth(const binary_treet *tree)
{
if (!tree || !tree->parent)
return (0);
return (binary_tree_depth(tree->parent) + 1);
}
