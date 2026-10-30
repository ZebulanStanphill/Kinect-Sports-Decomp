typedef struct S { char pad[0x2c]; void *a; char pad2[8]; void *b; } S;
extern void fn_82A4F4E0(void *p);
extern void fn_82A40018(S *s);

void fn_82A761F8(S *s)
{
    if (s->a != 0) {
        fn_82A4F4E0(s->a);
        s->a = 0;
    }
    if (s->b != 0) {
        fn_82A4F4E0(s->b);
        s->b = 0;
    }
    fn_82A40018(s);
}
