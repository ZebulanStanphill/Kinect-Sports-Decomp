extern void fn_827FD888(int a, int b, int c, float x, int d);
extern void fn_827FAB20(int a, int b, void *c, float x);

void fn_827FDA20(int a, int b, int c, int d, float x, int e, void *g)
{
    fn_827FD888(a, c, e, x, 0);
    if (g != 0) {
        fn_827FAB20(b, d, g, x);
    }
}
