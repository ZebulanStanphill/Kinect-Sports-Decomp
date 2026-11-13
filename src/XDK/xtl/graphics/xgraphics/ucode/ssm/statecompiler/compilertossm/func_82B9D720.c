typedef void (*Cb_82B9D720)(void *ctx, const char *fmt, int name, int id, int n, int a, int b, int c);
extern int fn_82AB71F0(void *obj, int key, int n);
extern int lbl_8316E480[];

int fn_82B9D720(void *obj, int n, int *a, int *b, int *c, Cb_82B9D720 cb, void *ctx)
{
    int va = fn_82AB71F0(obj, 0x52, n);
    int vb = fn_82AB71F0(obj, 0x53, n);
    int vc = fn_82AB71F0(obj, 0x54, n);
    *a = va;
    *b = vb;
    *c = vc;
    if (cb != 0 && ctx != 0) {
        cb(ctx, "%s (%d) %d : %d, %d, %d\n", lbl_8316E480[12], 0xc, n, *a, *b, vc);
    }
    return 1;
}
