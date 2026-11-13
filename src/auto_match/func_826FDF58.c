typedef struct Ref_826FDF58 { int pad; long refs; } Ref_826FDF58;
typedef struct Count_826FDF58 { int count; } Count_826FDF58;
typedef struct Obj_826FDF58 {
    void *vtable;
    int f4;
    unsigned int tagged8;
    int fC;
    unsigned int tagged10;
    int f14;
    void *f18;
    Count_826FDF58 *f1C;
} Obj_826FDF58;
extern long _InterlockedExchangeAdd(long volatile *, long);
extern void fn_8267BE38(void *p);
extern void fn_826C6368(void *p);
extern void fn_8267C498(void *p);
extern void fn_8267C488(void *p);
extern char lbl_8200DDC4[];

static __forceinline void Dec_826FDF58(Count_826FDF58 *c)
{
    if (--c->count == 0) {
        fn_826C6368(c);
        fn_8267BE38(c);
    }
}

static __forceinline void Release_826FDF58(Count_826FDF58 **p)
{
    if (*p != 0)
        Dec_826FDF58(*p);
}

void fn_826FDF58(Obj_826FDF58 *self)
{
    Ref_826FDF58 *r;

    self->vtable = lbl_8200DDC4;
    Release_826FDF58(&self->f1C);
    if (self->f18 != 0) {
        fn_8267C498(self->f18);
    }
    r = (Ref_826FDF58 *)(self->tagged10 & ~3u);
    if (_InterlockedExchangeAdd(&r->refs, -1) - 1 == 0) {
        fn_8267BE38(r);
    }
    r = (Ref_826FDF58 *)(self->tagged8 & ~3u);
    if (_InterlockedExchangeAdd(&r->refs, -1) - 1 == 0) {
        fn_8267BE38(r);
    }
    fn_8267C488(self);
}
