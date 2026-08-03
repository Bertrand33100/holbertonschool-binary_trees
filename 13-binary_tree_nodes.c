#include "binary_trees.h"

/**
 * binary_tree_nodes - Compte le nombre de nœuds ayant au moins un enfant.
 * @tree: Pointeur vers la racine de l'arbre.
 *
 * Return: Le nombre de nœuds ayant au moins un enfant,
 * ou 0 si tree est NULL.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	return (1 + binary_tree_nodes(tree->left)
		+ binary_tree_nodes(tree->right));
}
