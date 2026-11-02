extern void fn_82230300(void *p, int a, int b);
extern void fn_82237B78(void *p);
extern int lbl_83283818[];

void fn_8313B120(void)
{
    fn_82230300(lbl_83283818 + 9, 1, 0);
    fn_82237B78(lbl_83283818);
    lbl_83283818[0] = 0;
    lbl_83283818[1] = 0;
    lbl_83283818[2] = 0;
}
