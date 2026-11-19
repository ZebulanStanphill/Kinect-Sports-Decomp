typedef struct BitPool_82A3F820 {
    char *base;            /* 0x00 */
    unsigned int stride;   /* 0x04 */
    unsigned int freeMask; /* 0x08 */
} BitPool_82A3F820;

void *fn_82A3F820(BitPool_82A3F820 *pool)
{
    unsigned int mask;
    unsigned int bit;
    unsigned int index;
    char *result;

    result = 0;
    if (pool->freeMask != 0) {
        mask = pool->freeMask;
        bit = mask & -mask;
        index = (bit & 0xffff0000) != 0;
        index = (index << 1) | ((bit & 0xff00ff00) != 0);
        index = (index << 1) | ((bit & 0xf0f0f0f0) != 0);
        index = (index << 1) | ((bit & 0xcccccccc) != 0);
        index = (index << 1) | ((bit & 0xaaaaaaaa) != 0);
        pool->freeMask ^= bit;
        result = pool->base + index * pool->stride;
    }
    return result;
}
