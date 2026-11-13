unsigned __int64 fn_82773C20(int *param_1,int *param_2)

{
  unsigned __int64 uVar1;
  
  if ((((*param_1 != *param_2) || (*(short *)(param_1 + 1) != *(short *)(param_2 + 1))) ||
      (*(char *)((int)param_1 + 6) != *(char *)((int)param_2 + 6))) ||
     (uVar1 = 1, *(char *)((int)param_1 + 7) != *(char *)((int)param_2 + 7))) {
    uVar1 = 0;
  }
  return uVar1;
}

