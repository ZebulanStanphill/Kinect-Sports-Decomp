extern unsigned fn_82A264D0(int, int, int, int, int, void *, void *);
extern int fn_82A1E988(int, void *, int, int *, int);
extern int fn_82A26568(int, const char *, void *, int, int *, int, int);
extern void fn_82A264C8(const char *, int);
extern int fn_82E1F9D0(int, const char *);

int fn_82E1FA90(int a, int b)
{
    int r;
    unsigned r0;
    unsigned v;
    unsigned cnt;
    int h;
    char t[4];
    char buf[0x134];

    r0 = fn_82A264D0(b, 1, 1, 0, 1, t, &h);
    if (r0 != 0) {
        return r0;
    }
    r = fn_82A1E988(h, buf, 0x134, (int *)&cnt, 0);
    if (r == 0 && cnt == 1) {
        v = 0;
        r = fn_82A26568(b, "Vince", buf, 3, (int *)&v, 0, 0);
        if (v == 2) {
            r = fn_82E1F9D0(a, "Vince:\\VinceGameTimer.dat");
        }
    }
    fn_82A264C8("Vince", 0);
    return r;
}
