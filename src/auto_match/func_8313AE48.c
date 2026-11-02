extern void fn_82230300(void *p, int a, int b);
extern void fn_82237B78(void *p);
extern int lbl_83283458[];

void fn_8313AE48(void)
{
    fn_82230300(lbl_83283458 + 9, 1, 0);
    fn_82237B78(lbl_83283458);
    lbl_83283458[0] = 0;
    lbl_83283458[1] = 0;
    lbl_83283458[2] = 0;
}
