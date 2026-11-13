unsigned __int64 fn_8275D218(int param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
  int iVar1;
  
  if ((((param_4 < param_3) && (iVar1 = *(int *)(param_1 + 4), iVar1 != 0)) &&
      ((param_2 - iVar1) + -8 < *(int *)(iVar1 + 4))) &&
     ((iVar1 = *(int *)(iVar1 + 4) - ((param_2 - iVar1) + -8),
      iVar1 - param_3 == (unsigned int)*(unsigned short *)(param_1 + 8) &&
      (param_4 = iVar1 - param_4, param_4 < 0x10000)))) {
    *(short *)(param_1 + 8) = (short)param_4;
  }
  return 0;
}

