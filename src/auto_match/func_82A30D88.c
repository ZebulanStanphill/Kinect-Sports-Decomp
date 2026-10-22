extern int fn_82A2C4A8();
extern int fn_82A2F770();
extern int fn_82A30700();
extern void RtlEnterCriticalSection();
extern void RtlLeaveCriticalSection();
extern void IoRemoveShareAccess();
extern void IoCompleteRequest();

void fn_82A30D88(int param_1, int param_2)
{
    int iVar1;
    int iVar2;
    int *piVar3;
    int iVar4;

    iVar1 = *(int *)(*(int *)(param_2 + 0x50) + 0x18);
    iVar2 = *(int *)(iVar1 + 8);
    RtlEnterCriticalSection(param_1);
    IoRemoveShareAccess(iVar1, iVar2 + 0x38);
    if (*(int *)(param_1 + 0x88) == 0 && *(unsigned int *)(iVar2 + 0x10) == 1) {
        if (*(unsigned char *)(iVar2 + 0x35) & 8) {
            if (fn_82A30700(param_1, iVar2, 1) >= 0) {
                if ((*(unsigned char *)(iVar2 + 0x35) & 2) == 0 && *(unsigned int *)(iVar2 + 0x14) != 0) {
                    fn_82A2F770(param_1, *(int *)(iVar2 + 0x20), 0, 0);
                }
                iVar4 = *(int *)(iVar2 + 0x48);
                piVar3 = *(int **)(iVar2 + 0x4c);
                *piVar3 = iVar4;
                *(int **)(iVar4 + 4) = piVar3;
                fn_82A2C4A8(*(int *)(iVar2 + 8));
                *(int *)(iVar2 + 8) = 0;
            }
        } else if (*(unsigned char *)(iVar2 + 0x35) & 0x10) {
            fn_82A30700(param_1, iVar2, 0);
        }
    }
    *(unsigned char *)(iVar1 + 2) |= 0x10;
    RtlLeaveCriticalSection(param_1);
    *(int *)(param_2 + 0x10) = 0;
    IoCompleteRequest(param_2, 1);
}
