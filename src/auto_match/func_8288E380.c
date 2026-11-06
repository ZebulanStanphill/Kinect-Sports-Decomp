extern unsigned char fn_82424AD0();
typedef struct Vec_8288E380 { int *first; int *last; int *end; } Vec_8288E380;

Vec_8288E380 *fn_8288E380(Vec_8288E380 *v, unsigned n, int *val)
{
    int *first; int *p; unsigned i;
    v->first = 0; v->end = 0; v->last = 0;
    if (fn_82424AD0(v, n)) {
        first = v->first;
        p = first;
        for (i = n; i != 0; --i, ++p) *p = *val;
        v->last = first + n;
    }
    return v;
}
