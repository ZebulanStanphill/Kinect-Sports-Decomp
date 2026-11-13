typedef struct Vec_828A3248 {
    void **first;
    void **last;
} Vec_828A3248;
extern void *memmove(void *dst, const void *src, unsigned int size);

static __forceinline void **moveRange(void **first, void **last, void **dest)
{
    int n = last - first;
    memmove(dest, first, n * sizeof(void *));
    return dest + n;
}

static __forceinline void eraseRange(Vec_828A3248 *v, void **first, void **last)
{
    if (first != last) {
        v->last = moveRange(last, v->last, first);
    }
}

void fn_828A3248(Vec_828A3248 *v)
{
    eraseRange(v, v->first, v->last);
}
