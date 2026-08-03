#include "binary_trees.h"

/**
 * binary_tree_height - Calcule la hauteur d'un arbre binaire.
 * @tree: Pointeur vers la racine de l'arbre.
 *
 * Return: La hauteur de l'arbre, ou 0 si tree est NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height;
	size_t right_height;

	if (tree == NULL)
		return (0);

	left_height = 0;
	right_height = 0;

	if (tree->left != NULL)
		left_height = 1 + binary_tree_height(tree->left);

	if (tree->right != NULL)
		right_height = 1 + binary_tree_height(tree->right);

	if (left_height > right_height)
		return (left_height);

	return (right_height);
}
