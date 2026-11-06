extern int fn_82F33B70(unsigned short a, int b, void *c);
extern void *fn_82E4FE08(int n);
extern void *memset(void *p, int v, unsigned int n);

typedef struct {
    unsigned short a;
    int b;
    int c;
    void *buf;
    char data[1];
} Blk_82F33DD0;

int fn_82F33DD0(Blk_82F33DD0 *p)
{
    int n;
    if (p == 0)
        return 0x80070057;
    n = fn_82F33B70(p->a, p->b, p->data);
    if (n == -1)
        return 0x8007000e;
    p->buf = fn_82E4FE08(n);
    if (p->buf == 0)
        return 0x8007000e;
    memset(p->buf, 0, n);
    return 0;
}
