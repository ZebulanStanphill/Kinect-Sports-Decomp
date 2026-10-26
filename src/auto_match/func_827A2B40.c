extern void fn_8279C708(void *obj, int v);
extern void fn_8279C7A0(void *obj, int v);

typedef struct S {
    char pad0[8];
    void *obj;
    char pad1[0x58 - 0xc];
    int a1;
    int a0;
    int b1;
    int b0;
    unsigned short flags;
} S;

void fn_827A2B40(S *s)
{
    int v;
    if (s->flags & 0x400) {
        fn_8279C7A0(s->obj, s->a0);
        v = s->a1;
    } else {
        fn_8279C7A0(s->obj, s->b0);
        v = s->b1;
    }
    fn_8279C708(s->obj, v);
}
