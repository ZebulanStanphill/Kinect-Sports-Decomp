extern void fn_8265CA20(void *p);
extern char lbl_8217D040[];
extern char lbl_8217D360[];
extern int lbl_83265044;

void **fn_8304FBA0(void **param_1, unsigned int param_2)
{
    lbl_83265044 = 0;
    param_1[1] = lbl_8217D360;
    param_1[0] = lbl_8217D040;
    if (param_2 & 1) {
        fn_8265CA20(param_1);
    }
    return param_1;
}
