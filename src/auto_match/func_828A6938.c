/* map<Key, int>::_Linsert(node, leftish) (VC10 <xtree>), Key = {int id; optional<int> opt;} as in
   func_828A6E70. operator< is inlined in the search loop; the final check calls it out of line
   (fn_8289FA30). _Insert is fn_828A6260, iterator operator-- is fn_8289DD28. */
typedef struct {
    unsigned char initialized;
    int value;
} Optional_828A6938;

typedef struct {
    int id;
    Optional_828A6938 opt;
} Key_828A6938;

typedef struct {
    Key_828A6938 first;
    int second;
} Pair_828A6938;

typedef struct Node_828A6938 {
    struct Node_828A6938 *left;
    struct Node_828A6938 *parent;
    struct Node_828A6938 *right;
    Pair_828A6938 kv;
    char color;
    char isnil;
} Node_828A6938;

typedef struct {
    int f0;
    Node_828A6938 *head;
    unsigned int size;
} Tree_828A6938;

typedef struct {
    Node_828A6938 *node;
} Iter_828A6938;

typedef struct {
    Iter_828A6938 first;
    unsigned char second;
} Pairib_828A6938;

extern Iter_828A6938 *fn_828A6260(Iter_828A6938 *out, Tree_828A6938 *tree, unsigned char addleft,
    Node_828A6938 *where, Node_828A6938 *node);
extern void fn_8289DD28(Iter_828A6938 *it);
extern unsigned char fn_8289FA30(const Key_828A6938 *a, const Key_828A6938 *b);
extern void fn_8265CA20(void *p);

static __forceinline unsigned char OptLess(const Optional_828A6938 *x, const Optional_828A6938 *y)
{
    return !y->initialized ? 0 : (!x->initialized ? 1 : x->value < y->value);
}

static __forceinline unsigned char KeyLess(const Key_828A6938 *a, const Key_828A6938 *b)
{
    return a->id < b->id || (!(b->id < a->id) && OptLess(&a->opt, &b->opt));
}

static __forceinline Node_828A6938 *Root(Tree_828A6938 *t) { return t->head->parent; }

Pairib_828A6938 *fn_828A6938(Pairib_828A6938 *out, Tree_828A6938 *tree, Node_828A6938 *node, unsigned char leftish)
{
    const Key_828A6938 *val = &node->kv.first;
    Node_828A6938 *parent = tree->head;
    Node_828A6938 *cur = Root(tree);
    unsigned char left = 1;
    Node_828A6938 *prev;
    Iter_828A6938 where;

    while (!cur->isnil) {
        parent = cur;
        if (leftish)
            left = !KeyLess(&cur->kv.first, val);
        else
            left = KeyLess(val, &cur->kv.first);
        cur = left ? cur->left : cur->right;
    }

    prev = parent;
    where.node = parent;
    if (left) {
        if (parent == tree->head->left) {
            out->first = *fn_828A6260(&where, tree, 1, parent, node);
            out->second = 1;
            return out;
        }
        fn_8289DD28(&where);
        prev = where.node;
    }

    if (fn_8289FA30(&prev->kv.first, val)) {
        out->first = *fn_828A6260(&where, tree, left, parent, node);
        out->second = 1;
        return out;
    }
    if (node->kv.first.opt.initialized)
        node->kv.first.opt.initialized = 0;
    fn_8265CA20(node);
    out->first.node = prev;
    out->second = 0;
    return out;
}
