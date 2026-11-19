typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vminfp(__vector4 a, __vector4 b);
__vector4 __vmaxfp(__vector4 a, __vector4 b);

typedef struct TreeNode_82D33AF8 {
    __vector4 min;   /* 0x0 */
    __vector4 max;   /* 0x10 */
    int children[2]; /* 0x20 */
    int parent;      /* 0x28: top bit marks a leaf */
    int sibling;     /* 0x2c */
} TreeNode_82D33AF8;

typedef struct Tree_82D33AF8 {
    char pad0[0x1c];
    TreeNode_82D33AF8 *nodes; /* 0x1c */
} Tree_82D33AF8;

void fn_82D33AF8(Tree_82D33AF8 *tree, TreeNode_82D33AF8 *node, unsigned int parent, int sibling)
{
    TreeNode_82D33AF8 *left;
    TreeNode_82D33AF8 *right;

    node->sibling = sibling;
    if ((node->parent & (int)0x80000000) == 0) {
        left = &tree->nodes[node->children[0]];
        right = &tree->nodes[node->children[1]];
        left->parent = (left->parent & 0x80000000) | parent;
        right->parent = (right->parent & 0x80000000) | parent;
        fn_82D33AF8(tree, left, node->children[0], node->children[1]);
        fn_82D33AF8(tree, right, node->children[1], sibling);
        node->min = __vminfp(left->min, right->min);
        node->max = __vmaxfp(left->max, right->max);
    }
}
