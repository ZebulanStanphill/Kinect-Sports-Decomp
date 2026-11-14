typedef struct Node_82AD1A40 {
    unsigned int w;
    struct Node_82AD1A40 *next;
    int pad8;
    void *owner;
} Node_82AD1A40;

typedef struct List_82AD1A40 {
    Node_82AD1A40 *head;
} List_82AD1A40;

extern Node_82AD1A40 *fn_82AD19D8(List_82AD1A40 *l, void *owner, void *arena);

static int notNull(Node_82AD1A40 *p)
{
    if (p) return 1;
    return 0;
}

Node_82AD1A40 *fn_82AD1A40(List_82AD1A40 *l, void *owner, void *arena)
{
    Node_82AD1A40 *p;
    unsigned char ok;
    unsigned int w;
    unsigned int bit;

    p = l->head;
    while (notNull(p)) {
        w = p->w;
        bit = (w >> 30) & 1;
        if (bit == 0 && (w & 0xe000000) == 0) {
            ok = 1;
        } else {
            ok = 0;
        }
        if (ok && p->owner == owner) {
            if (bit == 0 && (w & 0xe000000) == 0) {
                ok = 1;
            } else {
                ok = 0;
            }
            if (ok && (w & 0x1ffe000) != 0) {
                ok = 1;
            } else {
                ok = 0;
            }
            if (!ok) {
                return p;
            }
        }
        p = p->next;
    }
    return fn_82AD19D8(l, owner, arena);
}
