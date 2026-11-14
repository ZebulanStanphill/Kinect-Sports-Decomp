typedef struct Entry_8250BD30 {
    int pad0[2];
    float key;
    int pad0C[2];
} Entry_8250BD30;

static __forceinline unsigned char Less(const Entry_8250BD30 *a, const Entry_8250BD30 *b)
{
    return a->key < b->key;
}

static __forceinline void Swap(Entry_8250BD30 *a, Entry_8250BD30 *b)
{
    Entry_8250BD30 t = *a;
    *a = *b;
    *b = t;
}

void fn_8250BD30(Entry_8250BD30 *a, Entry_8250BD30 *b, Entry_8250BD30 *c)
{
    if (Less(b, a)) {
        Swap(b, a);
    }
    if (Less(c, b)) {
        Swap(c, b);
    }
    if (Less(b, a)) {
        Swap(b, a);
    }
}
