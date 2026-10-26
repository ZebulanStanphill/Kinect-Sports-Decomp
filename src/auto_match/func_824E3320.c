typedef struct { int f0, f4; void *f8; char fc[4]; } A;
extern A *lbl_832975B0;
extern void *lbl_83297800;
extern A *fn_82250A18(void);
extern void *fn_825117D8(void);
extern void fn_82511700(void *m);
extern void fn_824C0640(void *p);
extern void fn_82230E20(A *a, void *p);

static A *get_a(void) { return lbl_832975B0 ? lbl_832975B0 : fn_82250A18(); }
static void *get_m(void) { return lbl_83297800 ? lbl_83297800 : fn_825117D8(); }

void fn_824E3320(void)
{
    A *a = get_a();
    fn_82511700(get_m());
    fn_824C0640(a->fc);
    if (a->f8 != 0)
        fn_82230E20(a, a->f8);
}
