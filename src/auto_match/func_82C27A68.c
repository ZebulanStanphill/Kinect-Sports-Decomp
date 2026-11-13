unsigned __int64 fn_82C27A68(int param_1,int param_2,unsigned int *param_3)

{
  int iVar1;
  
  *param_3 = 0;
  if (*(int *)(*(int *)(param_1 + 0x2c) + 4) == 0) {
    return 0xffffffff80500009;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
  if (iVar1 != 0) {
    while (iVar1 != param_2) {
      iVar1 = *(int *)(iVar1 + 0x28);
      if (iVar1 == 0) {
        return 0;
      }
    }
    *param_3 = 1;
  }
  return 0;
}

