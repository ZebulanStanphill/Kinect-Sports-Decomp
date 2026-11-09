extern void *lbl_8320A754;
extern int lbl_8320A758;
extern void fn_82823500(void *a, void *b, void *c);

/* The fourth argument (r6) is unused: file/line arrive in r7/r8. */
void fn_82822928(void *a, void *b, void *c, void *unused, void *file, int line)
{
    lbl_8320A754 = file;
    lbl_8320A758 = line;
    fn_82823500(a, b, c);
}
