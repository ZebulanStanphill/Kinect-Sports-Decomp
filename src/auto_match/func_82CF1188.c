extern int fn_82CFBBF0();


unsigned int fn_82CF1188(int param_1,unsigned __int64 param_2,char param_3)

{
  int iVar1;
  unsigned int uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0x34);
  iVar3 = 0;
  if (0 < iVar1) {
    iVar4 = 0;
    do {
      iVar1 = fn_82CFBBF0(param_2,*(unsigned int *)
                                    (*(int *)(iVar4 + *(int *)(param_1 + 0x30)) + 0x4c));
      if (iVar1 == 0) {
        return *(unsigned int *)(iVar3 * 4 + *(int *)(param_1 + 0x30));
      }
      iVar1 = *(int *)(param_1 + 0x34);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar3 < iVar1);
  }
  if ((param_3 == '\0') || (iVar1 < 1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = **(unsigned int **)(param_1 + 0x30);
  }
  return uVar2;
}

