unsigned __int64 fn_829EC618(int param_1,unsigned int *param_2)

{
  if (param_2 == (unsigned int *)0x0) {
    return 0xffffffff80070057;
  }
  *param_2 = 0;
  if (*(int *)(param_1 + 8) == 0) {
    return 0xffffffff80004005;
  }
  if (*(short *)(param_1 + 0x14) == 0) {
    return 0xffffffff80004005;
  }
  *param_2 = (unsigned int)**(unsigned short **)(param_1 + 0x2c);
  return 0;
}

