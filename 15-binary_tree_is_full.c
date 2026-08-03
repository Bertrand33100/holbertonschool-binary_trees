#include "binary_trees.h"

/**
 * binary_tree_is_full - Vérifie si un arbre binaire est plein.
 * @tree: Pointeur vers la racine de l'arbre.
 *
 * Return: 1 si l'arbre est plein, sinon 0.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	/* Cas 1 : feuille */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* Cas 2 : deux enfants */
	if (tree->left != NULL && tree->right != NULL)
		return (binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right));

	/* Cas 3 : un seul enfant */
	return (0);
}
