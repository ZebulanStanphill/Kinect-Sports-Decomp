typedef struct Ref_826E7638 { int pad; long refs; } Ref_826E7638;
typedef struct Obj_826E7638 {
    void *vt;
    int pad4[3];
    void *child;           /* 0x10 */
    int p14;
    unsigned int tagged;   /* 0x18 */
} Obj_826E7638;
extern long _InterlockedExchangeAdd(long volatile *, long);
extern char lbl_8200D6D0[];
extern char lbl_82005700[];
extern void fn_8267BE38(void *p);
extern void fn_8267C4F0(void *p);

void fn_826E7638(Obj_826E7638 *self)
{
    Ref_826E7638 *r;
    self->vt = lbl_8200D6D0;
    r = (Ref_826E7638 *)(self->tagged & ~3u);
    if (_InterlockedExchangeAdd(&r->refs, -1) - 1 == 0) {
        fn_8267BE38(r);
    }
    if (self->child != 0) {
        fn_8267C4F0(self->child);
    }
    self->vt = lbl_82005700;
}
