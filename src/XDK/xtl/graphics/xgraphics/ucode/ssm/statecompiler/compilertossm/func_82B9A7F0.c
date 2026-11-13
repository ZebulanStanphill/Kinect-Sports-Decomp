extern int fn_82AB7550(unsigned, int, int, int);
extern int lbl_8316E480[];

int fn_82B9A7F0(int a, int b, unsigned p, int (*cb)(unsigned, const char *, int, int, int), unsigned d)
{
    if (p != 0) {
        fn_82AB7550(p, 6, 0, 0);
    }
    if (cb != 0 && d != 0) {
        cb(d, "%s (%d) : %d\n", lbl_8316E480[8], 8, 0);
    }
    return 0;
}
