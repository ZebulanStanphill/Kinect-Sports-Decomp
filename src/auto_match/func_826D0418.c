typedef unsigned int size_t;
extern void *memmove(void *d, const void *s, size_t n);
extern void fn_826FB298(void *a, int b, int c);

typedef struct Vec {
    int *data;
    unsigned int count;
    int pad8;
    int fc;
} Vec;

void fn_826D0418(Vec *param_1, unsigned int param_2)
{
    if (param_1->count == 1) {
        fn_826FB298(param_1, param_1->fc, 0);
    } else {
        int *e = param_1->data + param_2;
        memmove(e, e + 1, (param_1->count - param_2 - 1) * sizeof(int));
        param_1->count = param_1->count - 1;
    }
}
