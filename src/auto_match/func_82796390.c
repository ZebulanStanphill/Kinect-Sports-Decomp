typedef unsigned int size_t;
void *memmove(void *dst, const void *src, size_t n);
extern void fn_82796100(void *v, unsigned int n);

typedef struct {
    int *data;
    unsigned int count;
} Vec;

void fn_82796390(Vec *v, unsigned int idx, int *val)
{
    int *p;

    fn_82796100(v, v->count + 1);
    if (idx < v->count - 1) {
        memmove(&v->data[idx + 1], &v->data[idx], (v->count - idx - 1) * sizeof(int));
    }
    p = &v->data[idx];
    if (p != 0) {
        *p = *val;
        *val = 0;
    }
}
