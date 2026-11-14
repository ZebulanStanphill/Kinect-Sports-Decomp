typedef struct Elem_830602B8 {
    int v[3];
} Elem_830602B8;

typedef struct Array_830602B8 {
    Elem_830602B8 *data;
    char pad4[0x1c - 4];
    int count;
} Array_830602B8;

extern void *fn_83065B90(unsigned int size);
extern void fn_83065BA8(void *p);
extern void *memcpy(void *dst, const void *src, unsigned int size);

int fn_830602B8(Array_830602B8 *a, int n)
{
    Elem_830602B8 *p = 0;
    if (a->data != 0) {
        if (n > 0) {
            int m;
            p = fn_83065B90(n * sizeof(Elem_830602B8));
            if (p == 0)
                return 0;
            m = a->count;
            if (n < m)
                m = n;
            memcpy(p, a->data, m * sizeof(Elem_830602B8));
        }
        fn_83065BA8(a->data);
        a->data = p;
    } else if (n > 0) {
        Elem_830602B8 *q = fn_83065B90(n * sizeof(Elem_830602B8));
        if (q == 0)
            return 0;
        a->data = q;
    }
    a->count = n;
    return 1;
}
