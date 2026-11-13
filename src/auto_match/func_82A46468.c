typedef struct Node_82A46468 {
    int data;
    struct Node_82A46468 *next;
} Node_82A46468;

typedef struct Pool_82A46468 {
    Node_82A46468 *freeList;
    char pad4[0x14];
    Node_82A46468 *used;
    int usedCount;
    int usedTail;
    char pad24[4];
} Pool_82A46468;

typedef struct Obj_82A46468 {
    char pad0[0x14c];
    int f14c;
    char pad150[0x170 - 0x150];
    Pool_82A46468 a;
    Pool_82A46468 b;
} Obj_82A46468;

static __forceinline void Pool_Reset(Pool_82A46468 *p)
{
    while (p->used != 0) {
        Node_82A46468 *n = p->used;
        Node_82A46468 *next = n->next;
        n->next = p->freeList;
        p->freeList = n;
        p->used = next;
    }
    p->usedTail = 0;
    p->usedCount = 0;
}

void fn_82A46468(Obj_82A46468 *o)
{
    Pool_Reset(&o->a);
    Pool_Reset(&o->b);
    o->f14c = 0;
}
