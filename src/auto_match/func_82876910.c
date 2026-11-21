unsigned __int64 fn_82876910(int param_1,unsigned __int64 param_2,int param_3)

{
  unsigned __int64 uVar1;
  
  if (*(int *)(param_3 + 4) == 0) {
    if ((*(int **)(param_1 + 0xc) != (int *)0x0) && (**(int **)(param_1 + 0xc) != 0)) {
      uVar1 = fn_82876858();
      return uVar1;
    }
  }
  if ((*(int **)(param_1 + 0x10) != (int *)0x0) && (**(int **)(param_1 + 0x10) != 0)) {
    uVar1 = fn_82876858();
    return uVar1;
  }
  return 0;
}
