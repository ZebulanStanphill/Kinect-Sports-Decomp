// Scalar deleting destructor of a game class (not Havok) that stores the vtable lbl_8214B6E4 (0x8214B6E4).
extern "C" void fn_8265CA20(void *p);   // global operator delete
extern "C" void *lbl_8214B6E4[];

// The object at +0x4 is told to drop the link at +0x8 (vtable slot 1).
struct Owner;
struct OwnerVtbl {
    void (*slot0)(Owner *self);
    void (*remove)(Owner *self, void *link);
};
struct Owner {
    OwnerVtbl *vtbl;
};

struct Obj {
    void **vtbl;
    Owner *m_owner;   // +0x4
    char m_link[8];   // +0x8
};

extern "C" Obj *fn_82E1BF28(Obj *self, unsigned int flags)
{
    Owner *owner = self->m_owner;
    self->vtbl = lbl_8214B6E4;
    if (owner != 0)
        owner->vtbl->remove(owner, self->m_link);
    if (flags & 1)
        fn_8265CA20(self);
    return self;
}
