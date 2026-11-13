extern void fn_827FD778(int a, int b, int c, float x, int d);
extern void fn_827FA968(int a, int b, void *c, float x);

void fn_827FD9C8(int a, int b, int c, int d, float x, int e, void *g)
{
    fn_827FD778(a, c, e, x, 0);
    if (g != 0) {
        fn_827FA968(b, d, g, x);
    }
}
