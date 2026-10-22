typedef struct { char pad[0x50]; unsigned short count; } W;
extern int fn_82BE6720(W *w, unsigned char v, int z);
extern int fn_82BE6760(W *w, unsigned short v, int z);
extern int fn_82BE67A0(W *w, int v, int z);
extern int fn_82BE67E0(W *w, int v, int z);
extern int fn_82BE6840(W *w, double v, int z);
extern int fn_82BF4EE8(W *w, int n);

int fn_82BF5120(W *w, int a, int b, int c, int d, int e, int f, double x, unsigned short g)
{
    if (fn_82BF4EE8(w, 0x2c) != 0) {
        fn_82BE6720(w, 0xdf, 0);
        fn_82BE67A0(w, 0x2b, 0);
        fn_82BE6720(w, 0x36, 0);
        fn_82BE6720(w, a, 0);
        fn_82BE6720(w, 0x26, 0);
        fn_82BE67A0(w, b, 0);
        fn_82BE6720(w, 0x15, 0);
        fn_82BE67A0(w, c, 0);
        fn_82BE6720(w, 0x32, 0);
        fn_82BE67A0(w, d, 0);
        fn_82BE6720(w, 0x33, 0);
        fn_82BE67E0(w, e, 0);
        fn_82BE6720(w, 0x34, 0);
        fn_82BE67E0(w, f, 0);
        fn_82BE6720(w, 0x31, 0);
        fn_82BE6840(w, x, 0);
        fn_82BE6720(w, 0x46, 0);
        fn_82BE6760(w, g, 0);
        w->count++;
    }
    return 0;
}
