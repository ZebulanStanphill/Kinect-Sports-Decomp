typedef struct Node_82AD12C8 {
    unsigned int w;                  /* 0x00 */
    struct Node_82AD12C8 *next;      /* 0x04 */
    unsigned int pad8;
    unsigned int value;              /* 0x0c */
} Node_82AD12C8;

typedef struct Page_82AD12C8 {
    struct { char pad[0x94]; void *ctx; } *owner;
} Page_82AD12C8;

typedef struct List_82AD12C8 {
    Node_82AD12C8 *head;             /* 0x00 */
} List_82AD12C8;

__declspec(noreturn) extern void fn_82AA66A8(void *, int, ...);

static __forceinline int notNull(Node_82AD12C8 *p)
{
    if (p) return 1;
    return 0;
}

unsigned int fn_82AD12C8(List_82AD12C8 *l)
{
    Node_82AD12C8 *p;
    unsigned char ok;
    unsigned int w;

    p = l->head;
    while (notNull(p)) {
        w = p->w;
        if ((w & 0x40000000) != 0 && (w & 0xe000000) == 0) {
            ok = 1;
        } else {
            ok = 0;
        }
        if (ok && (w & 0x1ffe000) == 0) {
            return p->value;
        }
        p = p->next;
    }
    fn_82AA66A8(((Page_82AD12C8 *)((unsigned int)l & ~0xfff))->owner->ctx, 0x12c0);
}
