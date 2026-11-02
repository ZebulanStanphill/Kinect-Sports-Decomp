extern void fn_82230300(void *p, int a, int b);
extern void fn_82237B78(void *p);
extern int lbl_83283040[];

void fn_8313AB10(void)
{
    fn_82230300(lbl_83283040 + 9, 1, 0);
    fn_82237B78(lbl_83283040);
    lbl_83283040[0] = 0;
    lbl_83283040[1] = 0;
    lbl_83283040[2] = 0;
}
