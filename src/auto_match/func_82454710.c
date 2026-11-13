typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

struct Elem_82454710;
typedef struct ElemVt_82454710 {
    void (*dtor)(struct Elem_82454710 *e, int flags);
} ElemVt_82454710;

typedef struct Elem_82454710 {
    ElemVt_82454710 *vt;
    int a;
    int b;
    int c;
    __vector4 v;
    float f;
    unsigned char g;
} Elem_82454710;

typedef struct Vec_82454710 {
    Elem_82454710 *first;
    Elem_82454710 *last;
} Vec_82454710;

static __forceinline void Assign_82454710(Elem_82454710 *d, const Elem_82454710 *s)
{
    d->a = s->a;
    d->b = s->b;
    d->c = s->c;
    d->v = s->v;
    d->f = s->f;
    d->g = s->g;
}

Elem_82454710 **fn_82454710(Elem_82454710 **out, Vec_82454710 *v, Elem_82454710 *where)
{
    Elem_82454710 *end = v->last;
    Elem_82454710 *p;

    for (p = where + 1; p != end; p++) {
        Assign_82454710(p - 1, p);
    }
    end = v->last;
    for (p = end - 1; p != end; p++) {
        p->vt->dtor(p, 0);
    }
    end = v->last;
    *out = where;
    v->last = end - 1;
    return out;
}
