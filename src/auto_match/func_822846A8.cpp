extern "C" {
void fn_82359C18(void *p);
void fn_82279AF0(void *self);
void fn_8265CA20(void *p);
extern void *lbl_821A8C88[];
}

struct Elem_822846A8 {
    char pad[0x400];
    char m400[0x18];
    char m418[0x28];
};

struct Vec_822846A8 {
    Elem_822846A8 *first;
    Elem_822846A8 *last;
    Elem_822846A8 *end;
};

struct Obj_822846A8 {
    void **vt;
    char pad[0x144];
    Vec_822846A8 v;
};

static __forceinline void Tidy_822846A8(Vec_822846A8 *v)
{
    if (v->first != 0) {
        Elem_822846A8 *last = v->last;
        for (Elem_822846A8 *p = v->first; p != last; ++p) {
            fn_82359C18(p->m418);
            fn_82359C18(p->m400);
        }
        fn_8265CA20(v->first);
    }
    v->first = 0;
    v->last = 0;
    v->end = 0;
}

extern "C" Obj_822846A8 *fn_822846A8(Obj_822846A8 *self, unsigned int flags)
{
    self->vt = lbl_821A8C88;
    Tidy_822846A8(&self->v);
    fn_82279AF0(self);
    if (flags & 1) {
        fn_8265CA20(self);
    }
    return self;
}
