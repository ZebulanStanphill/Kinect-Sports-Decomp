typedef struct Pool_826A76D0 {
    int f0;
    int f4;
    int refs;
} Pool_826A76D0;

typedef struct Ref_826A76D0 {
    Pool_826A76D0 *pool;
} Ref_826A76D0;

extern int fn_826A74A0(unsigned int *size);

Ref_826A76D0 *fn_826A76D0(Ref_826A76D0 *out, unsigned int *size, Pool_826A76D0 ***table)
{
    int index = fn_826A74A0(size);
    Pool_826A76D0 *pool = (*table)[index + 2];
    int refs = pool->refs;
    out->pool = pool;
    pool->refs = refs + 1;
    return out;
}
