extern int fn_8235A3B8();
extern void fn_8313CAF8(void);
extern void fn_8313C960(void);
extern void fn_823396C0(void);
extern void fn_822C66C0(void *a, const char *b, void (*c)(void));
extern int atexit(void (*func)(void));
extern unsigned int lbl_83298F5C;
extern char lbl_83298EF8[];
extern struct { void *a; const char *b; } lbl_83288420;

void fn_831122D0(void)
{
    if ((lbl_83298F5C & 1) == 0) {
        lbl_83298F5C |= 1;
        fn_8235A3B8();
        atexit(fn_8313CAF8);
    }
    lbl_83288420.a = lbl_83298EF8;
    lbl_83288420.b = "AthleticsSportsmanMindStateMan";
    fn_822C66C0(lbl_83298EF8, "AthleticsSportsmanMindStateMan", fn_823396C0);
    atexit(fn_8313C960);
}
