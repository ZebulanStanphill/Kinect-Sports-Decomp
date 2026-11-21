void fn_82CE8880(int param_1,__int64 param_2,int param_3)

{
  short sVar1;
  int iVar2;
  
  if ((int)param_2 < *(int *)(param_1 + 0x88)) {
    iVar2 = (int)((param_2 + 0x11U & 0xffffffff) << 1);
    sVar1 = *(short *)(iVar2 + param_3);
    if (sVar1 != 0) {
      *(short *)(iVar2 + param_3) = sVar1 + -1;
      fn_82CFBB08(*(unsigned int *)((int)((param_2 + 0x1eU & 0xffffffff) << 2) + param_1),1);
      return;
    }
  }
  fn_82CE8758(param_1,param_3);
  return;
}
