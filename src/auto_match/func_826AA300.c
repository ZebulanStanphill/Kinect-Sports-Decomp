typedef struct E { int a, b, c; } E;
typedef struct V { E *data; unsigned int size; } V;
extern void fn_82768E30(V *v, V *w, unsigned int n);

void fn_826AA300(V *v, E *e)
{
    E *p;
    fn_82768E30(v, v, v->size + 1);
    p = &v->data[v->size - 1];
    if (p != 0) {
        *p = *e;
    }
}
