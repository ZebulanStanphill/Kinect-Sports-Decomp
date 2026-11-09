// std::set::_Linsert (insert unique, node already built) on the global set lbl_83297004.
// LTCG dropped the constant tree pointer from this function and from its _Insert
// (fn_82595788), which therefore take only the hidden result, addleft, wherenode and node.
// Returns pair<iterator,bool> through the hidden result pointer.

struct Node_82595690 {
    Node_82595690 *left;    /* 0x00 */
    Node_82595690 *parent;  /* 0x04 */
    Node_82595690 *right;   /* 0x08 */
    unsigned int key;       /* 0x0C */
    int value;              /* 0x10 */
    char color;             /* 0x14 */
    char isnil;             /* 0x15 */
};

struct Iter_82595690 {
    Iter_82595690(Node_82595690 *p) : ptr(p) {}
    Node_82595690 *ptr;
};

struct Tree_82595690 {
    int pad0;
    Node_82595690 *head;
    unsigned int size;
    int pad0c;
};

struct Pair_82595690 {
    Iter_82595690 first;
    bool second;
    Pair_82595690(const Iter_82595690 &a, const bool &b) : first(a), second(b) {}
};

extern "C" {
extern Tree_82595690 lbl_83297004;
Iter_82595690 fn_82595788(bool addleft, Node_82595690 *wherenode, Node_82595690 *node);
/* folded _Tree_const_iterator::operator-- (tree1 recipe) */
__declspec(noalias) void fn_82829C48(Iter_82595690 *it);
void fn_8265CA20(void *p);
}

extern "C" Pair_82595690 fn_82595690(Node_82595690 *node)
{
    Tree_82595690 *t = &lbl_83297004;
    Node_82595690 *trynode = t->head->parent;
    Node_82595690 *wherenode = t->head;
    bool addleft = true;

    while (!trynode->isnil) {
        wherenode = trynode;
        addleft = node->key < trynode->key;
        trynode = addleft ? trynode->left : trynode->right;
    }

    Iter_82595690 where(wherenode);
    if (!addleft)
        ;
    else if (where.ptr == t->head->left)
        return Pair_82595690(fn_82595788(true, wherenode, node), true);
    else
        fn_82829C48(&where);

    if (where.ptr->key < node->key)
        return Pair_82595690(fn_82595788(addleft, wherenode, node), true);

    fn_8265CA20(node);
    return Pair_82595690(where, false);
}
