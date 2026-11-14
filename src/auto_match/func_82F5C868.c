/* vector<pair-of-ints>::erase(first, last): copy the tail down, destroy the rest (trivial). */
typedef struct Pair_82F5C868 {
    int first;
    int second;
} Pair_82F5C868;

typedef struct Vector_82F5C868 {
    Pair_82F5C868 *begin;   /* 0x0 */
    Pair_82F5C868 *end;     /* 0x4 */
} Vector_82F5C868;

static __forceinline Pair_82F5C868 *Copy(Pair_82F5C868 *src, Pair_82F5C868 *end, Pair_82F5C868 *dst)
{
    for (; src != end; ++dst, ++src)
        *dst = *src;
    return dst;
}
static __forceinline void Destroy(Pair_82F5C868 *p, Pair_82F5C868 *end)
{
    for (; p != end; ++p)
        ;
}
Pair_82F5C868 **fn_82F5C868(Pair_82F5C868 **result, Vector_82F5C868 *v, Pair_82F5C868 *first, Pair_82F5C868 *last)
{
    Pair_82F5C868 *p;

    *result = first;
    if (first != last) {
        p = Copy(last, v->end, first);
        Destroy(p, v->end);
        v->end = p;
    }
    return result;
}
