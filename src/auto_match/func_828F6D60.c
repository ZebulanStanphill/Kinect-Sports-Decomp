typedef struct Node_828F6D60 {
    int key;
    int a;
    int b;
    int c;
    int d;
} Node_828F6D60;

extern void *fn_8265C940(int size, int flags);
extern int fn_828F6C70(void *self, Node_828F6D60 *n);

static __forceinline Node_828F6D60 *Node_ctor_828F6D60(Node_828F6D60 *n, int key)
{
    if (n != 0) {
        n->key = key;
        n->a = 0;
        n->b = 0;
        n->c = 0;
        n->d = 0;
        return n;
    }
    return 0;
}

int fn_828F6D60(void *self, int key)
{
    Node_828F6D60 *n;

    n = Node_ctor_828F6D60((Node_828F6D60 *)fn_8265C940(0x14, 0x24810000), key);
    if (n == 0) {
        return 0x8007000E;
    }
    return fn_828F6C70(self, n);
}
