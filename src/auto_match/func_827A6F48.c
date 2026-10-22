typedef struct { int a; int b; int c; } Elem;
typedef struct { Elem *data; unsigned int size; } Vec;
extern void fn_826F1338(Vec *v, Vec *w, unsigned int n);

void fn_827A6F48(Vec *v, unsigned int size)
{
    unsigned int old = v->size;
    unsigned int i, n;
    Elem *e;
    fn_826F1338(v, v, size);
    if (size > old) {
        e = v->data + old;
        n = size - old;
        i = 0;
        if (n != 0) {
            do {
                if (e != 0) {
                    e->b = 0;
                    e->c = 0;
                    e->a = 0xb;
                }
                i++;
                e++;
            } while (i < n);
        }
    }
}
