extern void *fn_8267BDA8(void *p, unsigned size);
extern void fn_8267BE38(void *p);
extern void *fn_8267BED0(void *heap, unsigned size, int *flags);

typedef struct Array_826E1E70 {
    void *data;
    int size;
    int capacity;
} Array_826E1E70;

void fn_826E1E70(Array_826E1E70 *a, void *heap, unsigned n)
{
    unsigned cap;
    void *p;
    int flags;
    if (n == 0) {
        cap = 0;
        if (a->data != 0) {
            fn_8267BE38(a->data);
            a->data = 0;
        }
    } else {
        cap = (n + 3) & ~3u;
        if (a->data != 0) {
            p = fn_8267BDA8(a->data, cap * 0x28);
        } else {
            flags = 2;
            p = fn_8267BED0(heap, cap * 0x28, &flags);
        }
        a->data = p;
    }
    a->capacity = cap;
}
