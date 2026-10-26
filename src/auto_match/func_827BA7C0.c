typedef struct { unsigned short a, b; } E;
typedef struct { unsigned int count; unsigned int nblocks; int pad; E **blocks; } Q;
extern void fn_827BA438(Q *, unsigned int);

void fn_827BA7C0(Q *q, E *v)
{
    unsigned int blk = q->count >> 6;
    if (blk >= q->nblocks)
        fn_827BA438(q, blk);
    q->blocks[blk][q->count & 0x3f] = *v;
    q->count++;
}
