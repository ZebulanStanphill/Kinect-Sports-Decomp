extern void fn_82CE4040(void *);
extern void fn_82CE4118(void *);

typedef struct Node {
    char pad0[0x18];
    void *res;
    char pad1[0x28 - 0x1c];
    struct Node **children;
    int count;
} Node;

static void setres(void **p, void *to)
{
    if (*p != to) {
        if (to != 0) {
            fn_82CE4040(to);
        }
        if (*p != 0) {
            fn_82CE4118(*p);
        }
        *p = to;
    }
}

void fn_82E05FE0(Node *n, void *from, void *to)
{
    int i;

    if (n->res == from) {
        setres(&n->res, to);
    }
    for (i = 0; i < n->count; i++) {
        fn_82E05FE0(n->children[i], from, to);
    }
}
