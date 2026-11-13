typedef struct Node {
    unsigned int key;
    struct Node *lo;
    struct Node *hi;
    struct Node *eq;
} Node;

typedef struct Tree {
    Node *root;
    int pad[4];
    unsigned int count;
    unsigned int maxDepth;
} Tree;

extern Node *fn_82B9F410(Tree *t, unsigned int key, Node *parent);

Node *fn_82B9F578(Tree *t, unsigned int *keys, unsigned int n, unsigned int value)
{
    unsigned int oldCount = t->count;
    unsigned int i = 0;
    unsigned int depth = 1;
    Node *p;

    if (n == 0)
        return 0;
    p = t->root;
    if (p == 0) {
        p = fn_82B9F410(t, *keys, 0);
        t->root = p;
        t->count++;
    }
    while (i < n) {
        if (p->key == *keys) {
            i++;
            keys++;
            if (i == n)
                break;
            if (p->eq == 0) {
                p->eq = fn_82B9F410(t, *keys, p);
                t->count++;
            }
            p = p->eq;
            depth++;
        } else if (*keys < p->key) {
            if (p->lo == 0) {
                p->lo = fn_82B9F410(t, *keys, p);
                t->count++;
            }
            p = p->lo;
            depth++;
        } else {
            if (p->hi == 0) {
                p->hi = fn_82B9F410(t, *keys, p);
                t->count++;
            }
            p = p->hi;
            depth++;
        }
    }
    if (oldCount < t->count) {
        p->eq = fn_82B9F410(t, value, p);
        t->count++;
        depth++;
        if (depth > t->maxDepth)
            t->maxDepth = depth;
        return p->eq;
    }
    return 0;
}
