#include "binary_trees.h"

/**
 * binary_tree_delete - inserts a node as the left-child
 * of another node
 * @parent: pointer to the root node of the tree to delete
 *
 *  Return: If parent is NULL or an error occurs - NULL.
 *         Otherwise - a pointer to the new node.
 */


void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
