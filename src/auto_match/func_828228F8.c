extern void *lbl_8320A754;
extern int lbl_8320A758;
extern void fn_8281C108(void *a, unsigned int b, void *c, void *d);

void fn_828228F8(void *a, unsigned int b, void *c, void *d, void *file, int line)
{
    lbl_8320A754 = file;
    lbl_8320A758 = line;
    fn_8281C108(a, b, c, d);
}
