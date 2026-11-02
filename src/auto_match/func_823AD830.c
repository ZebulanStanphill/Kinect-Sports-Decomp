typedef struct Ring_823AD830 {
    char *first;
    char *last;
    char *x;
    char *endcap;
} Ring_823AD830;

typedef struct Iter_823AD830 {
    Ring_823AD830 *c;
    char *cur;
} Iter_823AD830;

Iter_823AD830 *fn_823AD830(Iter_823AD830 *it, int n)
{
    if (n > 0) {
        char *cur = it->cur;
        char *first;
        if (cur == 0)
            cur = it->c->endcap;
        first = it->c->first;
        if (n > (cur - first >> 4))
            n -= it->c->last - first >> 4;
        it->cur = cur - n * 16;
    } else if (n < 0) {
        int m = -n;
        if (m > 0) {
            Ring_823AD830 *c = it->c;
            char *cur = it->cur;
            if (m >= c->last - cur >> 4)
                m -= c->last - c->first >> 4;
            cur += m * 16;
            it->cur = cur;
            if (cur == c->endcap)
                it->cur = 0;
        } else if (m < 0) {
            fn_823AD830(it, -m);
        }
    }
    return it;
}
