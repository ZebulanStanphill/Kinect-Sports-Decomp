extern void fn_82230300(void *p, int a, int b);
extern void fn_82237B78(void *p);
extern int lbl_83283B80[];

void fn_8313B398(void)
{
    fn_82230300(lbl_83283B80 + 9, 1, 0);
    fn_82237B78(lbl_83283B80);
    lbl_83283B80[0] = 0;
    lbl_83283B80[1] = 0;
    lbl_83283B80[2] = 0;
}
