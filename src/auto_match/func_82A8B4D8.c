typedef unsigned char bool;


bool fn_82A8B4D8(int param_1,unsigned int param_2)

{
  unsigned int uVar1;
  
  uVar1 = *(int *)(param_1 + 4) - *(int *)(param_1 + 0x10);
  if (param_2 <= uVar1) {
    uVar1 = param_2;
  }
  *(unsigned int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + uVar1;
  return uVar1 == param_2;
}

