void __dcbt(int offset, const void *base);
extern char lbl_82079800[];
extern void fn_82A1DDC0(void *dst, void *src, int n);
extern int fn_829E69B8(void *a, void *c);
extern void fn_829E6D00(void *b, void *c, void *a);

void fn_829E71F0(void *a, void *b, void *c)
{
    fn_82A1DDC0(b, a, 0x8700);
    __dcbt(0, lbl_82079800);
    __dcbt(0, lbl_82079800 + 0x40);
    if (fn_829E69B8(a, c) == 0)
        fn_829E6D00(b, c, a);
}
