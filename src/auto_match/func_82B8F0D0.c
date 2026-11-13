typedef struct Node_82B8F0D0 {
    unsigned int w;                  /* 0x00 */
    struct Node_82B8F0D0 *next;      /* 0x04 */
} Node_82B8F0D0;

typedef struct List_82B8F0D0 {
    Node_82B8F0D0 *head;             /* 0x00 */
    int unk04;                       /* 0x04 */
    unsigned int flags;              /* 0x08 */
} List_82B8F0D0;

static int notNull(Node_82B8F0D0 *p)
{
    if (p) return 1;
    return 0;
}

void fn_82B8F0D0(List_82B8F0D0 *l)
{
    Node_82B8F0D0 *p;
    unsigned char ok;
    unsigned int w;
    p = l->head;
    while (notNull(p)) {
        w = p->w;
        if ((w & 0x40000000) == 0 && (w & 0xe000000) == 0) {
            ok = 1;
        } else {
            ok = 0;
        }
        if (ok && ((w >> 13) & 0xfff) != 0) {
            ok = 1;
        } else {
            ok = 0;
        }
        if (ok) {
            return;
        }
        p = p->next;
    }
    l->flags &= ~0x2000000;
}
