void fn_82DBBA90(int param_1,int param_2,unsigned int param_3,unsigned short param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 0x30);
  if (iVar1 != 0) {
    if (iVar1 != param_2) {
      for (iVar2 = *(int *)(iVar1 + 0x14); iVar2 != param_2; iVar2 = *(int *)(iVar2 + 0x14)) {
        iVar1 = iVar2;
      }
      *(unsigned int *)(iVar1 + 0x14) = param_3;
      *(unsigned short *)(iVar1 + 0x12) = param_4;
      return;
    }
    *(unsigned int *)(param_1 + 0x10) = param_3;
  }
  if (iVar2 != 0) {
    *(unsigned int *)(iVar2 + 0xc) = param_3;
    *(unsigned short *)(iVar2 + 0x10) = param_4;
    return;
  }
  return;
}

