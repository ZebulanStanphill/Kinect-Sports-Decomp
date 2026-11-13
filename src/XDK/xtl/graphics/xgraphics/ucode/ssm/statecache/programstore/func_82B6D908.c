void fn_82B6D908(int *param_1,unsigned int param_2)

{
  int *piVar1;
  __int64 lVar2;
  
  lVar2 = 6;
  piVar1 = param_1;
  do {
    piVar1 = piVar1 + 1;
    *(unsigned int *)(*piVar1 + 0x1c) = param_2;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  *(unsigned int *)(param_1[7] + 0x1c) = param_2;
  *(unsigned int *)(param_1[8] + 0x1c) = param_2;
  return;
}

