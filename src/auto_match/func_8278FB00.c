unsigned int fn_8278FB00(int param_1,unsigned int param_2)

{
  unsigned int uVar1;
  
  uVar1 = *(unsigned int *)(param_1 + 0x1c);
  if ((param_2 < uVar1) || (param_2 >= *(int *)(param_1 + 4) + uVar1)) {
    uVar1 = uVar1 - param_2;
  }
  else {
    uVar1 = 0;
  }
  return uVar1 >> 0x1f;
}

