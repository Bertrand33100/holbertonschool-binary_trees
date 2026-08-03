#include "binary_trees.h"

/**
 * binary_tree_depth - Calcule la profondeur d'un nœud.
 * @tree: Pointeur vers le nœud.
 *
 * Return: La profondeur du nœud, ou 0 si tree est NULL.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (tree == NULL)
		return (0);

	depth = 0;

	while (tree->parent != NULL)
	{
		depth++;
		tree = tree->parent;
	}

	return (depth);
}
