typedef struct Pair_822F8E58 {
    int first;
    float second;
} Pair_822F8E58;

static __forceinline unsigned char Greater(const Pair_822F8E58 *a, const Pair_822F8E58 *b)
{
    return a->second > b->second;
}

static __forceinline void SwapInt(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

static __forceinline void SwapFloat(float *a, float *b)
{
    float t = *a;
    *a = *b;
    *b = t;
}

static __forceinline void SwapPair(Pair_822F8E58 *a, Pair_822F8E58 *b)
{
    if (a != b) {
        SwapInt(&a->first, &b->first);
        SwapFloat(&a->second, &b->second);
    }
}

void fn_822F8E58(Pair_822F8E58 *p, Pair_822F8E58 *q, Pair_822F8E58 *r)
{
    if (Greater(q, p)) SwapPair(q, p);
    if (Greater(r, q)) SwapPair(r, q);
    if (Greater(q, p)) SwapPair(q, p);
}
