#include "binary_trees.h"

/**
 * binary_tree_size - Calcule le nombre total de nœuds d'un arbre binaire.
 * @tree: Pointeur vers la racine de l'arbre.
 *
 * Return: Le nombre de nœuds, ou 0 si tree est NULL.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (1 + binary_tree_size(tree->left)
		+ binary_tree_size(tree->right));
}
