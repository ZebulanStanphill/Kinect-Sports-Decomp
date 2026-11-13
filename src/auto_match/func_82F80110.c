extern int fn_82F812C0();


unsigned __int64 fn_82F80110(int param_1,unsigned int param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  int iVar4;
  
  if (param_1 == 0) {
    fn_82F812C0();
  }
  uVar1 = *(unsigned int *)(param_1 + 0x14);
  if (uVar1 == 0) {
    fn_82F812C0();
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    fn_82F812C0();
  }
  uVar2 = 0;
  if (uVar1 != 0) {
    iVar4 = *(int *)(param_1 + 0x18);
    iVar3 = 0;
    do {
      if (param_2 == *(unsigned int *)(iVar3 + iVar4)) {
        return (unsigned __int64)*(unsigned int *)(uVar2 * 8 + iVar4 + 4);
      }
      if (param_2 < *(unsigned int *)(iVar3 + iVar4)) {
        if (uVar2 == 0) {
          return 0xffffffffffffffff;
        }
        iVar4 = uVar2 * 8 + iVar4;
        goto LAB_82f80190;
      }
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + 8;
    } while (uVar2 < uVar1);
  }
  iVar4 = uVar1 * 8 + *(int *)(param_1 + 0x18);
LAB_82f80190:
  return (unsigned __int64)*(unsigned int *)(iVar4 + -4);
}

