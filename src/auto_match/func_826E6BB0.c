extern void *fn_8267BED0(void *pool, unsigned int size, int flags);

void *fn_826E6BB0(void *pool, unsigned int count, unsigned int size)
{
    return fn_8267BED0(pool, count * size, 0);
}
