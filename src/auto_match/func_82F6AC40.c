extern void fn_82F641F8(int code);
extern void fn_82F6BF88(void);
extern void fn_82F81830(void);
extern char _exitflag;
extern int lbl_8329F734;

void fn_82F6AC40(void)
{
    fn_82F6BF88();
    if (_exitflag) {
        fn_82F81830();
    }
    fn_82F641F8(lbl_8329F734);
}
