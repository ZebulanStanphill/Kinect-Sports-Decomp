// Creates the object with make_shared (one 0x64-byte block: ref count + 0x58-byte object),
// stores a locked shared_ptr to it in the owner (+0x5a8) and returns a weak_ptr to its
// second base (at +0x54 of the object).
#include <new>

extern "C" long _InterlockedIncrement(long volatile *);
extern "C" long _InterlockedDecrement(long volatile *);

struct RefBase_822BE6D0 {
    virtual void _Destroy() = 0;
    virtual void _Delete_this() = 0;
    long _Uses;
    long _Weaks;
    __forceinline void _Incwref() { _InterlockedIncrement((volatile long *)&_Weaks); }
    __forceinline void _Decwref() { if (_InterlockedDecrement((volatile long *)&_Weaks) == 0) _Delete_this(); }
};

struct Owner_822BE6D0;

extern "C" {
extern void *lbl_821AD588[];
extern void *lbl_821B0684[];
extern void *lbl_821B069C[];
extern void *lbl_821B06B8[];
void fn_822315A0(RefBase_822BE6D0 *rep);
unsigned char fn_8223AAC0(RefBase_822BE6D0 *rep);
void *fn_8251F720(void *lock, int unk);
void fn_8251FA58(void *res);
void *fn_8265C9E0(unsigned int size);
}

struct Base_822BE6D0;
extern "C" void fn_8232B708(Base_822BE6D0 *obj, Owner_822BE6D0 *owner, void *res);

struct Base_822BE6D0 {
    __forceinline Base_822BE6D0(Owner_822BE6D0 *owner, void *res) { fn_8232B708(this, owner, res); }
    void **vtable;
    char pad4[0x50];
};

struct Iface_822BE6D0 {
    __forceinline Iface_822BE6D0() { vtable = lbl_821B0684; }
    void **vtable;
    int pad4;
};

struct Obj_822BE6D0 : Base_822BE6D0, Iface_822BE6D0 {
    __forceinline Obj_822BE6D0(Owner_822BE6D0 *owner, void *res);
};

__forceinline Obj_822BE6D0::Obj_822BE6D0(Owner_822BE6D0 *owner, void *res)
    : Base_822BE6D0(owner, res)
{
    Base_822BE6D0::vtable = lbl_821B069C;
    Iface_822BE6D0::vtable = lbl_821B06B8;
}

struct Block_822BE6D0 {
    void **vtable;
    long uses;
    long weaks;
    Obj_822BE6D0 obj;
};

struct SharedPtr_822BE6D0 {
    void *_Ptr;
    RefBase_822BE6D0 *_Rep;
};

struct Owner_822BE6D0 {
    char pad0[0x254];
    char lock[0x354];
    SharedPtr_822BE6D0 current;     /* 0x5a8 */
};

extern "C" SharedPtr_822BE6D0 *fn_822BE6D0(SharedPtr_822BE6D0 *out, Owner_822BE6D0 *owner)
{
    void *res;
    Block_822BE6D0 *block;
    Obj_822BE6D0 *obj;
    RefBase_822BE6D0 *rep;
    RefBase_822BE6D0 *old;
    void *ptr;

    res = fn_8251F720(owner->lock, 0);
    block = (Block_822BE6D0 *)fn_8265C9E0(0x64);
    if (block != 0) {
        block->uses = 1;
        block->vtable = lbl_821AD588;
        block->weaks = 1;
        new (&block->obj) Obj_822BE6D0(owner, res);
    } else {
        block = 0;
    }
    obj = &block->obj;

    ptr = 0;
    rep = 0;
    if (block != 0 && fn_8223AAC0((RefBase_822BE6D0 *)block) != 0) {
        rep = (RefBase_822BE6D0 *)block;
        ptr = obj;
    }
    old = owner->current._Rep;
    owner->current._Rep = rep;
    owner->current._Ptr = ptr;
    if (old != 0)
        fn_822315A0(old);

    out->_Ptr = 0;
    out->_Rep = 0;
    if (block != 0)
        ((RefBase_822BE6D0 *)block)->_Incwref();
    if (out->_Rep != 0)
        out->_Rep->_Decwref();
    out->_Rep = (RefBase_822BE6D0 *)block;
    out->_Ptr = static_cast<Iface_822BE6D0 *>(obj);
    if (block != 0)
        fn_822315A0((RefBase_822BE6D0 *)block);
    if (res != 0)
        fn_8251FA58(res);
    return out;
}
