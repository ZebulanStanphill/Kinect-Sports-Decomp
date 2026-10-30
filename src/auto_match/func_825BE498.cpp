extern "C" {
void fn_822315A0(void *p);
void fn_825BF428(void *p);
void fn_827D9A90(void *self);
void fn_8265CA20(void *p);
extern void *lbl_821C8D88[];
}

struct Elem_825BE498 {
    void *p0;
    void *rc;
};

struct Vec_825BE498 {
    Elem_825BE498 *first;
    Elem_825BE498 *last;
    Elem_825BE498 *end;
};

struct Obj_825BE498 {
    void **vt;
    char pad4[0x3c];
    void *f40;
    char pad44[4];
    void *f48;
    char pad4c[4];
    void *f50;
    char pad54[0x14c];
    void *f1a0;
    char pad1a4[0x20];
    char m1c4[0x4c];
    Vec_825BE498 v;
};

static __forceinline void Release_825BE498(void **pp)
{
    if (*pp) fn_822315A0(*pp);
}

static __forceinline void Tidy_825BE498(Vec_825BE498 *v)
{
    if (v->first != 0) {
        Elem_825BE498 *last = v->last;
        for (Elem_825BE498 *p = v->first; p != last; ++p)
            Release_825BE498(&p->rc);
        fn_8265CA20(v->first);
    }
    v->first = 0;
    v->last = 0;
    v->end = 0;
}

extern "C" Obj_825BE498 *fn_825BE498(Obj_825BE498 *self, unsigned int flags)
{
    self->vt = lbl_821C8D88;
    Tidy_825BE498(&self->v);
    fn_825BF428(self->m1c4);
    Release_825BE498(&self->f1a0);
    Release_825BE498(&self->f50);
    Release_825BE498(&self->f48);
    Release_825BE498(&self->f40);
    fn_827D9A90(self);
    if (flags & 1) {
        fn_8265CA20(self);
    }
    return self;
}
