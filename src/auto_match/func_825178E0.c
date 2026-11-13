typedef struct Half_825178E0 {
    int v[2];
} Half_825178E0;

typedef struct Pair_825178E0 {
    Half_825178E0 first;
    Half_825178E0 second;
} Pair_825178E0;

extern void fn_823F2E20(Half_825178E0 *dst, const Half_825178E0 *src);

Pair_825178E0 *fn_825178E0(const Pair_825178E0 *first, const Pair_825178E0 *last, Pair_825178E0 *dest)
{
    for (; first != last; first++, dest++) {
        fn_823F2E20(&dest->first, &first->first);
        fn_823F2E20(&dest->second, &first->second);
    }
    return dest;
}
