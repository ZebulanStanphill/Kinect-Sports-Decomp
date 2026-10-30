typedef struct Obj Obj;
typedef struct { Obj *p; } Ptr;
extern void fn_8267C4C8(Obj *o);

Ptr *fn_826DAA10(Ptr *d, Ptr *s)
{
    if (s->p != 0) {
        fn_8267C4C8(s->p);
    }
    d->p = s->p;
    return d;
}
