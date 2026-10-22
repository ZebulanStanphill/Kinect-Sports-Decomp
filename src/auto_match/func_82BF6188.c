extern void fn_82BE5240(int, int, char *);
extern void fn_82BE64E0(int, int);
extern int fn_82BE6B58(int, unsigned int, int, int);
extern int fn_82BF5790(int, unsigned int, unsigned int, int, int, int);
extern char lbl_82196582[];

int fn_82BF6188(int param_1, unsigned int param_2, unsigned int param_3, unsigned int param_4,
                int param_5, int param_6, int param_7)
{
    if (param_2 == 0 || param_3 == 0 || param_4 == 0) {
        fn_82BE5240(param_1, 0x44c, lbl_82196582);
    } else if (fn_82BE6B58(param_1, param_2, 0x100, 0x400) != 0 &&
               fn_82BF5790(param_1, param_3, param_4, param_5, param_6, param_7) != 0) {
        fn_82BE64E0(param_1, 2);
        return 1;
    }
    return 0;
}
