typedef struct Pool_825BCD10 {
    char *data;
    int elemSize;
    int count;
    int freeCount;
    char **freeList;
} Pool_825BCD10;

extern void *fn_82522D98(unsigned int size);

Pool_825BCD10 *fn_825BCD10(int count, int elemSize)
{
    int i;
    Pool_825BCD10 *pool = (Pool_825BCD10 *)fn_82522D98(sizeof(Pool_825BCD10));

    pool->count = count;
    pool->elemSize = elemSize;
    pool->data = (char *)fn_82522D98(count * elemSize);
    pool->freeCount = pool->count;
    pool->freeList = (char **)fn_82522D98(pool->count * 4);
    for (i = 0; i < pool->count; i++) {
        pool->freeList[i] = pool->data + pool->elemSize * i;
    }
    return pool;
}
