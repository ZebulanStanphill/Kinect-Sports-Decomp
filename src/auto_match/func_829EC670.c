unsigned __int64 fn_829EC670(int param_1,unsigned int *param_2)

{
  unsigned short uVar1;
  
  if (param_2 == (unsigned int *)0x0) {
    return 0xffffffff80070057;
  }
  *param_2 = 0;
  if (*(int *)(param_1 + 8) == 0) {
    return 0xffffffff80004005;
  }
  if (*(unsigned short *)(param_1 + 0x14) == 0) {
    return 0xffffffff80004005;
  }
  uVar1 = *(unsigned short *)((unsigned int)*(unsigned short *)(param_1 + 0x14) * 2 + *(int *)(param_1 + 0x2c) + -2);
  *param_2 = (unsigned int)uVar1;
  if ((uVar1 == 1) &&
     (*(int *)((unsigned int)*(unsigned short *)(param_1 + 0x14) * 4 + *(int *)(param_1 + 0x1c) + -4) == 4)) {
    *param_2 = 2;
  }
  return 0;
}

