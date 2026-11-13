extern int fn_8270C708();


unsigned __int64 fn_8270CCB0(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  
  if (*(int *)(param_1 + 0x10) == 1) {
    if ((int)param_3 == 1) {
      uVar1 = *(unsigned int *)(param_1 + 0x18);
      uVar2 = (param_2 & 0xffffffff) + (unsigned __int64)*(unsigned int *)(param_1 + 0x14);
      if ((uVar2 & 0xffffffff) <= (unsigned __int64)uVar1) {
        *(int *)(param_1 + 0x14) = (int)uVar2;
        return (*(__int64 *)(param_1 + 0x20) - (unsigned __int64)uVar1) + (uVar2 & 0xffffffff);
      }
      *(unsigned int *)(param_1 + 0x18) = 0;
      param_3 = 0;
      param_2 = (*(__int64 *)(param_1 + 0x20) - (unsigned __int64)uVar1) +
                (unsigned __int64)*(unsigned int *)(param_1 + 0x14) + param_2;
    }
    else {
      if ((int)param_3 != 0) goto LAB_8270cd88;
      uVar1 = *(unsigned int *)(param_1 + 0x18);
      if (((unsigned __int64)uVar1 - *(__int64 *)(param_1 + 0x20)) + param_2 <= (unsigned __int64)uVar1) {
        *(unsigned int *)(param_1 + 0x14) = ((int)param_2 - (int)*(__int64 *)(param_1 + 0x20)) + uVar1;
        return param_2;
      }
      *(unsigned int *)(param_1 + 0x18) = 0;
    }
    *(unsigned int *)(param_1 + 0x14) = 0;
  }
  else {
LAB_8270cd88:
    fn_8270C708(param_1);
  }
  uVar2 = (**(int (***)())(**(int **)(param_1 + 8) + 0x3c))(*(int **)(param_1 + 8),param_2,param_3);
  *(unsigned __int64 *)(param_1 + 0x20) = uVar2;
  return uVar2;
}

