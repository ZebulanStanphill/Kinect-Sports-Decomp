unsigned int fn_83024AA0(int param_1,unsigned int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_3 * 0x14 + param_1;
  if ((param_2 != *(int *)(iVar1 + 0x1c)) && (param_2 != *(int *)(param_1 + 0x16c))) {
    return 0;
  }
  return *(unsigned int *)(iVar1 + 0x20);
}

