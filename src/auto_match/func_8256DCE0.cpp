extern "C" long _InterlockedIncrement(long volatile *);
extern "C" long _InterlockedDecrement(long volatile *);

struct RefBase_8256DCE0 {
    virtual void _Destroy() = 0;
    virtual void _Delete_this() = 0;
    long _Uses;
    long _Weaks;
    __forceinline void _Incwref() { _InterlockedIncrement((volatile long *)&_Weaks); }
    __forceinline void _Decwref() { if (_InterlockedDecrement((volatile long *)&_Weaks) == 0) _Delete_this(); }
};

struct Obj_8256DCE0;

struct WeakPtr_8256DCE0 {
    Obj_8256DCE0 *_Ptr;
    RefBase_8256DCE0 *_Rep;
    __forceinline void _Resetw(Obj_8256DCE0 *op, RefBase_8256DCE0 *orep) {
        if (orep) orep->_Incwref();
        if (_Rep != 0) _Rep->_Decwref();
        _Rep = orep;
        _Ptr = op;
    }
};

struct Obj_8256DCE0 {
    void *vt;
    WeakPtr_8256DCE0 w;
    char pad[0x230 - 0xc];
};

struct Block_8256DCE0 {
    void *vt;
    long uses;
    long weaks;
    int pad;
    Obj_8256DCE0 obj;
};

struct Shared_8256DCE0 {
    Obj_8256DCE0 *_Ptr;
    RefBase_8256DCE0 *_Rep;
};

extern "C" {
extern char lbl_821A8D8C[];
extern int lbl_8326B7C8;
void *fn_8265C9E0(unsigned int);
void fn_825BE350(Obj_8256DCE0 *, void *, unsigned int, unsigned int, unsigned int, void *, int, unsigned int);
}

extern "C" Shared_8256DCE0 *fn_8256DCE0(Shared_8256DCE0 *out, unsigned char *parent, const unsigned int *a,
                                        const unsigned int *b, const unsigned int *c, void *d, const unsigned int *e)
{
    Block_8256DCE0 *block = (Block_8256DCE0 *)fn_8265C9E0(0x240);
    if (block != 0) {
        block->uses = 1;
        block->weaks = 1;
        block->vt = lbl_821A8D8C;
        Obj_8256DCE0 *obj = &block->obj;
        if (obj) {
            fn_825BE350(obj, parent ? parent + 4 : 0, *a, *b, *c, d, lbl_8326B7C8, *e);
        }
    } else {
        block = 0;
    }
    Obj_8256DCE0 *o = &block->obj;
    out->_Rep = (RefBase_8256DCE0 *)block;
    out->_Ptr = o;
    if (o) {
        o->w._Resetw(o, (RefBase_8256DCE0 *)block);
    }
    return out;
}
