// std::set::insert(hint, node) on the global set lbl_83297004.
// LTCG dropped the constant tree pointer (see fn_82595690/fn_82595788).

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
Pair_82595690 fn_82595690(Node_82595690 *node);
Node_82595690 **fn_82829C48(Node_82595690 **it);
Node_82595690 **fn_82381BC0(Node_82595690 **it);
}

extern "C" Iter_82595690 fn_82595528(Node_82595690 *where, Node_82595690 *nn)
{
    Tree_82595690 *t = &lbl_83297004;
    Node_82595690 *next = 0;
    Node_82595690 *head;

    if (t->size == 0)
        return fn_82595788(true, t->head, nn);
    head = t->head;
    if (where == head->left) {
        if (nn->key < where->key)
            return fn_82595788(true, where, nn);
    } else if (where == head) {
        Node_82595690 *r = head->right;
        if (r->key < nn->key)
            return fn_82595788(false, r, nn);
    } else {
        unsigned int vk = nn->key;
        unsigned int wk = where->key;
        if (vk < wk && (next = where, (*fn_82829C48(&next))->key < vk)) {
            if (next->right->isnil)
                return fn_82595788(false, next, nn);
            return fn_82595788(true, where, nn);
        } else if (wk < vk &&
                   ((next = where, *fn_82381BC0(&next) == head) || vk < next->key)) {
            if (where->right->isnil)
                return fn_82595788(false, where, nn);
            return fn_82595788(true, next, nn);
        }
    }
    return fn_82595690(nn).first;
}
