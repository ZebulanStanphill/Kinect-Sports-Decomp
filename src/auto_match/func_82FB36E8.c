extern void fn_82FA5190(void *);

typedef struct Pool_82FB36E8 {
    int *head;
    int *tail;
    int *freelist;
    int cap;
    int pad10;
    int count;
    int *base;
    void *owner;
} Pool_82FB36E8;

static unsigned char oop(Pool_82FB36E8 *p, int *x){ int *e = (int *)((char *)p->base + p->cap * 12); return x < p->base || x >= e; }
void fn_82FB36E8(Pool_82FB36E8 *p, int *n, int *prev)
{
    if (n == (int *)p->head) { p->head = (int *)*n; } else { *prev = *n; }
    if (n == p->tail) { p->tail = prev; }
    if (oop(p, n)) { fn_82FA5190(p->owner); } else { *n = (int)p->freelist; p->freelist = n; }
    p->count = p->count - 1;
}
