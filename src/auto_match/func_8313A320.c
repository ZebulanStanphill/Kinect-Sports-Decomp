extern void fn_82230300(void *p, int a, int b);
extern void fn_82237B78(void *p);
extern int lbl_83282698[];

void fn_8313A320(void)
{
    fn_82230300(lbl_83282698 + 9, 1, 0);
    fn_82237B78(lbl_83282698);
    lbl_83282698[0] = 0;
    lbl_83282698[1] = 0;
    lbl_83282698[2] = 0;
}
