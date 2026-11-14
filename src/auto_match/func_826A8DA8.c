typedef struct { int v[4]; } Elem_826A8DA8;

typedef struct {
    Elem_826A8DA8 *cur;
    Elem_826A8DA8 *blockBegin;
    int f8;
    int fc;
    Elem_826A8DA8 **blocks;
    unsigned int blockCount;
} Pool_826A8DA8;

Elem_826A8DA8 *fn_826A8DA8(Pool_826A8DA8 *pool, unsigned int back)
{
    unsigned int count = (pool->cur - pool->blockBegin) + (pool->blockCount - 1) * 32;
    Elem_826A8DA8 *result = 0;
    unsigned int index;
    if (back <= count) {
        index = count - back;
        result = pool->blocks[index >> 5] + (index & 31);
    }
    return result;
}
