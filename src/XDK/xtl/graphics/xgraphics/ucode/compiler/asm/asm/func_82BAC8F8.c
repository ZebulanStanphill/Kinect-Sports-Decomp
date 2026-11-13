extern int fn_82AB1538(int a, int b, int c, int d);
extern int fn_82BC7368(int a);
extern int lbl_820E2FB8[];

typedef struct S {
    char pad0[0xc];
    int c;
    char pad10[0x38 - 0x10];
    int n;
    char pad3c[0x70 - 0x3c];
    int a;
    int b;
} S;

void fn_82BAC8F8(S *s, int param_2)
{
    int x;
    int y;
    int c;

    x = fn_82BC7368(s->a);
    y = fn_82BC7368(s->b);
    fn_82AB1538(x, 1, 0xd, s->n + 1);
    c = s->c;
    fn_82AB1538(c, 1, 0xd, y);
    fn_82AB1538(c, 0xe, 3, 0);
    fn_82AB1538(c, 0x11, 5, param_2);
    fn_82AB1538(c, 0x16, 1, 0);
    fn_82AB1538(c, 0x17, 0xc, 0);
    fn_82AB1538(c, 0x23, 2, 0);
    fn_82AB1538(c, 0x25, 6, 0);
    fn_82AB1538(c, 0x2b, 1, 0);
    fn_82AB1538(c, 0x2c, 1, 0);
    fn_82AB1538(c, 0x2d, 4, lbl_820E2FB8[13]);
    s->c += 6;
    s->n++;
}
