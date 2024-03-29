#ifndef BINARY_TREES_H
#define BINARY_TREES_H

/* INCLUDED LIBRARIES */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

/* STRUCTS AND DEFINITIONS */
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
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

/* FUNCTION PROTOTYPES */
/* provided print function prototypes */
void binary_tree_print(const binary_tree_t *tree);

/* function to insert new node (0) */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
/* function to insert new node as left child (1) */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
/* function to insert new node as right child (2) */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
/* function to remove node (3) */
void binary_tree_delete(binary_tree_t *tree);
/* function to determine if the given node is a leaf (4) */
int binary_tree_is_leaf(const binary_tree_t *node);
/* function to determine if the node is the root (5) */
int binary_tree_is_root(const binary_tree_t *node);
/* function to traverse tree using pre-order; run function at each node (6)*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));
/* function to traverse tree using in-order; run function at each node (7)*/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));
/* function to traverse tree using post-order; run function at each node (8)*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));
/* function to find tree's height, starting from given node (9)*/
size_t binary_tree_height(const binary_tree_t *tree);
size_t binary_tree_depth(const binary_tree_t *tree);
size_t binary_tree_size(const binary_tree_t *tree);

#endif
