extern unsigned int lbl_82007120[];

unsigned int *fn_826A86A8(unsigned int *param_1, unsigned int param_2)
{
    if (param_1[1] != 0) {
        fn_8267C4F0(param_1[1]);
    }
    *param_1 = (unsigned int)lbl_82007120;
    if ((param_2 & 1) != 0) {
        fn_8265CA20(param_1);
    }
    return param_1;
}
