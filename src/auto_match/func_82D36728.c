#include "xdk/vectorintrinsics.h"

typedef struct Aabb_82D36728 {
    __vector4 min; /* 0x00 */
    __vector4 max; /* 0x10 */
} Aabb_82D36728;

typedef struct Node_82D36728 {
    Aabb_82D36728 aabb;  /* 0x00 */
    unsigned int data;   /* 0x20 */
    unsigned int pad24;  /* 0x24 */
    unsigned int parent; /* 0x28 */
    unsigned int next;   /* 0x2c */
} Node_82D36728;

typedef struct Pool_82D36728 {
    Node_82D36728 *nodes; /* 0x00 */
    int capacity;         /* 0x04 */
    int f8;               /* 0x08 */
    int *freeList;        /* 0x0c */
    int freeCount;        /* 0x10 */
} Pool_82D36728;

typedef struct Tree_82D36728 {
    char pad0[0x10];
    Node_82D36728 *rootNode; /* 0x10 */
    unsigned int root;       /* 0x14 */
    int count;               /* 0x18 */
    Pool_82D36728 pool;      /* 0x1c */
} Tree_82D36728;

extern unsigned int fn_82D362D8(Pool_82D36728 *pool, Node_82D36728 **rootNode, unsigned int *root,
                                const Node_82D36728 *src);
extern Node_82D36728 *fn_82D363A0(Pool_82D36728 *pool, Node_82D36728 **rootNode, unsigned int *root,
                                  unsigned int *out);
extern void fn_82D33BC0(Tree_82D36728 *tree, unsigned int root, unsigned int leaf, unsigned int branch);

unsigned int fn_82D36728(Tree_82D36728 *self, const Aabb_82D36728 *aabb, unsigned int data)
{
    Node_82D36728 leaf;
    unsigned int index;
    unsigned int branch;

    leaf.aabb.min = aabb->min;
    leaf.aabb.max = aabb->max;
    leaf.data = data;
    leaf.parent = 0x80000000;
    index = fn_82D362D8(&self->pool, &self->rootNode, &self->root, &leaf);
    if (self->root == 0x7fffffff) {
        Node_82D36728 *node = &self->pool.nodes[index];

        node->next = 0x7fffffff;
        node->parent |= 0x7fffffff;
        self->rootNode = node;
        self->root = index;
    } else {
        fn_82D363A0(&self->pool, &self->rootNode, &self->root, &branch);
        fn_82D33BC0(self, self->root, index, branch);
    }
    self->count++;
    return index;
}
