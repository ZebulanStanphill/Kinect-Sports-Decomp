typedef struct { char pad[0x40]; int sub; char pad2[0x14]; int x; } S;
extern int fn_82FABF68(S *p, int a, int b);
extern void fn_82FAD100(void *p);
extern int fn_82FAE140(int x);
extern void fn_82FB3AE8(S *p, int a, int b, int n, int d);
void fn_82FB3CE0(S *p, int a, int b, int d)
{
    fn_82FAD100(&p->sub);
    if (fn_82FABF68(p, a, b) == 1)
        fn_82FB3AE8(p, a, b, -fn_82FAE140(p->x), d);
}
