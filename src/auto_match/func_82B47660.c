typedef struct Block_82B47660 {
    int unk0;
    unsigned int next;    /* 0x04, low bit set: no next block */
    unsigned int count;   /* 0x08 */
} Block_82B47660;

typedef struct Iter_82B47660 {
    int unk0;
    unsigned int block;   /* 0x04 */
    unsigned int index;   /* 0x08 */
} Iter_82B47660;

void fn_82B47660(Iter_82B47660 *it, unsigned int n)
{
    while (n != 0) {
        Block_82B47660 *b = (Block_82B47660 *)it->block;
        unsigned int left = b->count - it->index;
        unsigned int step = n < left ? n : left;
        it->index += step;
        if (it->index == b->count) {
            unsigned int next = ((Block_82B47660 *)(it->block & ~1u))->next;
            it->index = 0;
            it->block = (next & 1) ? 0 : next;
        }
        n -= step;
    }
}
