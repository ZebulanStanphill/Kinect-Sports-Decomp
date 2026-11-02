extern void fn_82230300(void *p, int a, int b);
extern void fn_82237B78(void *p);
extern int lbl_83295E98[];

void fn_8313F048(void)
{
    fn_82230300(lbl_83295E98 + 9, 1, 0);
    fn_82237B78(lbl_83295E98);
    lbl_83295E98[0] = 0;
    lbl_83295E98[1] = 0;
    lbl_83295E98[2] = 0;
}
