typedef struct Ref_826FCBD0 { int pad; long refs; } Ref_826FCBD0;
typedef struct Obj_826FCBD0 {
    void *vtbl;
    char pad4[0xc];
    void *p10;
    unsigned int tagged14;
    unsigned int tagged18;
    void *p1c;
} Obj_826FCBD0;
extern long _InterlockedExchangeAdd(long volatile *, long);
extern void fn_8267BE38(void *p);
extern void fn_8267C4F0(void *p);
extern void fn_8267C488(void *p);
extern char lbl_8200D398[];

void fn_826FCBD0(Obj_826FCBD0 *self)
{
    Ref_826FCBD0 *r;

    if (self->p1c != 0) {
        fn_8267C4F0(self->p1c);
    }
    r = (Ref_826FCBD0 *)(self->tagged18 & ~3u);
    if (_InterlockedExchangeAdd(&r->refs, -1) - 1 == 0) {
        fn_8267BE38(r);
    }
    r = (Ref_826FCBD0 *)(self->tagged14 & ~3u);
    if (_InterlockedExchangeAdd(&r->refs, -1) - 1 == 0) {
        fn_8267BE38(r);
    }
    if (self->p10 != 0) {
        fn_8267C4F0(self->p10);
    }
    self->vtbl = lbl_8200D398;
    fn_8267C488(self);
}
