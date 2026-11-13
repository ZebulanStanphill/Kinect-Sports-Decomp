extern int fn_82569980();


void fn_8260ED50(int param_1,unsigned __int64 param_2,int param_3,unsigned __int64 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_82569980(param_1,*(unsigned char *)(param_3 + 0x10));
  if (iVar1 == -1) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 0xd8) + iVar1 * 0x30 + 0x10);
  }
  if (iVar1 != 0) {
    if (param_5 == 0) {
      iVar2 = *(int *)(iVar1 + 0x1d0) + 1;
    }
    else {
      if ((param_5 != 1) && (param_5 != 3)) {
        return;
      }
      if (*(int *)(param_3 + 0x14) == 0) {
        return;
      }
      iVar2 = *(int *)(iVar1 + 0x1d0) + -1;
    }
    *(int *)(iVar1 + 0x1d0) = iVar2;
  }
  return;
}

