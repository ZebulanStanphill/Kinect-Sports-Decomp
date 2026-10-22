extern int fn_8225C590();
extern int fn_8225D388();
extern int fn_8225D8B8();
extern char *fn_8225DA18();

void fn_82486018(int param_1, unsigned int param_2, unsigned int param_3)
{
    int uVar1;
    char *iVar2;

    uVar1 = fn_8225C590();
    param_1 = param_2 * 0x420 + param_1;
    if (*(int *)(param_1 + 0x838) == 1 && param_2 != param_3 &&
        (iVar2 = fn_8225DA18(uVar1, *(int *)(param_1 + 0x83c))) != 0 &&
        *(unsigned char *)(iVar2 + 0xd8) != 0) {
        fn_8225D8B8(uVar1, iVar2);
        fn_8225D388(uVar1, *(int *)(param_1 + 0x83c));
    }
    *(int *)(param_1 + 0x838) = 4;
}
