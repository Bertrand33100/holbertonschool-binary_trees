# Binary Trees

## Description

Ce projet a pour objectif d'apprendre les arbres binaires en langage C.

Un arbre binaire est une structure de données hiérarchique dans laquelle chaque nœud possède au maximum deux enfants :

- un enfant gauche (`left`)
- un enfant droit (`right`)

Les arbres binaires sont largement utilisés pour organiser des données, effectuer des recherches rapides et implémenter de nombreuses structures comme les Binary Search Trees (BST), les AVL Trees et les Binary Heaps.

---

## Objectifs

À la fin de ce projet, vous serez capable de :

- Comprendre le fonctionnement d'un arbre binaire.
- Créer et manipuler des nœuds.
- Calculer la taille, la hauteur et la profondeur d'un arbre.
- Parcourir un arbre avec différents algorithmes.
- Différencier un Binary Tree d'un Binary Search Tree.
- Identifier les différents types d'arbres (Complete, Full, Perfect, Balanced).
- Comprendre les avantages en complexité par rapport aux listes chaînées.

---

## Structure utilisée

```c
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
```

Chaque nœud contient :

- une valeur entière
- un pointeur vers son parent
- un pointeur vers son enfant gauche
- un pointeur vers son enfant droit

---

## Types d'arbres

### Binary Tree

Aucune règle particulière sur les valeurs.

### Binary Search Tree (BST)

Les valeurs du sous-arbre gauche sont inférieures à la valeur du nœud.

Les valeurs du sous-arbre droit sont supérieures à la valeur du nœud.

---

## Parcours d'un arbre

### Inorder

Gauche → Racine → Droite

### Preorder

Racine → Gauche → Droite

### Postorder

Gauche → Droite → Racine

---

## Complexités

| Opération | Liste chaînée | BST équilibré |
|-----------|--------------|---------------|
| Recherche | O(n) | O(log n) |
| Insertion | O(1) | O(log n) |
| Suppression | O(n) | O(log n) |

---

## Concepts importants

- Root
- Parent
- Child
- Leaf
- Internal Node
- Height
- Depth
- Size

---

## Compilation

```bash
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 *.c -o binary_tree
```

---

## Betty

Le projet respecte :

- Betty Style

- Betty Documentation
