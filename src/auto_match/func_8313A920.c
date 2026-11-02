extern void fn_82230300(void *p, int a, int b);
extern void fn_82237B78(void *p);
extern int lbl_83282E28[];

void fn_8313A920(void)
{
    fn_82230300(lbl_83282E28 + 9, 1, 0);
    fn_82237B78(lbl_83282E28);
    lbl_83282E28[0] = 0;
    lbl_83282E28[1] = 0;
    lbl_83282E28[2] = 0;
}
