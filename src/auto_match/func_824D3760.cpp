extern "C" long _InterlockedIncrement(long volatile *);
extern "C" long _InterlockedDecrement(long volatile *);

struct RefBase_824D3760 {
    virtual void _Destroy() = 0;
    virtual void _Delete_this() = 0;
    long _Uses;
    long _Weaks;
    __forceinline void _Incwref() { _InterlockedIncrement((volatile long *)&_Weaks); }
    __forceinline void _Decwref() { if (_InterlockedDecrement((volatile long *)&_Weaks) == 0) _Delete_this(); }
};

struct Obj_824D3760 {
    void *vt;
};

struct WeakPtr_824D3760 {
    Obj_824D3760 *_Ptr;
    RefBase_824D3760 *_Rep;
    __forceinline void _Resetw(Obj_824D3760 *op, RefBase_824D3760 *orep) {
        if (orep) orep->_Incwref();
        if (_Rep != 0) _Rep->_Decwref();
        _Rep = orep;
        _Ptr = op;
    }
};

struct SP_824D3760 {
    Obj_824D3760 *_Ptr;
    RefBase_824D3760 *_Rep;
};

struct Block_824D3760 {
    void *vtbl;
    long uses;
    long weaks;
    Obj_824D3760 *obj;
};

extern "C" {
extern void *lbl_821C0D24[];
extern void *lbl_821C0DB8[];
void *fn_8265C9E0(unsigned int);
void fn_82517978(SP_824D3760 *, Obj_824D3760 *, RefBase_824D3760 *, int);
void fn_82F541C8(void *, SP_824D3760 *);
void fn_822315A0(void *);
}

extern "C" WeakPtr_824D3760 *fn_824D3760(WeakPtr_824D3760 *out, void *p2)
{
    Obj_824D3760 *obj;
    Block_824D3760 *rc;
    void *m = fn_8265C9E0(0x10);
    if (m != 0) {
        obj = (Obj_824D3760 *)m;
        obj->vt = lbl_821C0D24;
    } else {
        obj = 0;
    }
    m = fn_8265C9E0(0x10);
    if (m != 0) {
        rc = (Block_824D3760 *)m;
        rc->obj = obj;
        rc->uses = 1;
        rc->vtbl = lbl_821C0DB8;
        rc->weaks = 1;
    } else {
        rc = 0;
    }
    SP_824D3760 tmp;
    tmp._Ptr = 0;
    tmp._Rep = 0;
    fn_82517978(&tmp, obj, (RefBase_824D3760 *)rc, 0);
    fn_82F541C8(p2, &tmp);
    out->_Ptr = 0;
    out->_Rep = 0;
    out->_Resetw(obj, (RefBase_824D3760 *)rc);
    if (rc != 0)
        fn_822315A0(rc);
    return out;
}
