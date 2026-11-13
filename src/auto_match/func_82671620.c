typedef struct Pair_82671620 {
    int first;
    int second;
} Pair_82671620;

typedef struct Vector_82671620 {
    Pair_82671620 *begin;
    Pair_82671620 *end;
    Pair_82671620 *capacity;
} Vector_82671620;

static __forceinline void destroyRange(Pair_82671620 *first, Pair_82671620 *last)
{
    for (; first != last; first++) {
    }
}

Pair_82671620 **fn_82671620(Pair_82671620 **out, Vector_82671620 *vec, Pair_82671620 *where)
{
    Pair_82671620 *src;
    Pair_82671620 *newEnd;
    Pair_82671620 *last = vec->end;
    Pair_82671620 *dst = where;
    for (src = where + 1; src != last; src++, dst++) {
        dst->first = src->first;
        dst->second = src->second;
    }
    newEnd = vec->end - 1;
    destroyRange(newEnd, vec->end);
    vec->end = newEnd;
    *out = where;
    return out;
}
