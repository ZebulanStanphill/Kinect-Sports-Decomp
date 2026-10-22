typedef unsigned int uint;
extern uint *fn_82BA0FD8(int size, int arg);
extern void fn_82BCFA58(int param_1, int node, uint *buf);

void fn_82BCFC38(int param_1)
{
    int iVar1;
    int iVar2;
    uint *puVar3;
    int i;

    puVar3 = fn_82BA0FD8(0x400, *(int *)(*(int *)(param_1 + 0xc) + 0x5b0));
    for (iVar1 = *(int *)(param_1 + 0x88); *(int *)(iVar1 + 8) != 0; iVar1 = *(int *)(iVar1 + 8)) {
        for (i = 0; i < puVar3[0]; i++) {
            puVar3[i + 2] = 0;
        }
        for (iVar2 = *(int *)(iVar1 + 0x1c); *(int *)(iVar2 + 8) != 0; iVar2 = *(int *)(iVar2 + 8)) {
            if ((*(uint *)(iVar2 + 0xe4) & 1) != 0) {
                fn_82BCFA58(param_1, iVar2, puVar3);
            }
        }
    }
}
