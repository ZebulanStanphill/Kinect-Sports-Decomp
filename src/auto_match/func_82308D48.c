typedef int (*code)();
extern int fn_824CD030(int p);

void fn_82308D48(int param_1)
{
  int iVar1;
  int iVar2;
  int iVar3;
  char auStack_40 [4];
  char auStack_3c [4];
  char auStack_38 [8];
  char auStack_30 [24];

  if ((*(int *)(*(int *)(param_1 + 0x10) + 0xf98) == 0) && (*(int *)(param_1 + 0x44) == 0)) {
    iVar3 = *(int *)(*(int *)(param_1 + 0xc) + 0x24);
    iVar2 = fn_824CD030(iVar3);
    if (iVar2 != 0) {
      iVar1 = *(int *)(iVar3 + 0xf4);
      if (iVar1 != 0) {
        iVar3 = (*(code *)(*(int *)iVar1 + 8))(iVar1,auStack_30,auStack_38,auStack_3c,auStack_40);
        *(int *)(param_1 + 0x44) = iVar3;
        if (iVar3 != 0) {
          *(int *)(*(int *)(param_1 + 0x10) + 0xf98) = 1;
        }
      }
    }
  }
}
