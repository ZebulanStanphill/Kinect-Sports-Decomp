typedef struct { int a; int b; int c; } Elem;
typedef struct { Elem *data; unsigned int size; } Vec;

extern void fn_82676800(Vec *v, Vec *v2, unsigned int n);

void fn_82679378(Vec *v, unsigned int n)
{
    unsigned int old = v->size;
    fn_82676800(v, v, n);
    if (n > old) {
        Elem *p = v->data + old;
        unsigned int cnt = n - old;
        unsigned int i = 0;
        if (cnt != 0) {
            do {
                if (p) {
                    p->a = 0;
                    p->b = 0;
                    p->c = 0;
                }
                i++;
                p++;
            } while (i < cnt);
        }
    }
}
