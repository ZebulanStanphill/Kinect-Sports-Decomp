typedef struct S { char pad[0x14]; void *p; } S;
extern void fn_822315A0(void *p);
extern void fn_828DF3B8(S *s);
extern void fn_8265CA20(void *p);

S *fn_828E6D90(S *s, unsigned int flags)
{
    if (s->p != 0)
        fn_822315A0(s->p);
    fn_828DF3B8(s);
    if (flags & 1)
        fn_8265CA20(s);
    return s;
}
