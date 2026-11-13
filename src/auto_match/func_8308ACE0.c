unsigned __int64 fn_8308ACE0(int param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = (int *)(*param_2 * 0x10 + *(int *)(param_1 + 0xa0));
  piVar1 = (int *)(*param_3 * 0x10 + *(int *)(param_1 + 0xa0));
  if ((((*(short *)((int)piVar2 + 10) - *(short *)(piVar1 + 2) |
         *(short *)((int)piVar1 + 10) - *(short *)(piVar2 + 2) |
         *(short *)(piVar2 + 1) - *(short *)piVar1 | *(short *)(piVar1 + 1) - *(short *)piVar2) &
       0x8000U) == 0) && (((piVar2[1] - *piVar1 | piVar1[1] - *piVar2) & 0x80008000U) == 0)) {
    return 1;
  }
  return 0;
}

