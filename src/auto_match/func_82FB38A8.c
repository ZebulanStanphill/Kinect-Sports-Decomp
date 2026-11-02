typedef struct Pool_82FB38A8 {
    int *head;
    int *tail;
    int *chunks;
    unsigned cap;
    unsigned count;
    int pad14;
    int *base;
    int owner;
} Pool_82FB38A8;

extern int fn_82FA5190(int, void *);
extern void fn_82FB36E8(Pool_82FB38A8 *, int *, int *);

static int notNull(int *p) { if (p) return 1; return 0; }
static unsigned char oop(Pool_82FB38A8 *p, int *x) { int *e = (int *)((char *)p->base + p->cap * 12); return x < p->base || x >= e; }

int fn_82FB38A8(Pool_82FB38A8 *p)
{
    if (p->count > 0) {
        int *c;
        unsigned i;
        while (notNull(p->head)) {
            fn_82FB36E8(p, p->head, 0);
        }
        c = p->chunks;
        while (c != 0) {
            int *next = (int *)*c;
            if (oop(p, c)) {
                fn_82FA5190(p->owner, c);
            }
            c = next;
        }
        if (p->base != 0) {
            for (i = 0; i < p->cap; i++) ;
            fn_82FA5190(p->owner, p->base);
        }
        p->cap = 0;
        p->count = 0;
        p->head = 0;
        p->tail = 0;
    }
    return 1;
}
