extern void fn_82FA5190(void *);

typedef struct Pool_8300BBC0 {
    int *head;
    int *tail;
    int *freelist;
    int cap;
    int pad10;
    int count;
    int *base;
    void *owner;
} Pool_8300BBC0;

static unsigned char oop(Pool_8300BBC0 *p, int *x){ int *e = (int *)((char *)p->base + p->cap * 24); return x < p->base || x >= e; }
void fn_8300BBC0(Pool_8300BBC0 *p, int *n, int *prev)
{
    if (n == (int *)p->head) { p->head = (int *)*n; } else { *prev = *n; }
    if (n == p->tail) { p->tail = prev; }
    if (oop(p, n)) { fn_82FA5190(p->owner); } else { *n = (int)p->freelist; p->freelist = n; }
    p->count = p->count - 1;
}
