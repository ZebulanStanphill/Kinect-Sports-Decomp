extern int fn_82CE0AD8(int s, char *buf, int len, int flags);
extern unsigned int fn_82CE0BB0(void);

void fn_8245A358(int param_1, char *param_2, int *param_3, unsigned int *param_4)
{
    int iVar1;
    int iVar2;
    unsigned int err;

    iVar2 = *param_3;
    if (iVar2 > 0) {
        if (*(int *)(param_1 + 0x4fc) == 0 || (iVar1 = *(int *)(param_1 + 0x500), iVar1 <= 0) ||
            iVar2 < iVar1) {
            iVar1 = iVar2;
        }
        if (iVar1 > 0) {
            iVar2 = fn_82CE0AD8(*(int *)(param_1 + 0x20), *param_4 + param_2, iVar1, 0);
            if (iVar2 == -1) {
                err = fn_82CE0BB0();
                if (err != 0x2733 && err != 0x2747) {
                    *(int *)(param_1 + 0x84) = 0xf;
                }
            } else {
                *param_3 = *param_3 - iVar2;
                *param_4 = *param_4 + iVar2;
            }
        }
    }
}
