int fn_8282B948(int param_1,int param_2)

{
  int lVar1;
  
  lVar1 = *(unsigned int *)(param_2 + 0x10) - *(unsigned int *)(param_1 + 0x10);
  if (lVar1 == 0) {
    lVar1 = *(unsigned int *)(param_2 + 0x20) - *(unsigned int *)(param_1 + 0x20);
    if (lVar1 == 0) {
      lVar1 = *(unsigned int *)(param_2 + 0x24) - *(unsigned int *)(param_1 + 0x24);
      if ((lVar1 == 0) &&
         (lVar1 = (unsigned __int64)*(unsigned int *)(param_2 + 0x1c) - (unsigned __int64)*(unsigned int *)(param_1 + 0x1c),
         lVar1 == 0)) {
        lVar1 = (unsigned __int64)*(unsigned int *)(param_2 + 0x14) - (unsigned __int64)*(unsigned int *)(param_1 + 0x14);
      }
    }
  }
  return lVar1;
}

