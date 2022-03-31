#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the height
 *
 * Return: the height of a tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
size_t right_height, left_height

if (!tree || (!tree->right && !tree->left))
return (0);

right_height = binary_tree_height(tree->right);
left_height = binary_tree_height(tree->left);

if (right_height < left->height)
return (left_height + 1);
return (right_height + 1);
}
