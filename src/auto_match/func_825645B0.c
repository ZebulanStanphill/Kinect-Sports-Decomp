extern int fn_8234D330();

typedef struct Node {
    char pad[0x2a];
    unsigned short child;   /* 0x2a */
    unsigned short next;    /* 0x2c */
    char name[6];           /* 0x2e */
} Node;

typedef struct IfaceVtbl {
    void *f0;
    void (*GetNodes)(void *self, Node **out);
} IfaceVtbl;
typedef struct Iface {
    IfaceVtbl *vtbl;
} Iface;

void fn_825645B0(int ctx, Iface *src, Node *n, int siblings)
{
    Node *nodes;

    src->vtbl->GetNodes(src, &nodes);
    while (n != 0) {
        fn_8234D330(ctx, n->name);
        if (n->child != 0xffff) {
            fn_825645B0(ctx, src, &nodes[n->child], 1);
        }
        if (siblings != 0 && n->next != 0xffff) {
            n = &nodes[n->next];
        } else {
            n = 0;
        }
    }
}
