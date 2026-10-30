typedef struct {
    unsigned int prev_foot;
    unsigned int head;
} Chunk_82FA6028;

extern void *fn_82FA5F18(void *, void *);
extern void fn_82FA5D50(void *, void *);

void fn_82FA6028(void *ms, Chunk_82FA6028 *p, unsigned int n)
{
    unsigned int sz = p->head & 0xfffffffc;
    if (sz >= n + 0x10) {
        Chunk_82FA6028 *q = (Chunk_82FA6028 *)((char *)p + n + 4);
        Chunk_82FA6028 *nx;
        q->head = (sz - n - 4) | (q->head & 3);
        p->head = (p->head & 3) | n;
        nx = (Chunk_82FA6028 *)((char *)q + (q->head & 0xfffffffc) + 4);
        nx->prev_foot = (unsigned int)q;
        nx->head = nx->head | 2;
        q->head = (q->head & 0xfffffffc) | 1;
        fn_82FA5D50(ms, fn_82FA5F18(ms, q));
    }
}
