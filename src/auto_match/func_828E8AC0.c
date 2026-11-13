typedef struct Elem_828E8AC0 Elem_828E8AC0;

typedef struct Vec_828E8AC0 {
    Elem_828E8AC0 *first;
    Elem_828E8AC0 *last;
    Elem_828E8AC0 *end;
    char alloc[4];
} Vec_828E8AC0;

typedef struct FunctionVt_828E8AC0 {
    void (*manager)(void *in, void *out, int op);
} FunctionVt_828E8AC0;

typedef struct Function_828E8AC0 {
    unsigned int vtable;    /* tagged FunctionVt pointer, bit 0 = trivial */
    int pad4;
    char functor[16];
} Function_828E8AC0;

typedef struct Obj_828E8AC0 {
    Vec_828E8AC0 items;         /* 0x00 */
    int pad10[2];
    Function_828E8AC0 callback; /* 0x18 */
} Obj_828E8AC0;

extern void fn_828E6D00(Elem_828E8AC0 *first, Elem_828E8AC0 *last, void *al, char tag);
extern void fn_8265CA20(void *p);

static __forceinline void Function_Clear(Function_828E8AC0 *f)
{
    if (f->vtable != 0) {
        if ((f->vtable & 1) == 0) {
            void *functor = f->functor;
            FunctionVt_828E8AC0 *vt = (FunctionVt_828E8AC0 *)(f->vtable & ~1u);
            if (vt->manager != 0) {
                vt->manager(functor, functor, 2);
            }
        }
        f->vtable = 0;
    }
}

static __forceinline void Vec_Tidy(Vec_828E8AC0 *v)
{
    char tag;
    if (v->first != 0) {
        fn_828E6D00(v->first, v->last, v->alloc, tag);
        fn_8265CA20(v->first);
    }
    v->first = 0;
    v->last = 0;
    v->end = 0;
}

void fn_828E8AC0(Obj_828E8AC0 *self)
{
    Function_Clear(&self->callback);
    Vec_Tidy(&self->items);
}
