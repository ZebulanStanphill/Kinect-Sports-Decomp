extern void *fn_8267BDA8(void *p, unsigned size);
extern void fn_8267BE38(void *p);
extern void *fn_8267BED0(void *heap, unsigned size, int *flags);

typedef struct Array_8269B308 {
    void *data;
    int size;
    int capacity;
} Array_8269B308;

void fn_8269B308(Array_8269B308 *a, void *heap, unsigned n)
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
            p = fn_8267BDA8(a->data, cap * 16);
        } else {
            flags = 0x143;
            p = fn_8267BED0(heap, cap * 16, &flags);
        }
        a->data = p;
    }
    a->capacity = cap;
}
