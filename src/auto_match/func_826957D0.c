typedef struct { int v[4]; } Elem_826957D0;

typedef struct {
    int f0;
    int f4;
    Elem_826957D0 *cur;
    Elem_826957D0 *blockBegin;
    int f10;
    int f14;
    Elem_826957D0 **blocks;
    unsigned int blockCount;
} Pool_826957D0;

typedef struct {
    char pad0[0x18];
    Pool_826957D0 *pool;
    int f1c;
    unsigned int total;
} Owner_826957D0;

Elem_826957D0 *fn_826957D0(Owner_826957D0 *self, unsigned int back)
{
    Pool_826957D0 *pool = self->pool;
    unsigned int count = (pool->cur - pool->blockBegin) + (pool->blockCount - 1) * 32;
    unsigned int index = self->total - back;
    Elem_826957D0 *result = 0;
    if (index <= count) {
        result = pool->blocks[index >> 5] + (index & 31);
    }
    return result;
}
