typedef struct {
    int v[5];
} Entry_8250BFE0;

extern unsigned char fn_8250A688(const Entry_8250BFE0 *a, const Entry_8250BFE0 *b);

static __forceinline void Swap(Entry_8250BFE0 *a, Entry_8250BFE0 *b)
{
    Entry_8250BFE0 t = *a;
    *a = *b;
    *b = t;
}

void fn_8250BFE0(Entry_8250BFE0 *a, Entry_8250BFE0 *b, Entry_8250BFE0 *c)
{
    if (fn_8250A688(b, a)) {
        Swap(b, a);
    }
    if (fn_8250A688(c, b)) {
        Swap(c, b);
    }
    if (fn_8250A688(b, a)) {
        Swap(b, a);
    }
}
