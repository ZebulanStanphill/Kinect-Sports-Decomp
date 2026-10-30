typedef struct Item { char b[0x24]; } Item;
typedef struct Block {
    int x0;
    unsigned int next;
    unsigned int count;
    int xc;
    Item items[1];
} Block;
typedef struct It {
    int x0;
    unsigned int blk;
    unsigned int idx;
} It;

Item *fn_82AD3550(It *it)
{
    unsigned int i = it->idx;
    Block *b = (Block *)it->blk;
    Item *r;
    it->idx = i + 1;
    r = &b->items[i];
    if (i + 1 == b->count) {
        unsigned int n = ((Block *)(it->blk & ~1u))->next;
        it->idx = 0;
        it->blk = (n & 1) ? 0 : n;
    }
    return r;
}
