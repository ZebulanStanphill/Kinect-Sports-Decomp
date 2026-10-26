extern unsigned char fn_82FA4EB8(void);
extern void fn_82FA57F0(int h);
extern int lbl_831BC770;

void fn_82FEBE80(void)
{
    if (fn_82FA4EB8() && lbl_831BC770 != -1) {
        fn_82FA57F0(lbl_831BC770);
        lbl_831BC770 = -1;
    }
}
