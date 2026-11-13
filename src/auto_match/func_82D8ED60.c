void fn_82D8ED60(int param_1,int param_2)

{
  if (*(unsigned short *)(param_2 + 0x22) == 0xffff) {
    return;
  }
  *(unsigned int *)((unsigned int)*(unsigned short *)(param_2 + 0x22) * 4 + *(int *)(param_1 + 0x40)) = 0;
  *(unsigned short *)(param_2 + 0x22) = 0xffff;
  return;
}

