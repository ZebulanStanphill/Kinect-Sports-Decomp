// Returns the object at +0x18 when flag bit 9 is set, through a conditional
// reference-counted temporary (the func_8278CE30.cpp shape): each arm builds
// its own temporary, and only the one built is released afterwards.
struct Obj_8278B458 {
    int pad0;
    int count; /* 0x04 */
};

extern "C" void fn_8267C498(Obj_8278B458 *obj);

struct Ref_8278B458 {
    Obj_8278B458 *p;
    __forceinline Ref_8278B458() : p(0) {}
    __forceinline Ref_8278B458(Obj_8278B458 *const &o)
    {
        if (o)
            ++o->count;
        p = o;
    }
    __forceinline ~Ref_8278B458()
    {
        if (p)
            fn_8267C498(p);
    }
    __forceinline Obj_8278B458 *get() const { return p; }
};

struct Self_8278B458 {
    char pad0[0x18];
    Obj_8278B458 *obj; /* 0x18 */
    char pad1c[0x2a - 0x1c];
    unsigned short flags; /* 0x2a */
    __forceinline unsigned char HasObj() const { return (flags >> 9) & 1; }
};

extern "C" Obj_8278B458 *fn_8278B458(Self_8278B458 *self)
{
    return (self->HasObj() ? Ref_8278B458(self->obj) : Ref_8278B458()).get();
}
