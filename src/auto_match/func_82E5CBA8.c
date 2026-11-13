extern int fn_82E5C290();


int fn_82E5CBA8(int param_1,unsigned int param_2,unsigned int param_3,unsigned int *param_4)

{
  int uVar1;
  
  if (*(unsigned int *)(param_1 + 0xc) == 0) {
    return 0xc00d36b6;
  }
  if ((param_4 != (unsigned int *)0x0) && ((param_3 == 0 || (param_2 != 0)))) {
    if ((*(unsigned int *)(param_1 + 0x88) & 0x80000000) != 0) {
      *param_4 = 0;
      return 0;
    }
    uVar1 = fn_82E5C290();
    return uVar1;
  }
  return 0x80070057;
}

