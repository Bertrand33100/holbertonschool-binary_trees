#ifndef BINARY_TREES_H
#define BINARY_TREES_H

#include <stddef.h>

/**
 * struct binary_tree_s - Représente un nœud d'un arbre binaire.
 *
 * @n: Valeur entière stockée dans le nœud.
 * @parent: Pointeur vers le nœud parent.
 * @left: Pointeur vers l'enfant gauche.
 * @right: Pointeur vers l'enfant droit.
 */
struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
typedef struct binary_tree_s bst_t;
typedef struct binary_tree_s avl_t;
typedef struct binary_tree_s heap_t;

/* Crée un nouveau nœud. */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);

/* Insère un nœud comme enfant gauche. */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);

/* Insère un nœud comme enfant droit. */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);

/* Supprime tout un arbre binaire. */
void binary_tree_delete(binary_tree_t *tree);

/* Vérifie si un nœud est une feuille. */
int binary_tree_is_leaf(const binary_tree_t *node);

/* Vérifie si un nœud est la racine. */
int binary_tree_is_root(const binary_tree_t *node);

/* Parcourt l'arbre en préordre (Root - Left - Right). */
void binary_tree_preorder(const binary_tree_t *tree,
	void (*func)(int));

/* Parcourt l'arbre en ordre (Left - Root - Right). */
void binary_tree_inorder(const binary_tree_t *tree,
	void (*func)(int));

/* Parcourt l'arbre en postordre (Left - Right - Root). */
void binary_tree_postorder(const binary_tree_t *tree,
	void (*func)(int));

/* Calcule la hauteur de l'arbre. */
size_t binary_tree_height(const binary_tree_t *tree);

/* Calcule la profondeur d'un nœud. */
size_t binary_tree_depth(const binary_tree_t *tree);

/* Calcule le nombre total de nœuds. */
size_t binary_tree_size(const binary_tree_t *tree);

/* Compte le nombre de feuilles. */
size_t binary_tree_leaves(const binary_tree_t *tree);

/* Compte les nœuds ayant au moins un enfant. */
size_t binary_tree_nodes(const binary_tree_t *tree);

/* Calcule le facteur d'équilibre d'un arbre. */
int binary_tree_balance(const binary_tree_t *tree);

/* Vérifie si l'arbre est plein (Full Binary Tree). */
int binary_tree_is_full(const binary_tree_t *tree);

/* Vérifie si l'arbre est parfait (Perfect Binary Tree). */
int binary_tree_is_perfect(const binary_tree_t *tree);

/* Retourne le frère (sibling) d'un nœud. */
binary_tree_t *binary_tree_sibling(binary_tree_t *node);

/* Retourne l'oncle (uncle) d'un nœud. */
binary_tree_t *binary_tree_uncle(binary_tree_t *node);

/* Vérifie si l'arbre est complet (Complete Binary Tree). */
int binary_tree_is_complete(const binary_tree_t *tree);

/* Effectue une rotation vers la gauche. */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree);

/* Effectue une rotation vers la droite. */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree);

/* Vérifie si l'arbre est un arbre binaire de recherche (BST). */
int binary_tree_is_bst(const binary_tree_t *tree);

#endif
