typedef unsigned int uint;
typedef struct { int pad; int refs; } Ref;
typedef struct { int a; int b; Ref *r; int c; int d; } Elem;
typedef struct { Elem *data; uint count; } Vec;
extern void fn_82730B00(Vec *v, uint n);
extern void *memmove(void *d, const void *s, uint n);

void fn_82730B88(Vec *v, uint idx, Elem *src)
{
    Elem *e;
    int a;
    Ref *r;

    fn_82730B00(v, v->count + 1);
    if (idx < v->count - 1) {
        memmove(&v->data[idx + 1], &v->data[idx], (v->count - idx - 1) * sizeof(Elem));
    }
    e = &v->data[idx];
    if (e != 0) {
        a = src->b;
        e->a = src->a;
        e->b = a;
        r = src->r;
        if (r != 0) {
            r->refs++;
        }
        e->r = src->r;
        e->c = src->c;
        e->d = src->d;
    }
}
