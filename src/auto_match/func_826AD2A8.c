extern unsigned int lbl_8200C4D4[];

unsigned int *fn_826AD2A8(unsigned int *param_1, unsigned int param_2)
{
    if (param_1[1] != 0) {
        fn_826824B0(param_1[1]);
    }
    *param_1 = (unsigned int)lbl_8200C4D4;
    if ((param_2 & 1) != 0) {
        fn_8265CA20(param_1);
    }
    return param_1;
}
