typedef struct Node_82B17390 { unsigned int w; struct Node_82B17390 *n4; struct Node_82B17390 *next; int pad; unsigned int f10; } Node_82B17390;
typedef struct List_82B17390 { int pad; Node_82B17390 *head; } List_82B17390;

static int notNull(Node_82B17390 *p)
{
    if (p) return 1;
    return 0;
}

Node_82B17390 *fn_82B17390(List_82B17390 *l, int id)
{
    Node_82B17390 *p;
    unsigned char ok;
    unsigned int w;
    p = l->head;
    while (notNull(p)) {
        if (p->f10 != 0) {
            w = p->w;
            if ((w & 0x40000000) == 0 && (w & 0xe000000) == 0) {
                ok = 1;
            } else {
                ok = 0;
            }
            if (ok && ((w >> 13) & 0xfff) == id + 1U) {
                ok = 1;
            } else {
                ok = 0;
            }
            if (ok) {
                return p;
            }
        }
        p = p->next;
    }
    return 0;
}
