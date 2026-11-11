typedef struct Ring_824B1A08 {
    char *first;
    char *last;
    char *x;
    char *endcap;
} Ring_824B1A08;

typedef struct Iter_824B1A08 {
    Ring_824B1A08 *c;
    char *cur;
} Iter_824B1A08;

Iter_824B1A08 *fn_824B1A08(Iter_824B1A08 *it, int n)
{
    if (n > 0) {
        char *cur = it->cur;
        char *first;
        if (cur == 0)
            cur = it->c->endcap;
        first = it->c->first;
        if (n > (cur - first >> 5))
            n -= it->c->last - first >> 5;
        it->cur = cur - n * 32;
    } else if (n < 0) {
        int m = -n;
        if (m > 0) {
            Ring_824B1A08 *c = it->c;
            char *cur = it->cur;
            if (m >= c->last - cur >> 5)
                m -= c->last - c->first >> 5;
            cur += m * 32;
            it->cur = cur;
            if (cur == c->endcap)
                it->cur = 0;
        } else if (m < 0) {
            fn_824B1A08(it, -m);
        }
    }
    return it;
}
