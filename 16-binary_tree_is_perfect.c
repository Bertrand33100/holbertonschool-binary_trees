#include "binary_trees.h"

/**
 * height - Calcule la hauteur d'un arbre.
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
 * is_perfect - Vérifie si un arbre est parfait.
 * @tree: Pointeur vers la racine de l'arbre.
 * @level: Niveau actuel.
 * @depth: Profondeur des feuilles.
 *
 * Return: 1 si l'arbre est parfait, sinon 0.
 */
static int is_perfect(const binary_tree_t *tree, size_t level, size_t depth)
{
	if (tree == NULL)
		return (1);

	if (tree->left == NULL && tree->right == NULL)
		return (level == depth);

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	return (is_perfect(tree->left, level + 1, depth) &&
		is_perfect(tree->right, level + 1, depth));
}

/**
 * binary_tree_is_perfect - Vérifie si un arbre binaire est parfait.
 * @tree: Pointeur vers la racine de l'arbre.
 *
 * Return: 1 si l'arbre est parfait, sinon 0.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t depth;

	if (tree == NULL)
		return (0);

	depth = height(tree);

	return (is_perfect(tree, 0, depth));
}
