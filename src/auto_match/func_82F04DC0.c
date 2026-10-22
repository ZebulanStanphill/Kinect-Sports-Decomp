extern void fn_82F00330(int param_1);

void fn_82F04DC0(int param_1)
{
    int tmp;
    int iVar2;

    tmp = *(int *)(param_1 + 0x5270);
    *(int *)(param_1 + 0x5270) = *(int *)(param_1 + 0x300);
    *(int *)(param_1 + 0x300) = tmp;
    fn_82F00330(param_1);
    iVar2 = *(int *)(param_1 + 0x5270);
    *(int *)(param_1 + 0x5278) = *(int *)(iVar2 + 0x40);
    *(int *)(param_1 + 0x527c) = *(int *)(iVar2 + 0x58);
    *(int *)(param_1 + 0x5280) = *(int *)(iVar2 + 0x70);
    *(int *)(param_1 + 0x8a0) = 0;
}
