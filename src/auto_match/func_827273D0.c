typedef unsigned int size_t;
void *memmove(void *dst, const void *src, size_t n);

typedef struct Elem {
    int a, b, c, d;
} Elem;

typedef struct Vec {
    Elem *data;
    unsigned int size;
} Vec;

void fn_82726388(Vec *v, unsigned int n);

void fn_827273D0(Vec *v, unsigned int idx, Elem *src)
{
    Elem *e;

    fn_82726388(v, v->size + 1);
    if (idx < v->size - 1) {
        memmove(&v->data[idx + 1], &v->data[idx], (v->size - idx - 1) * sizeof(Elem));
    }
    e = &v->data[idx];
    if (e != 0) {
        *e = *src;
    }
}
