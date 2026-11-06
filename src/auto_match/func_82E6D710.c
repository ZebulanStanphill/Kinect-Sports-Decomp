typedef struct Obj_82E6D710 { char pad[0x7630]; int skipLast; } Obj_82E6D710;

extern void fn_82E6D500(int a, int b, int c, int d, int e, int f, int g, int h, int *i, int j);

void fn_82E6D710(Obj_82E6D710 *o, int h0, int h1, int h2, int h3,
                 int c0, int d0, int c1, int d1, int c2, int d2, int c3, int d3,
                 int e0, int f0, int e1, int f1, int e2, int f2, int e3, int f3,
                 int u22, int j, int u24, int *out, int a, int g, int b)
{
    fn_82E6D500(a, b, c0, d0, e0, f0, g, h0, out, j);
    fn_82E6D500(a, b, c1, d1, e1, f1, g, h1, out + 1, j);
    fn_82E6D500(a, b, c2, d2, e2, f2, g, h2, out + 2, j);
    if (o->skipLast == 0) {
        fn_82E6D500(a, b, c3, d3, e3, f3, g, h3, out + 3, j);
    }
}
