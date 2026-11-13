typedef struct { float a, b; } Pair_83058DF8;
extern void *fn_830572B0(unsigned int size);
extern void fn_8305BB58(void *self);
extern void fn_8305B958(void *p, float a, float b);
extern int fn_83058E80(void *obj, void *a, void *b);
extern Pair_83058DF8 lbl_8217E378;

static __forceinline void *Construct(void *self)
{
    fn_8305BB58(self);
    fn_8305B958((char *)self + 0xc, lbl_8217E378.a, lbl_8217E378.b);
    return self;
}

int fn_830594F0(void **out, void *a, void *b)
{
    void *mem = fn_830572B0(0x14);
    void *obj = mem ? Construct(mem) : 0;
    *out = obj;
    if (obj == 0) {
        return 0x34;
    }
    return fn_83058E80(obj, a, b);
}
