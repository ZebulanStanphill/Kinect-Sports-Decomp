typedef struct Entry_822DC578 {
    int v[5];
} Entry_822DC578;

typedef struct Less_822DC578 {
    const float *scale;
    const float *weight;
} Less_822DC578;

extern unsigned char fn_822D9E28(Less_822DC578 *pred, const Entry_822DC578 *a, const Entry_822DC578 *b);

void fn_822DC578(Entry_822DC578 *first, Entry_822DC578 *last, Less_822DC578 *pred)
{
    Entry_822DC578 *next;
    for (next = first; ++next != last; ) {
        Entry_822DC578 *next1 = next;
        Entry_822DC578 val = *next;
        if (fn_822D9E28(pred, &val, first)) {
            Entry_822DC578 *dest = ++next1;
            Entry_822DC578 *src = next;
            while (first != src) {
                *--dest = *--src;
            }
            *first = val;
        } else {
            Entry_822DC578 *first1;
            for (first1 = next1; fn_822D9E28(pred, &val, --first1); next1 = first1) {
                *next1 = *first1;
            }
            *next1 = val;
        }
    }
}
