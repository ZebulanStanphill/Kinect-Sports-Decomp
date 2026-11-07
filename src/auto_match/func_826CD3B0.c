typedef struct Elem_826CD3B0 { unsigned char flag; unsigned char pad[15]; } Elem_826CD3B0;
typedef struct Vec_826CD3B0 { Elem_826CD3B0 *data; unsigned int size; } Vec_826CD3B0;
extern void fn_826CBEF0(Vec_826CD3B0 *v, Vec_826CD3B0 *src, unsigned int n);

void fn_826CD3B0(Vec_826CD3B0 *v, unsigned int n)
{
    unsigned int old = v->size;
    unsigned int i;
    Elem_826CD3B0 *e;

    fn_826CBEF0(v, v, n);
    if (n > old) {
e = v->data + old; for (i = 0; i < n - old; i++, e++) { if (e != 0) e->flag = 0; }
    }
}
