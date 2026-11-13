void fn_8288B918(int *param_1,int param_2)

{
  int iVar1;
  unsigned int uVar2;
  
  if ((param_2 < 0) && ((unsigned int)param_1[1] < (unsigned int)-param_2)) {
    uVar2 = param_1[1] + param_2;
    param_1[1] = uVar2 & 0x1f;
    *param_1 = *param_1 + ((0xffffffff - uVar2 >> 5) + 1) * -4;
    return;
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + param_2 & 0x1f;
  *param_1 = ((unsigned int)(iVar1 + param_2) >> 3 & 0x1ffffffc) + *param_1;
  return;
}

