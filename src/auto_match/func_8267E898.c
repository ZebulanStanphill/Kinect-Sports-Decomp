typedef struct Pair_8267E898 {
    int a;
    int b;
} Pair_8267E898;

typedef struct Array_8267E898 {
    Pair_8267E898 *data;
    unsigned int size;
    unsigned int capacity;
} Array_8267E898;

extern void fn_8267E828(Array_8267E898 *array, Array_8267E898 *owner, unsigned int size);

static __forceinline void CopyConstruct_8267E898(Pair_8267E898 *dst, const Pair_8267E898 *src, unsigned int count)
{
    unsigned int i;
    for (i = 0; i < count; i++) {
        if (dst != 0) {
            dst->a = src->a;
            dst->b = src->b;
        }
        src++;
        dst++;
    }
}

void fn_8267E898(Array_8267E898 *array, const Pair_8267E898 *src, unsigned int count)
{
    unsigned int old;

    if (count != 0) {
        old = array->size;
        fn_8267E828(array, array, old + count);
        CopyConstruct_8267E898(array->data + old, src, count);
    }
}
