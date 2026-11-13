extern int fn_82E083F8();


void fn_82E05B20(int param_1,unsigned __int64 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    iVar1 = 0;
    do {
      fn_82E083F8(*(unsigned int *)(iVar1 + *(int *)(param_1 + 8)),param_2);
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 4;
    } while (iVar2 < *(int *)(param_1 + 0xc));
  }
  return;
}

