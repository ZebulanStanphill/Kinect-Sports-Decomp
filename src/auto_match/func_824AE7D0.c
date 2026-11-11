typedef struct Ring_824AE7D0 {
    char *first;
    char *last;
    char *x;
    char *endcap;
} Ring_824AE7D0;

typedef struct Iter_824AE7D0 {
    Ring_824AE7D0 *c;
    char *cur;
} Iter_824AE7D0;

Iter_824AE7D0 *fn_824AE7D0(Iter_824AE7D0 *it, int n)
{
    if (n > 0) {
        char *cur = it->cur;
        char *first;
        if (cur == 0)
            cur = it->c->endcap;
        first = it->c->first;
        if (n > (cur - first >> 6))
            n -= it->c->last - first >> 6;
        it->cur = cur - n * 64;
    } else if (n < 0) {
        int m = -n;
        if (m > 0) {
            Ring_824AE7D0 *c = it->c;
            char *cur = it->cur;
            if (m >= c->last - cur >> 6)
                m -= c->last - c->first >> 6;
            cur += m * 64;
            it->cur = cur;
            if (cur == c->endcap)
                it->cur = 0;
        } else if (m < 0) {
            fn_824AE7D0(it, -m);
        }
    }
    return it;
}
