typedef struct { int pad[3]; int fc; void *f10; } B_82B488D0;
typedef struct { unsigned prev, next; } Link_82B488D0;
extern B_82B488D0 *fn_82ACA920();
extern int fn_82AD1978();
extern unsigned fn_82B841E8();

unsigned fn_82B488D0(int p1, B_82B488D0 *p2, B_82B488D0 *p3)
{
    unsigned r;
    B_82B488D0 *a, *b;
    int base;
    unsigned *q;
    Link_82B488D0 *n;
    r = fn_82B841E8(p1, *(int *)(p1 + 0x234), 0, 0x1e, 2, 4);
    a = p2->f10 != 0 ? fn_82ACA920(p1, p2, p2->fc) : p2;
    *(int *)(r + 0x2c) = fn_82AD1978(r, a);
    b = p3->f10 != 0 ? fn_82ACA920(p1, p3, p3->fc) : p3;
    *(int *)(r + 0x30) = fn_82AD1978(r, b);
    base = *(int *)(p1 + 0x234);
    q = (unsigned *)(base + 0x18);
    n = (Link_82B488D0 *)((r & 0xfffffffe) + 0x24);
    n->prev = *q;
    *(unsigned *)(*q & 0xfffffffe) = (unsigned)n - 0x24;
    n->next = ((unsigned)q - 0x24) | 1;
    *q = (unsigned)&n->next;
    return r;
}
