typedef struct Elem {
    char pad00[0x8];
    int a;
    char pad0c[4];
    __int64 b;
    char name[42];
} Elem;

typedef struct Iter {
    int **cont;
    int pad;
    unsigned int idx;
} Iter;

Elem *fn_828D4E10(Iter *it);

Iter *fn_828B3B98(Iter *out, Iter *first, Iter *last, Iter *dst)
{
    Elem *s;
    Elem *d;
    int i;
    int **c;
    int *p;

    while (first->idx != last->idx) {
        s = fn_828D4E10(first);
        d = fn_828D4E10(dst);
        d->a = s->a;
        d->b = s->b;
        for (i = 0; i < 42; i++) {
            d->name[i] = s->name[i];
        }
        dst->idx++;
        first->idx++;
    }
    c = dst->cont;
    out->cont = 0;
    out->pad = 0;
    if (c != 0 && (p = *c) != 0) {
        out->cont = (int **)*p;
    }
    out->idx = dst->idx;
    return out;
}
