typedef struct { unsigned __int64 *data; unsigned int size; } Vec;
extern void fn_8267E980(Vec *v, int n);
void *memmove(void *d, const void *s, unsigned int n);

void fn_8267EB30(Vec *v, unsigned int i)
{
    if (v->size == 1) {
        fn_8267E980(v, 0);
    } else {
        unsigned __int64 *p = v->data + i;
        memmove(p, p + 1, (v->size - i - 1) * sizeof(unsigned __int64));
        v->size--;
    }
}
