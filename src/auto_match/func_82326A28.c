typedef struct Str_82326A28 { unsigned char bytes[0x1c]; } Str_82326A28;
typedef struct Pair_82326A28 {
    Str_82326A28 first;
    Str_82326A28 second;
} Pair_82326A28;
typedef struct Vec_82326A28 {
    Pair_82326A28 *first;
    Pair_82326A28 *last;
} Vec_82326A28;
extern Str_82326A28 *fn_822402F8(Str_82326A28 *self, Str_82326A28 *right);
extern void fn_82230300(Str_82326A28 *self, unsigned char built, unsigned int newsize);

static __forceinline Pair_82326A28 *moveRange(Pair_82326A28 *first, Pair_82326A28 *last, Pair_82326A28 *dest)
{
    for (; first != last; first++, dest++) {
        fn_822402F8(&dest->first, &first->first);
        fn_822402F8(&dest->second, &first->second);
    }
    return dest;
}

static __forceinline void destroyRange(Pair_82326A28 *first, Pair_82326A28 *last)
{
    for (; first != last; first++) {
        fn_82230300(&first->second, 1, 0);
        fn_82230300(&first->first, 1, 0);
    }
}

static __forceinline void eraseRange(Vec_82326A28 *v, Pair_82326A28 *first, Pair_82326A28 *last)
{
    if (first != last) {
        Pair_82326A28 *p = moveRange(last, v->last, first);
        destroyRange(p, v->last);
        v->last = p;
    }
}

void fn_82326A28(Vec_82326A28 *v)
{
    eraseRange(v, v->first, v->last);
}
