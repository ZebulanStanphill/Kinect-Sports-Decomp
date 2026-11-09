extern void *lbl_8320A754;
extern int lbl_8320A758;
extern void fn_82823560(void *a, void *b);

void fn_82822970(void *a, void *b, void *file, int line)
{
    lbl_8320A754 = file;
    lbl_8320A758 = line;
    fn_82823560(a, b);
}
