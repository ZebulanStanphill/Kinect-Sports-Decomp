extern void fn_8239FF60(void *p, int n);
extern void fn_82508078(void *p, const char *s, int n);
typedef struct S { char pad[0xa4]; void *xa4; char p2[0x178-0xa8]; int x178; char p3[0x260-0x17c]; unsigned int flags; char p4[0x29c-0x264]; int x29c; char p5[0x2dc-0x2a0]; void *x2dc; } S;

void fn_82395BA8(S *p)
{
    unsigned int *f;
    p->x29c = 1;
    if (p->x178 == 0) {
        fn_82508078(p->xa4, "prematch_before_match", 0);
    }
    f = &p->flags;
    *f |= 0x1000;
    fn_8239FF60(p->x2dc, 0x13);
}
