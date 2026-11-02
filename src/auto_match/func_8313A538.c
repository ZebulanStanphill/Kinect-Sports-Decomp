extern void fn_82230300(void *p, int a, int b);
extern void fn_82237B78(void *p);
extern int lbl_832829A8[];

void fn_8313A538(void)
{
    fn_82230300(lbl_832829A8 + 9, 1, 0);
    fn_82237B78(lbl_832829A8);
    lbl_832829A8[0] = 0;
    lbl_832829A8[1] = 0;
    lbl_832829A8[2] = 0;
}
