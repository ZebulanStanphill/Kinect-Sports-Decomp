typedef void (*Cb_82B9A880)(void *ctx, const char *fmt, int a, int b, int c, int d);
extern int fn_82AB7550(void *p, int op, int a, int b);
extern int lbl_8316E480[];

int fn_82B9A880(void *obj, int n, void *p, Cb_82B9A880 cb, void *ctx)
{
    if (p != 0) {
        fn_82AB7550(p, 7, n, 0);
    }
    if (cb != 0 && ctx != 0) {
        cb(ctx, "%s (%d) %d : %d\n", lbl_8316E480[10], 10, n, 0);
    }
    return 0;
}
