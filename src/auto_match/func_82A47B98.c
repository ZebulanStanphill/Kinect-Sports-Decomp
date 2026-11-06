typedef struct Node_82A47B98 {
    struct Node_82A47B98 *chunk;
    struct Node_82A47B98 *next;
    unsigned int pad[2];
} Node_82A47B98;

typedef struct List_82A47B98 {
    Node_82A47B98 *free;
    Node_82A47B98 *chunks;
    char pad[0x18];
    unsigned int lim;
    unsigned int cur;
} List_82A47B98;

extern int KeGetCurrentProcessType(void);
extern void *fn_82A3FF60(void *, int, int, int);
extern int fn_82A1F2B8(const char *);
extern void __debugbreak(void);
extern char lbl_83219D50[];

Node_82A47B98 *fn_82A47B98(List_82A47B98 *l)
{
    int low;
    Node_82A47B98 *c;
    Node_82A47B98 *e;
    Node_82A47B98 *r;

    low = 0;
    if (l->cur < l->lim && KeGetCurrentProcessType() != 2) {
        low = 1;
    }
    if (l->free == 0 || low != 0) {
        if (l->cur + 1 <= 0xffffffff) {
            c = (Node_82A47B98 *)fn_82A3FF60(lbl_83219D50, 0x10, 0x20970000, 0);
            if (c != 0) {
                e = (Node_82A47B98 *)((char *)c + 4);
                e->next = l->free;
                l->free = e;
                c->chunk = l->chunks;
                l->chunks = c;
                l->cur = l->cur + 1;
            }
        } else {
            fn_82A1F2B8("SimpList: non-growable list ran out of room for new elements");
            __debugbreak();
        }
    }
    r = l->free;
    if (r != 0) {
        l->free = r->next;
    } else {
        r = 0;
    }
    return r;
}
