void fn_82D02EC0(unsigned __int64 param_1,int param_2,unsigned int param_3)

{
  unsigned int uVar1;
  int iVar2;
  
  if (param_2 != 0) {
    do {
      uVar1 = *(unsigned int *)(param_2 + 4) & 0xfffffffc;
      if (param_3 < uVar1) {
        param_3 = uVar1;
      }
      iVar2 = *(int *)(param_2 + 0x14);
      if (*(int *)(param_2 + 0x14) == 0) {
        iVar2 = *(int *)(param_2 + 0x10);
      }
      param_2 = iVar2;
    } while (param_2 != 0);
    return;
  }
  return;
}

