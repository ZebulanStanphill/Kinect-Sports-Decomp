typedef struct Entry_822DCA58 {
    int v[5];
} Entry_822DCA58;

typedef struct Less_822DCA58 {
    const float *scale;
    const float *weight;
} Less_822DCA58;

extern unsigned char fn_822D9E28(Less_822DCA58 *pred, const Entry_822DCA58 *a, const Entry_822DCA58 *b);

static __forceinline void Swap(Entry_822DCA58 *a, Entry_822DCA58 *b)
{
    Entry_822DCA58 t = *a;
    *a = *b;
    *b = t;
}

void fn_822DCA58(Entry_822DCA58 *a, Entry_822DCA58 *b, Entry_822DCA58 *c, Less_822DCA58 pred)
{
    if (fn_822D9E28(&pred, b, a)) {
        Swap(b, a);
    }
    if (fn_822D9E28(&pred, c, b)) {
        Swap(c, b);
    }
    if (fn_822D9E28(&pred, b, a)) {
        Swap(b, a);
    }
}
