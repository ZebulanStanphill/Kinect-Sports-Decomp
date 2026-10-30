extern "C" {
void fn_822315A0(void *p);
void fn_8265CA20(void *p);
extern void *lbl_821CAC64[];
extern void *lbl_821CA744[];
}

struct Obj_82610B78 {
    void **vt;
    char pad[0x8 - 4];
    void *fb;
    char pad2[0x30 - 0x8 - 4];
    void *fa;
};

static __forceinline void Release_82610B78(void **pp)
{
    if (*pp) fn_822315A0(*pp);
}

extern "C" Obj_82610B78 *fn_82610B78(Obj_82610B78 *self, unsigned int flags)
{
    self->vt = lbl_821CAC64;
    Release_82610B78(&self->fa);
    self->vt = lbl_821CA744;
    Release_82610B78(&self->fb);
    if (flags & 1) {
        fn_8265CA20(self);
    }
    return self;
}
