typedef struct Opt_8289FA30 { unsigned char hasValue; int value; } Opt_8289FA30;
typedef struct Key_8289FA30 { int id; Opt_8289FA30 opt; } Key_8289FA30;

static __forceinline unsigned char optLess(const Opt_8289FA30 *a, const Opt_8289FA30 *b)
{
    if (!b->hasValue)
        return 0;
    if (!a->hasValue)
        return 1;
    return a->value < b->value;
}

unsigned char fn_8289FA30(const Key_8289FA30 *a, const Key_8289FA30 *b)
{
    return a->id < b->id || (!(b->id < a->id) && optLess(&a->opt, &b->opt));
}
