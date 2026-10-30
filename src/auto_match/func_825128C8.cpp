extern "C" {
void fn_82522ED8(void *p);
void fn_828EB850(void *self);
void fn_8265CA20(void *p);
extern void *lbl_821C2434[];
}

struct Obj_825128C8 {
    void **vt;
    char pad[0xec];
    void *a[3];
    void *b;
    void *c;
};

static __forceinline void Release_825128C8(void **pp)
{
    if (*pp) fn_82522ED8(*pp);
}

extern "C" Obj_825128C8 *fn_825128C8(Obj_825128C8 *self, unsigned int flags)
{
    self->vt = lbl_821C2434;
    for (int i = 0; i < 3; i++)
        Release_825128C8(&self->a[i]);
    Release_825128C8(&self->b);
    Release_825128C8(&self->c);
    fn_828EB850(self);
    if (flags & 1) {
        fn_8265CA20(self);
    }
    return self;
}
