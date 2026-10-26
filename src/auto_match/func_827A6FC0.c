typedef struct E { int a, b, c; } E;
typedef struct V { E *data; unsigned int size; } V;
extern void fn_826F1338(V *v, V *w, unsigned int n);

void fn_827A6FC0(V *v, E *e)
{
    E *p;
    fn_826F1338(v, v, v->size + 1);
    p = &v->data[v->size - 1];
    if (p != 0) {
        *p = *e;
    }
}
