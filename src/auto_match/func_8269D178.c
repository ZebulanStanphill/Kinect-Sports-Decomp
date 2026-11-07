typedef struct Elem_8269D178 { unsigned char flag; unsigned char pad[15]; } Elem_8269D178;
typedef struct Vec_8269D178 { Elem_8269D178 *data; unsigned int size; } Vec_8269D178;
extern void fn_8269CF58(Vec_8269D178 *v, Vec_8269D178 *src, unsigned int n);

void fn_8269D178(Vec_8269D178 *v, unsigned int n)
{
    unsigned int old = v->size;
    unsigned int i;
    Elem_8269D178 *e;

    fn_8269CF58(v, v, n);
    if (n > old) {
e = v->data + old; for (i = 0; i < n - old; i++, e++) { if (e != 0) e->flag = 0; }
    }
}
