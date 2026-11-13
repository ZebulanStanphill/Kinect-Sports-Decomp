typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

struct Elem_824547D0;
typedef struct ElemVt_824547D0 {
    void (*dtor)(struct Elem_824547D0 *e, int flags);
} ElemVt_824547D0;

typedef struct Elem_824547D0 {
    ElemVt_824547D0 *vt;
    int a;
    int b;
    int c;
    __vector4 v;
    float f;
    unsigned char g;
} Elem_824547D0;

typedef struct Vec_824547D0 {
    Elem_824547D0 *first;
    Elem_824547D0 *last;
} Vec_824547D0;

static __forceinline void Assign_824547D0(Elem_824547D0 *d, const Elem_824547D0 *s)
{
    d->a = s->a;
    d->b = s->b;
    d->c = s->c;
    d->v = s->v;
    d->f = s->f;
    d->g = s->g;
}

static __forceinline Elem_824547D0 *Move_824547D0(Elem_824547D0 *src, Elem_824547D0 *end, Elem_824547D0 *dst)
{
    for (; src != end; src++, dst++) {
        Assign_824547D0(dst, src);
    }
    return dst;
}

static __forceinline void Erase_824547D0(Vec_824547D0 *v, Elem_824547D0 *first, Elem_824547D0 *last)
{
    Elem_824547D0 *end;
    Elem_824547D0 *dst;
    Elem_824547D0 *p;

    if (first != last) {
        end = v->last;
        dst = Move_824547D0(last, end, first);
        end = v->last;
        for (p = dst; p != end; p++) {
            p->vt->dtor(p, 0);
        }
        v->last = dst;
    }
}

void fn_824547D0(Vec_824547D0 *v)
{
    Erase_824547D0(v, v->first, v->last);
}
