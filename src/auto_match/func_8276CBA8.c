typedef struct { int *data; unsigned int size; } Vec;
extern void fn_8273D528(Vec *v, int n);
void *memmove(void *d, const void *s, unsigned int n);

void fn_8276CBA8(Vec *v, unsigned int i)
{
    if (v->size == 1) {
        fn_8273D528(v, 0);
    } else {
        int *p = v->data + i;
        memmove(p, p + 1, (v->size - i - 1) * sizeof(int));
        v->size--;
    }
}
