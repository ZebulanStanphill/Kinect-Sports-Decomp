extern "C" long _InterlockedIncrement(long volatile *);
extern "C" long _InterlockedDecrement(long volatile *);

struct RefBase_824D3898 {
    virtual void _Destroy() = 0;
    virtual void _Delete_this() = 0;
    long _Uses;
    long _Weaks;
    __forceinline void _Incwref() { _InterlockedIncrement((volatile long *)&_Weaks); }
    __forceinline void _Decwref() { if (_InterlockedDecrement((volatile long *)&_Weaks) == 0) _Delete_this(); }
};

struct Obj_824D3898 {
    void *vt;
};

struct WeakPtr_824D3898 {
    Obj_824D3898 *_Ptr;
    RefBase_824D3898 *_Rep;
    __forceinline void _Resetw(Obj_824D3898 *op, RefBase_824D3898 *orep) {
        if (orep) orep->_Incwref();
        if (_Rep != 0) _Rep->_Decwref();
        _Rep = orep;
        _Ptr = op;
    }
};

struct SP_824D3898 {
    Obj_824D3898 *_Ptr;
    RefBase_824D3898 *_Rep;
};

struct Block_824D3898 {
    void *vtbl;
    long uses;
    long weaks;
    Obj_824D3898 *obj;
};

extern "C" {
extern void *lbl_821C0D3C[];
void *fn_8265C9E0(unsigned int);
Obj_824D3898 *fn_82F54720(void *);
void fn_82517978(SP_824D3898 *, Obj_824D3898 *, RefBase_824D3898 *, int);
void fn_82F541C8(void *, SP_824D3898 *);
void fn_822315A0(void *);
}

extern "C" WeakPtr_824D3898 *fn_824D3898(WeakPtr_824D3898 *out, void *p2)
{
    Obj_824D3898 *obj;
    Block_824D3898 *rc;
    void *m = fn_8265C9E0(0x60);
    if (m != 0) {
        obj = fn_82F54720(m);
    } else {
        obj = 0;
    }
    m = fn_8265C9E0(0x10);
    if (m != 0) {
        rc = (Block_824D3898 *)m;
        rc->obj = obj;
        rc->uses = 1;
        rc->vtbl = lbl_821C0D3C;
        rc->weaks = 1;
    } else {
        rc = 0;
    }
    SP_824D3898 tmp;
    tmp._Ptr = 0;
    tmp._Rep = 0;
    fn_82517978(&tmp, obj, (RefBase_824D3898 *)rc, 0);
    fn_82F541C8(p2, &tmp);
    out->_Ptr = 0;
    out->_Rep = 0;
    out->_Resetw(obj, (RefBase_824D3898 *)rc);
    if (rc != 0)
        fn_822315A0(rc);
    return out;
}
