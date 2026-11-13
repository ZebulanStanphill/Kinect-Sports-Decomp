typedef struct Ref_8276A800 { int pad; long refs; } Ref_8276A800;
typedef struct Obj_8276A800 {
    void *vt;
    int p4;
    void *child;           /* 0x08 */
    unsigned int tagged;   /* 0x0C */
} Obj_8276A800;
extern long _InterlockedExchangeAdd(long volatile *, long);
extern void fn_8267BE38(void *p);
extern void fn_8267C4F0(void *p);
extern void fn_8267C488(void *p);

void fn_8276A800(Obj_8276A800 *self)
{
    Ref_8276A800 *r = (Ref_8276A800 *)(self->tagged & ~3u);
    if (_InterlockedExchangeAdd(&r->refs, -1) - 1 == 0) {
        fn_8267BE38(r);
    }
    if (self->child != 0) {
        fn_8267C4F0(self->child);
    }
    fn_8267C488(self);
}
