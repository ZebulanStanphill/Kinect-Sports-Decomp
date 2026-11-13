typedef struct { float a, b; } Pair_8305A4C0;
extern void *fn_830572B0(unsigned int size);
extern void fn_8305BB58(void *self);
extern void fn_8305B958(void *p, float a, float b);
extern int fn_8305A548(void *obj, void *a, void *b);
extern Pair_8305A4C0 lbl_8217E478;

static __forceinline void *Construct(void *self)
{
    fn_8305BB58(self);
    fn_8305B958((char *)self + 0xc, lbl_8217E478.a, lbl_8217E478.b);
    return self;
}

int fn_8305ABE0(void **out, void *a, void *b)
{
    void *mem = fn_830572B0(0x14);
    void *obj = mem ? Construct(mem) : 0;
    *out = obj;
    if (obj == 0) {
        return 0x34;
    }
    return fn_8305A548(obj, a, b);
}
