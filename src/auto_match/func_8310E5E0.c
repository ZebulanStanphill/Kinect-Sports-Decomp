extern int fn_8235A3B8();
extern void fn_8313CAF8(void);
extern void fn_8313C000(void);
extern void fn_822D1C60(void);
extern void fn_822C66C0(void *a, const char *b, void (*c)(void));
extern int atexit(void (*func)(void));
extern unsigned int lbl_83298F5C;
extern char lbl_83298EF8[];
extern struct { void *a; const char *b; } lbl_83285E8C;

void fn_8310E5E0(void)
{
    if ((lbl_83298F5C & 1) == 0) {
        lbl_83298F5C |= 1;
        fn_8235A3B8();
        atexit(fn_8313CAF8);
    }
    lbl_83285E8C.a = lbl_83298EF8;
    lbl_83285E8C.b = "VolleyballSportsmanMindStateMan";
    fn_822C66C0(lbl_83298EF8, "VolleyballSportsmanMindStateMan", fn_822D1C60);
    atexit(fn_8313C000);
}
