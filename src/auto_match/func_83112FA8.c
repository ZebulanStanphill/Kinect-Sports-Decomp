extern int fn_823BC650();
extern void fn_8313D1C0(void);
extern void fn_8313CB60(void);
extern void fn_82360EE8(void);
extern void fn_82361920(void *a, const char *b, void (*c)(void));
extern int atexit(void (*func)(void));
extern unsigned int lbl_83298EDC;
extern char lbl_83298EC4[];
extern struct { void *a; const char *b; } lbl_83288BB8;

void fn_83112FA8(void)
{
    if ((lbl_83298EDC & 1) == 0) {
        lbl_83298EDC |= 1;
        fn_823BC650();
        atexit(fn_8313D1C0);
    }
    lbl_83288BB8.a = lbl_83298EC4;
    lbl_83288BB8.b = "BowlingSpectatorSerialiserStore";
    fn_82361920(lbl_83298EC4, "BowlingSpectatorSerialiserStore", fn_82360EE8);
    atexit(fn_8313CB60);
}
