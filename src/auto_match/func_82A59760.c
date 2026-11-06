typedef struct Node_82A59760 {
    struct Node_82A59760 *chunk;
    struct Node_82A59760 *next;
    unsigned pad;
} Node_82A59760;

typedef struct {
    Node_82A59760 *free;
    Node_82A59760 *chunks;
    char pad[0x18];
    unsigned lim;
    unsigned cur;
} List_82A59760;

extern int KeGetCurrentProcessType(void);
extern void *fn_82A3FF60(void *, int, int, int);
extern int fn_82A1F2B8(const char *);
extern void __debugbreak(void);
extern char lbl_83219D50[];

Node_82A59760 *fn_82A59760(List_82A59760 *l)
{
    int low;
    Node_82A59760 *c;
    Node_82A59760 *e;
    Node_82A59760 *r;

    low = 0;
    if (l->cur < l->lim && KeGetCurrentProcessType() != 2) {
        low = 1;
    }
    if (l->free == 0 || low != 0) {
        if (l->cur + 1 <= 0xffffffff) {
            c = (Node_82A59760 *)fn_82A3FF60(lbl_83219D50, 0x10, 0x20970006, 0);
            if (c != 0) {
                e = (Node_82A59760 *)((char *)c + 4);
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
