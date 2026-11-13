extern int fn_8262FFB0();
extern int fn_82A93F08();


void fn_82A93F70(int param_1,unsigned __int64 param_2)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  
  iVar2 = fn_8262FFB0();
  iVar1 = (int)param_2;
  if (iVar2 < 7) {
    if (iVar2 == 6) {
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + iVar1;
      return;
    }
    if (iVar2 == 1) {
      uVar3 = *(unsigned int *)(param_1 + 0x18) & 3 |
              (*(unsigned int *)(param_1 + 0x18) & 0xfffffffc) + iVar1 & 0xfffffffc;
      goto LAB_82a94028;
    }
    if (iVar2 != 2) {
      if (iVar2 != 3) {
        return;
      }
      goto LAB_82a93ffc;
    }
  }
  else if ((iVar2 != 7) && (iVar2 != 8)) {
    if (iVar2 < 0x11) {
      return;
    }
    if (0x14 < iVar2) {
      return;
    }
LAB_82a93ffc:
    fn_82A93F08(param_1,param_2,
                  -(unsigned __int64)((*(unsigned int *)(param_1 + 0x30) & 0xfffff000) != 0) & param_2);
    return;
  }
  uVar3 = iVar1 + *(int *)(param_1 + 0x18);
LAB_82a94028:
  *(unsigned int *)(param_1 + 0x18) = uVar3;
  return;
}

