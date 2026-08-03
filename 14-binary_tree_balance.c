#include "binary_trees.h"

/**
 * height - Calcule la hauteur d'un arbre binaire.
 * @tree: Pointeur vers la racine de l'arbre.
 *
 * Return: La hauteur de l'arbre.
 */
static size_t height(const binary_tree_t *tree)
{
	size_t left;
	size_t right;

	if (tree == NULL)
		return (0);

	left = 0;
	right = 0;

	if (tree->left != NULL)
		left = 1 + height(tree->left);

	if (tree->right != NULL)
		right = 1 + height(tree->right);

	if (left > right)
		return (left);

	return (right);
}

/**
 * binary_tree_balance - Mesure le facteur d'équilibre d'un arbre binaire.
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
		left_height = height(tree->left) + 1;

	if (tree->right != NULL)
		right_height = height(tree->right) + 1;

	return (left_height - right_height);
}
