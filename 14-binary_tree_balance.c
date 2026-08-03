#include "binary_trees.h"

/**
 * binary_tree_balance - Calcule le facteur d'équilibre d'un arbre binaire.
 * @tree: Pointeur vers la racine de l'arbre.
 *
 * Return: Le facteur d'équilibre, ou 0 si tree est NULL.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height;
	int right_height;

	if (tree == NULL)
		return (0);

	left_height = 0;
	right_height = 0;

	if (tree->left != NULL)
		left_height = binary_tree_height(tree->left) + 1;

	if (tree->right != NULL)
		right_height = binary_tree_height(tree->right) + 1;

	return (left_height - right_height);
}
