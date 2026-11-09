typedef struct { float a, b; } Pair_8305A4C0;
extern void fn_8305BB58(void *self);
extern void fn_8305B958(void *p, float a, float b);
extern Pair_8305A4C0 lbl_8217E478;

void *fn_8305A4C0(void *self)
{
    fn_8305BB58(self);
    fn_8305B958((char *)self + 0xc, lbl_8217E478.a, lbl_8217E478.b);
    return self;
}
