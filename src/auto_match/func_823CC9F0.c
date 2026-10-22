extern void fn_82359698(int a, int b);
extern void fn_8236C428(int a);
extern void fn_823E69D0(int a, int b);
extern void fn_824FFDC8(int a, int b, int c);
extern float lbl_821CC160;

void fn_823CC9F0(int param_1, unsigned char param_2, int param_3)
{
    int p;
    float f;

    fn_82359698(param_1, 2);
    if (param_2) {
        fn_8236C428(param_1);
        if (*(int *)(param_1 + 0x41c) != 0 || *(int *)(param_1 + 0x420) != -1) {
            *(int *)(param_1 + 0x420) = -1;
            *(int *)(param_1 + 0x41c) = 0;
            f = lbl_821CC160;
            *(int *)(param_1 + 0x424) = -1;
            *(float *)(param_1 + 0x428) = f;
        }
        fn_823E69D0(param_1, param_3);
    }
    p = *(int *)(param_1 + 0xe10);
    fn_824FFDC8(p, 0, 0);
    fn_824FFDC8(p, 1, 0);
}
