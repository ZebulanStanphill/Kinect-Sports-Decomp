long _InterlockedIncrement(long volatile *);

typedef struct Rep_828E7670 { int pad; long uses; } Rep_828E7670;
typedef struct Ptr_828E7670 {
    void *ptr;
    Rep_828E7670 *rep;
} Ptr_828E7670;

typedef struct Obj_828E7670 {
    char pad[0x10];
    Ptr_828E7670 source;   /* 0x10 */
} Obj_828E7670;

extern void fn_822315A0(Rep_828E7670 *);
extern void *fn_8240D928(void *p);
extern void *fn_823AA970(void *p);
extern void *fn_828DF8D0(void *a, void *b);
extern void fn_828DF3C8(Obj_828E7670 *self, void *v);

static __forceinline void Swap_828E7670(Ptr_828E7670 *a, Ptr_828E7670 *b)
{
    Rep_828E7670 *r = a->rep;
    void *p = a->ptr;
    a->rep = b->rep;
    a->ptr = b->ptr;
    b->rep = r;
    b->ptr = p;
}

void fn_828E7670(Obj_828E7670 *self, Ptr_828E7670 *src)
{
    void *p;
    {
        Ptr_828E7670 tmp;
        tmp.rep = src->rep;
        tmp.ptr = src->ptr;
        if (tmp.rep != 0)
            _InterlockedIncrement(&tmp.rep->uses);
        Swap_828E7670(&self->source, &tmp);
        if (tmp.rep != 0)
            fn_822315A0(tmp.rep);
    }
    p = src->ptr;
    fn_828DF3C8(self, fn_828DF8D0(fn_823AA970(p), fn_8240D928(p)));
}
