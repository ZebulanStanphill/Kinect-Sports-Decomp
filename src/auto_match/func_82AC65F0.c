typedef struct Node_82AC65F0 {
    unsigned int w;                  /* 0x00 */
    struct Node_82AC65F0 *next;      /* 0x04 */
} Node_82AC65F0;

typedef struct Page_82AC65F0 {
    struct { char pad[0x94]; void *ctx; } *owner;
} Page_82AC65F0;

typedef struct List_82AC65F0 {
    Node_82AC65F0 *head;             /* 0x00 */
} List_82AC65F0;

__declspec(noreturn) extern void fn_82AA66A8(void *, int, ...);

static int notNull(Node_82AC65F0 *p)
{
    if (p) return 1;
    return 0;
}

Node_82AC65F0 *fn_82AC65F0(List_82AC65F0 *l)
{
    Node_82AC65F0 *p;
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
        if (ok && (w & 0x1ffe000) == 0xe000) {
            break;
        }
        p = p->next;
    }
    if (p == 0)
        fn_82AA66A8(((Page_82AC65F0 *)((unsigned int)l & ~0xfff))->owner->ctx, 0x12c0);
    return p;
}
