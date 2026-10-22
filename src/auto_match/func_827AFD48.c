typedef struct {
    unsigned char d[0x28];
} Elem;

typedef struct {
    Elem *data;
    unsigned int size;
} Vec;

extern void fn_827AF408(Vec *a, Vec *b, unsigned int n);
extern void fn_827AF478(Elem *p, unsigned int n);
extern void fn_827AF2B0(Elem *p, int val);
void *memmove(void *dst, const void *src, unsigned int n);

void fn_827AFD48(Vec *v, unsigned int idx, int val)
{
    unsigned int old;
    unsigned int n;

    old = v->size;
    n = old + 1;
    fn_827AF408(v, v, n);
    if (n > old) {
        fn_827AF478(v->data + old, n - old);
    }
    if (idx < v->size - 1) {
        memmove(v->data + idx + 1, v->data + idx, (v->size - idx - 1) * sizeof(Elem));
    }
    fn_827AF2B0(v->data + idx, val);
}
