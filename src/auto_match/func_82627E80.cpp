extern "C" {
void fn_8265CA20(void *p);
void fn_827D9A90(void *self);
extern void *lbl_821CB7D0[];
}

struct Vec_82627E80 {
    void *first;
    void *last;
    void *end;
};

struct Obj_82627E80 {
    void **vt;
    char pad[0x30];
    Vec_82627E80 a;
    int pad40;
    Vec_82627E80 b;
};

static __forceinline void Tidy_82627E80(Vec_82627E80 *v)
{
    if (v->first) fn_8265CA20(v->first);
    v->first = 0;
    v->last = 0;
    v->end = 0;
}

extern "C" Obj_82627E80 *fn_82627E80(Obj_82627E80 *self, unsigned int flags)
{
    self->vt = lbl_821CB7D0;
    Tidy_82627E80(&self->b);
    Tidy_82627E80(&self->a);
    fn_827D9A90(self);
    if (flags & 1) {
        fn_8265CA20(self);
    }
    return self;
}
