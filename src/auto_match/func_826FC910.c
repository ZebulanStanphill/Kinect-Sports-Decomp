typedef struct Ref_826FC910 { int pad; long refs; } Ref_826FC910;
typedef struct Obj_826FC910 {
    void *vt;
    int pad4[3];
    void *child;           /* 0x10 */
    unsigned int tagged14;
    unsigned int tagged18;
    unsigned int tagged1c;
} Obj_826FC910;
extern long _InterlockedExchangeAdd(long volatile *, long);
extern char lbl_8200D398[];
extern void fn_8267BE38(void *p);
extern void fn_8267C4F0(void *p);
extern void fn_8267C488(void *p);

void fn_826FC910(Obj_826FC910 *self)
{
    Ref_826FC910 *r = (Ref_826FC910 *)(self->tagged1c & ~3u);
    if (_InterlockedExchangeAdd(&r->refs, -1) - 1 == 0) {
        fn_8267BE38(r);
    }
    r = (Ref_826FC910 *)(self->tagged18 & ~3u);
    if (_InterlockedExchangeAdd(&r->refs, -1) - 1 == 0) {
        fn_8267BE38(r);
    }
    r = (Ref_826FC910 *)(self->tagged14 & ~3u);
    if (_InterlockedExchangeAdd(&r->refs, -1) - 1 == 0) {
        fn_8267BE38(r);
    }
    if (self->child != 0) {
        fn_8267C4F0(self->child);
    }
    self->vt = lbl_8200D398;
    fn_8267C488(self);
}
