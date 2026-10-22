typedef unsigned int uint;
extern void *fn_8265C940(uint size, int flags);

typedef struct Block {
    struct Block *next;
} Block;

typedef struct Pool {
    Block *head;
    int align;
    uint used;
    uint limit;
    uint cap;
    uint blockSize;
} Pool;

void *fn_829301D0(Pool *p, int size, int align)
{
    uint end = ((p->used + align - 1) & ~(align - 1U)) + size;
    uint n;
    Block *blk;
    int a;

    if (end > p->cap) {
        end = ((align + 3U) & ~(align - 1U)) + size;
        for (n = p->blockSize; end > n; n <<= 1) {
        }
        blk = (Block *)fn_8265C940(n, 0x24810000);
        if (blk == 0) {
            return 0;
        }
        a = p->align;
        p->cap = n;
        blk->next = p->head;
        p->head = blk;
        p->limit = (a + end - 1) & ~(a - 1U);
    } else if (end > p->limit) {
        p->limit = (p->align + end - 1) & ~(p->align - 1U);
    }
    p->used = end;
    return (char *)p->head - size + end;
}
