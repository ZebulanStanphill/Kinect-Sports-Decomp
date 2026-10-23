typedef unsigned int size_t;
extern void *memmove(void *d, const void *s, size_t n);
extern void fn_827AF408(void *a, void *b, int c);

typedef struct Elem {
    char data[0x28];
} Elem;

typedef struct Vec {
    Elem *data;
    unsigned int count;
} Vec;

void fn_827AFFE0(Vec *param_1, unsigned int param_2)
{
    if (param_1->count == 1) {
        fn_827AF408(param_1, param_1, 0);
    } else {
        Elem *e = param_1->data + param_2;
        memmove(e, e + 1, (param_1->count - param_2 - 1) * sizeof(Elem));
        param_1->count = param_1->count - 1;
    }
}
