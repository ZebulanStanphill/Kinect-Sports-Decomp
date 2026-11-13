long _InterlockedDecrement(long volatile *);
extern void fn_8265CA20(void *);
extern char lbl_82027424[];

typedef struct Ref_828E60C0 Ref_828E60C0;
typedef struct {
    void *f0;
    void *f4;
    void (*release)(Ref_828E60C0 *);
} RefVt_828E60C0;
struct Ref_828E60C0 {
    RefVt_828E60C0 *vt;
    int f4;
    long count;
};

typedef struct {
    void *vt;
    int f4;
    int f8;
    Ref_828E60C0 *ref;
} Obj_828E60C0;

static __forceinline void Dec_828E60C0(Ref_828E60C0 *r)
{
    if (_InterlockedDecrement(&r->count) == 0)
        r->vt->release(r);
}

static __forceinline void Release_828E60C0(Ref_828E60C0 **p)
{
    if (*p != 0)
        Dec_828E60C0(*p);
}

Obj_828E60C0 *fn_828E60C0(Obj_828E60C0 *self, unsigned int flags)
{
    self->vt = lbl_82027424;
    Release_828E60C0(&self->ref);
    if ((flags & 1) != 0) {
        fn_8265CA20(self);
    }
    return self;
}
