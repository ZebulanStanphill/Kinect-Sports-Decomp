typedef struct Ref Ref;
extern void fn_822315A0(Ref *r);

typedef struct {
    void *a;
    Ref *b;
} Elem;

typedef struct {
    Elem *first;
    Elem *last;
} Vec;

static void swapp(void **x, void **y)
{
    void *t = *x;
    *x = *y;
    *y = t;
}

Elem **fn_8256D470(Elem **out, Vec *v, Elem *where)
{
    Elem *end = v->last;
    Elem *p;
    Elem tmp;
    Ref *old;

    for (p = where + 1; p != end; p++) {
        tmp.a = 0;
        tmp.b = 0;
        if (&tmp != p) {
            swapp((void **)&tmp.b, (void **)&p->b);
            swapp(&tmp.a, &p->a);
        }
        old = p[-1].b;
        p[-1].b = tmp.b;
        p[-1].a = tmp.a;
        if (old != 0) {
            fn_822315A0(old);
        }
    }
    end = v->last;
    for (p = end - 1; p != end; p++) {
        if (p->b != 0) {
            fn_822315A0(p->b);
        }
    }
    end = v->last;
    *out = where;
    v->last = end - 1;
    return out;
}
