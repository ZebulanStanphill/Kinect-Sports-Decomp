extern "C" {
void fn_822315A0(void *p);
void fn_8265CA20(void *p);
extern void *lbl_821CB850[];
extern void *lbl_821CA744[];
}

struct Obj_82628C50 {
    void **vt;
    char pad[0x8 - 4];
    void *fb;
    char pad2[0x1c - 0x8 - 4];
    void *fa;
};

static __forceinline void Release_82628C50(void **pp)
{
    if (*pp) fn_822315A0(*pp);
}

extern "C" Obj_82628C50 *fn_82628C50(Obj_82628C50 *self, unsigned int flags)
{
    self->vt = lbl_821CB850;
    Release_82628C50(&self->fa);
    self->vt = lbl_821CA744;
    Release_82628C50(&self->fb);
    if (flags & 1) {
        fn_8265CA20(self);
    }
    return self;
}
