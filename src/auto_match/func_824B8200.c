extern int fn_8225F160();
extern unsigned char fn_823AB478();
extern int fn_8245AE18();
extern int fn_8245AF50();
extern int fn_8245AFC0();
extern int fn_8245B050();
extern int fn_8245B100();
extern int fn_8245B168();
extern int fn_8245B1F0();
extern int fn_824B70F0();
extern unsigned char fn_82512508();
extern unsigned char fn_828EA610();

void fn_824B8200(int param_1, unsigned int param_2, unsigned int param_3, unsigned int param_4,
                 unsigned int param_5, unsigned int param_6)
{
    int iVar1;
    unsigned int mode;
    unsigned short tmp;
    unsigned char c;

    if ((int)param_3 > 1 || (int)param_4 > 0) {
        mode = 4;
    } else {
        mode = param_2;
    }
    iVar1 = fn_8225F160();
    *(unsigned int *)(iVar1 + 0x18) = 4;
    *(unsigned int *)(iVar1 + 0x1c) = 0;
    *(unsigned int *)(iVar1 + 0x28) = mode;
    *(unsigned int *)(iVar1 + 0x20) = param_5;
    *(unsigned int *)(iVar1 + 0x24) = param_6;
    if (!fn_828EA610(param_1) && fn_82512508(param_1)) {
        iVar1 = fn_8245AE18();
        if (fn_8245B1F0() != 0) {
            fn_8245AF50(iVar1, 7);
            if (*(int *)(iVar1 + 0x14) == 0) {
                *(int *)(iVar1 + 0x14) = 1;
            }
            c = fn_823AB478(param_1);
            fn_8245B050(iVar1, c, 4);
            fn_8245B050(iVar1, mode & 0xff, 4);
            fn_8245B050(iVar1, param_3 & 0xff, 4);
            fn_8245B050(iVar1, param_4 & 0xff, 4);
            fn_8245B100(iVar1);
            tmp = (unsigned short)param_5;
            fn_8245B168(iVar1, &tmp, 2);
            tmp = (unsigned short)param_6;
            fn_8245B168(iVar1, &tmp, 2);
            fn_824B70F0();
            fn_8245AFC0(iVar1, 0, 0);
        }
    }
}
