typedef struct P { int a; int b; } P;

P *fn_828B71F8(P *s, P *e, P *d)
{
    for (; s != e; s++, d++) {
        if (d != 0) {
            d->a = 0;
            d->b = 0;
            if (d != s) {
                int *x = &d->b, *y = &s->b;
                int t = *x; *x = *y; *y = t;
                x = &d->a; y = &s->a;
                t = *x; *x = *y; *y = t;
            }
        }
    }
    return d;
}
