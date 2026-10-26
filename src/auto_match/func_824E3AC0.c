typedef struct Sub { int x0; void *obj; int x8; } Sub;
typedef struct Inner { char pad[0x10]; Sub sub; } Inner;
typedef struct Outer { char pad[0xd54]; Inner *in; } Outer;
extern void fn_8229E7D0(Outer *p);
extern void fn_8229E838(void);
extern void fn_8234FC08(void *o);
extern void fn_8265CA20(void *o);

void fn_824E3AC0(Outer *p)
{
    Sub *s;
    void *o;
    fn_8229E7D0(p);
    fn_8229E838();
    s = &p->in->sub;
    o = s->obj;
    if (o != 0) {
        fn_8234FC08(o);
        fn_8265CA20(o);
        s->obj = 0;
        s->x8 = 0;
    }
}
