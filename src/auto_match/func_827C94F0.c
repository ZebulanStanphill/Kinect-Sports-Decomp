typedef int (*code)();

void fn_827C94F0(int param_1, int param_2, int param_3, int param_4)
{
    int iVar1;
    unsigned int uVar2;

    iVar1 = *(int *)(param_1 + 0x184);
    if (*(unsigned char *)(iVar1 + 0x30) == 0) {
        if ((*(code *)(*(int *)(param_1 + 0x188) + 0xc))(param_1, iVar1 + 8) == 0) {
            return;
        }
        *(unsigned char *)(iVar1 + 0x30) = 1;
    }
    uVar2 = *(unsigned int *)(param_1 + 0x118);
    (*(code *)(*(int *)(param_1 + 0x18c) + 4))(param_1, iVar1 + 8, (unsigned int *)(iVar1 + 0x34), uVar2, param_2, param_3, param_4);
    if (*(unsigned int *)(iVar1 + 0x34) >= uVar2) {
        *(unsigned char *)(iVar1 + 0x30) = 0;
        *(unsigned int *)(iVar1 + 0x34) = 0;
    }
}
