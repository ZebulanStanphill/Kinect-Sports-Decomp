struct Obj_8278CE30 {
    int count;
};

extern "C" void fn_826C6368(Obj_8278CE30 *obj);
extern "C" void fn_8267BE38(Obj_8278CE30 *obj);

struct Ref_8278CE30 {
    Obj_8278CE30 *p;
    __forceinline Ref_8278CE30() : p(0) {}
    __forceinline Ref_8278CE30(Obj_8278CE30 *const &o)
    {
        if (o)
            ++o->count;
        p = o;
    }
    __forceinline ~Ref_8278CE30()
    {
        if (p && --p->count == 0) {
            fn_826C6368(p);
            fn_8267BE38(p);
        }
    }
    __forceinline Obj_8278CE30 *get() const { return p; }
};

struct Self_8278CE30 {
    char pad0[0x1c];
    Obj_8278CE30 *obj;
    char pad20[0x2a - 0x20];
    unsigned short flags;
    __forceinline unsigned char HasObj() const { return (flags >> 11) & 1; }
};

extern "C" Obj_8278CE30 *fn_8278CE30(Self_8278CE30 *self)
{
    return (self->HasObj() ? Ref_8278CE30(self->obj) : Ref_8278CE30()).get();
}
