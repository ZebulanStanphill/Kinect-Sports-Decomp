extern void *lbl_8320A754;
extern int lbl_8320A758;
extern void fn_828235F0(void *arg);

void fn_82822988(void *arg, void *file, int line)
{
    lbl_8320A754 = file;
    lbl_8320A758 = line;
    fn_828235F0(arg);
}
