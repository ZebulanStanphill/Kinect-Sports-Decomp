typedef unsigned int size_t;
void *memmove(void *dst, const void *src, size_t n);

typedef struct Vec_8233EB88 {
    int *first;
    int *last;
    int *end;
} Vec_8233EB88;

static __forceinline int *Move_8233EB88(int *src, int *srcEnd, int *dst)
{
    int count = srcEnd - src;
    memmove(dst, src, count * sizeof(int));
    return dst + count;
}

int **fn_8233EB88(int **ret, Vec_8233EB88 *v, int *first, int *last)
{
    *ret = first;
    if (first != last) {
        int *p = Move_8233EB88(last, v->last, first);
        v->last = p;
    }
    return ret;
}
