// Kinect Sports retail 4D5308C9, function 0x828A6E70 (172 bytes).
// map<Key, int>::operator[] (fn_828DFCD0 shape) where Key is {int id; optional<int> opt;}:
// lower_bound (fn_828E3AF0), compare (fn_8289FA30), else build the pair {key, 0},
// allocate the node (fn_828A6468) and insert it (fn_828A6C40). Returns &value.

typedef struct {
    unsigned char initialized;
    int value;
} Optional_828A6E70;

typedef struct {
    int id;
    Optional_828A6E70 opt;
} Key_828A6E70;

typedef struct {
    Key_828A6E70 first;
    int second;
} Pair_828A6E70;

typedef struct Node_828A6E70 {
    struct Node_828A6E70 *left;
    struct Node_828A6E70 *parent;
    struct Node_828A6E70 *right;
    Pair_828A6E70 kv;
} Node_828A6E70;

typedef struct {
    int f0;
    Node_828A6E70 *head;
    int size;
} Map_828A6E70;

typedef struct {
    Node_828A6E70 *node;
} Iter_828A6E70;

extern Node_828A6E70 *fn_828E3AF0(Map_828A6E70 *m, const Key_828A6E70 *key);
extern unsigned char fn_8289FA30(const Key_828A6E70 *a, const Key_828A6E70 *b);
extern Node_828A6E70 *fn_828A6468(Map_828A6E70 *m, const Pair_828A6E70 *val);
extern void fn_828A6C40(Iter_828A6E70 *out, Map_828A6E70 *m, Node_828A6E70 *where, Node_828A6E70 *nn);

int *fn_828A6E70(Map_828A6E70 *m, const Key_828A6E70 *key)
{
    Node_828A6E70 *n;
    Iter_828A6E70 it;
    Pair_828A6E70 p;

    n = fn_828E3AF0(m, key);
    if (n == m->head || fn_8289FA30(key, &n->kv.first)) {
        p.first.id = key->id;
        p.first.opt.initialized = 0;
        if (key->opt.initialized) {
            p.first.opt.value = key->opt.value;
            p.first.opt.initialized = 1;
        }
        p.second = 0;
        fn_828A6C40(&it, m, n, fn_828A6468(m, &p));
        n = it.node;
    }
    return &n->kv.second;
}
