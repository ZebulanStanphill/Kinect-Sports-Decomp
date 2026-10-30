extern void *fn_8267BDA8(void *p, unsigned size);
extern void fn_8267BE38(void *p);
extern void *fn_8267B890(void *heap, unsigned size, int *flags);

typedef struct Array_827948A0 {
    void *data;
    int size;
    int capacity;
} Array_827948A0;

void fn_827948A0(Array_827948A0 *a, void *heap, unsigned n)
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
            p = fn_8267BDA8(a->data, cap * 0x54);
        } else {
            flags = 2;
            p = fn_8267B890(heap, cap * 0x54, &flags);
        }
        a->data = p;
    }
    a->capacity = cap;
}
