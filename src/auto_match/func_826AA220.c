typedef struct Elem_826AA220 { unsigned char flag; unsigned char pad[15]; } Elem_826AA220;
typedef struct Vec_826AA220 { Elem_826AA220 *data; unsigned int size; } Vec_826AA220;
extern void fn_826A9AD8(Vec_826AA220 *v, Vec_826AA220 *src, unsigned int n);

void fn_826AA220(Vec_826AA220 *v, unsigned int n)
{
    unsigned int old = v->size;
    unsigned int i;
    Elem_826AA220 *e;

    fn_826A9AD8(v, v, n);
    if (n > old) {
e = v->data + old; for (i = 0; i < n - old; i++, e++) { if (e != 0) e->flag = 0; }
    }
}
