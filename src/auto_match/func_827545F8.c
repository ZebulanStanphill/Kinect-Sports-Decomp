typedef struct Ref_827545F8 { int pad; long refs; } Ref_827545F8;
typedef struct Count_827545F8 { int count; } Count_827545F8;
typedef struct Obj_827545F8 {
    void *vtable;
    int f4;
    char sub[0x10];
    Count_827545F8 *f18;
    unsigned int tagged1C;
    int f20;
    int f24;
    Count_827545F8 *f28;
} Obj_827545F8;
extern long _InterlockedExchangeAdd(long volatile *, long);
extern void fn_8267BE38(void *p);
extern void fn_826C6368(void *p);
extern void fn_827B0A40(void *p);
extern void fn_8267C488(void *p);
extern char lbl_820141E0[];

static __forceinline void Dec_827545F8(Count_827545F8 *c)
{
    if (--c->count == 0) {
        fn_826C6368(c);
        fn_8267BE38(c);
    }
}

static __forceinline void Release_827545F8(Count_827545F8 **p)
{
    if (*p != 0)
        Dec_827545F8(*p);
}

void fn_827545F8(Obj_827545F8 *self)
{
    Ref_827545F8 *r;

    self->vtable = lbl_820141E0;
    Release_827545F8(&self->f28);
    r = (Ref_827545F8 *)(self->tagged1C & ~3u);
    if (_InterlockedExchangeAdd(&r->refs, -1) - 1 == 0) {
        fn_8267BE38(r);
    }
    Release_827545F8(&self->f18);
    fn_827B0A40(self->sub);
    fn_8267C488(self);
}
