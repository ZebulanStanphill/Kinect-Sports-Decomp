extern int fn_823BC650();
extern void fn_8313D1C0(void);
extern void fn_8313D9D8(void);
extern void fn_8242EA00(void);
extern void fn_82361920(void *a, const char *b, void (*c)(void));
extern int atexit(void (*func)(void));
extern unsigned int lbl_83298EDC;
extern char lbl_83298EC4[];
extern struct { void *a; const char *b; } lbl_8328CF90;

void fn_8311A260(void)
{
    if ((lbl_83298EDC & 1) == 0) {
        lbl_83298EDC |= 1;
        fn_823BC650();
        atexit(fn_8313D1C0);
    }
    lbl_8328CF90.a = lbl_83298EC4;
    lbl_8328CF90.b = "AthleticsSpectatorSerialiserStore";
    fn_82361920(lbl_83298EC4, "AthleticsSpectatorSerialiserStore", fn_8242EA00);
    atexit(fn_8313D9D8);
}
