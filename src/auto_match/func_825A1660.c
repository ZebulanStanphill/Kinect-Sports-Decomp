typedef struct Block_825A1660 {
    char data[0x40];
} Block_825A1660;

typedef struct Entry_825A1660 {
    int f0;
    Block_825A1660 *first;
    Block_825A1660 *last;
    int kind;
    char pad0[0x70 - 0x10];
    int f70;
    char pad1[0x88 - 0x74];
    unsigned int f88;
    int f8c;
} Entry_825A1660;

typedef struct Pool_825A1660 {
    Entry_825A1660 entries[0x2000];
    Block_825A1660 blocks[0x2000];
    int numEntries;
    int numBlocks;
} Pool_825A1660;

extern void fn_82A1EFC0(void *dst, int value, unsigned int size);

Entry_825A1660 *fn_825A1660(Pool_825A1660 *pool)
{
    Entry_825A1660 *e = &pool->entries[pool->numEntries++];
    Block_825A1660 *b;
    fn_82A1EFC0(e, 0, sizeof(Entry_825A1660));
    b = &pool->blocks[pool->numBlocks++];
    e->f70 = -1;
    e->kind = 2;
    e->first = b;
    e->last = b;
    e->f88 = 0xffffffff;
    return e;
}
