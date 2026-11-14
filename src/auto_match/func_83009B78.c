extern int fn_82FEC128(int a, int b);
extern int fn_82FEC630(int a, int b);
extern char *lbl_83264300;
extern unsigned int lbl_832645A8;

void fn_83009B78(int param_1, int param_2, int param_3)
{
    if ((unsigned int)param_1 == lbl_832645A8) {
        fn_82FEC128(param_2, param_3);
    }
    else {
        fn_82FEC630(*(int *)(param_1 + 0xc), param_2);
        if (*(unsigned int *)(param_1 + 0x28) != 0 &&
            *(int *)(*(int *)(param_1 + 0x28) + 0xc) == -2) {
            lbl_83264300[0x94] = ((param_2 & 0x1f) & ~0xe) != 0;
        }
    }
}
