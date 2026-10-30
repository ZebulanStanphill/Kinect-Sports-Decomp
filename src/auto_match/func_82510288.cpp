extern "C" {
void fn_8265CA20(void *p);
extern void *lbl_821C7FB8[];
}

struct Impl_82510288 {
    virtual void s0();
    virtual void s1();
    virtual void s2();
    virtual void DeleteThis(bool dealloc);
};

struct Func_82510288 {
    char space[0x10];
    Impl_82510288 *impl;
};

struct Elem_82510288 {
    int w[4];
};

struct Vec_82510288 {
    Elem_82510288 *first;
    Elem_82510288 *last;
    Elem_82510288 *end;
};

struct Obj_82510288 {
    void **vt;
    char pad4[4];
    Func_82510288 f;
    int pad1c;
    Vec_82510288 v;
};

static __forceinline void Tidy_82510288(Vec_82510288 *v)
{
    if (v->first != 0) {
        for (Elem_82510288 *p = v->first; p != v->last; ++p) {
        }
        fn_8265CA20(v->first);
    }
    v->first = 0;
    v->last = 0;
    v->end = 0;
}

static __forceinline void Tidy_82510288(Func_82510288 *f)
{
    if (f->impl != 0) {
        f->impl->DeleteThis(f->impl != (Impl_82510288 *)f);
        f->impl = 0;
    }
}

extern "C" Obj_82510288 *fn_82510288(Obj_82510288 *self, unsigned int flags)
{
    Tidy_82510288(&self->v);
    Tidy_82510288(&self->f);
    self->vt = lbl_821C7FB8;
    if (flags & 1) {
        fn_8265CA20(self);
    }
    return self;
}
