# Binary Trees
Implementations of simple and complex binary trees. This encompasses AVL trees, Max heaps and Binary Search Trees. The code structures used are:

## Basic Binary Tree

```C
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
```

## Binary Search Tree

```C
typedef struct binary_tree_s bst_t;
```

## AVL Tree

```C
typedef struct binary_tree_s avl_t;
```

## Max Binary Heap

```C
typedef struct binary_tree_s heap_t;
```
