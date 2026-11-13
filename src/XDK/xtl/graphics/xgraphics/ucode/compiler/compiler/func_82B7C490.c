typedef struct Owner Owner;
typedef struct {
    Owner *owner;
    int f4;
    int f8;
    int fc;
    int f10;
    int f14;
    int f18;
    int f1c;
    int f20;
    int f24;
    unsigned char f28;
} Node;

struct Owner {
    char pad0[0x5a0];
    void *(*alloc)(void *ctx, unsigned int size);
    void *allocCtx;
    Node *slots[1];
};

static Node *Node_Init(Node *n, Owner *owner)
{
    n->owner = owner;
    n->f4 = 0;
    n->f8 = 0;
    n->fc = 0;
    n->f10 = 0;
    n->f14 = 0;
    n->f18 = 0;
    n->f1c = 0;
    n->f20 = 0;
    n->f24 = 0;
    n->f28 = 0;
    return n;
}

void fn_82B7C490(Owner *o, int idx)
{
    Node *n;

    if (o->slots[idx] == 0) {
        n = (Node *)o->alloc(o->allocCtx, sizeof(Node));
        o->slots[idx] = n ? Node_Init(n, o) : 0;
    }
}
