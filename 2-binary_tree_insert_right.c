#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - Insère un nœud comme enfant droit.
 * @parent: Pointeur vers le nœud parent.
 * @value: Valeur à stocker dans le nouveau nœud.
 *
 * Return: Un pointeur vers le nouveau nœud, ou NULL en cas d'échec.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}

	parent->right = new_node;

	return (new_node);
}
