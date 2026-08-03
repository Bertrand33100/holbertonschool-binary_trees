#include "binary_trees.h"

/**
 * binary_tree_postorder - Parcourt un arbre binaire en postordre.
 * @tree: Pointeur vers la racine de l'arbre.
 * @func: Fonction à appeler pour chaque nœud.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
