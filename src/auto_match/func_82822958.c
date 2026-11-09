extern void *lbl_8320A754;
extern int lbl_8320A758;
extern void fn_8281C1F8(void *a, void *b, void *c, void *d, void *e);

void fn_82822958(void *a, void *b, void *c, void *d, void *e, void *file, int line)
{
    lbl_8320A754 = file;
    lbl_8320A758 = line;
    fn_8281C1F8(a, b, c, d, e);
}
