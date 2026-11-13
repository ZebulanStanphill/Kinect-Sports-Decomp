void fn_82DAF780(int param_1,int param_2)

{
  *(unsigned int *)((unsigned int)*(unsigned short *)(param_2 + 0xa8) * 4 + *(int *)(param_1 + 0x48)) =
       *(unsigned int *)(*(int *)(param_1 + 0x4c) * 4 + *(int *)(param_1 + 0x48) + -4);
  *(unsigned short *)(*(int *)((unsigned int)*(unsigned short *)(param_2 + 0xa8) * 4 + *(int *)(param_1 + 0x48)) + 0xa8) =
       *(unsigned short *)(param_2 + 0xa8);
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -1;
  *(unsigned int *)(param_2 + 0xcc) = 0;
  *(unsigned short *)(param_2 + 0xa8) = 0xffff;
  *(unsigned char *)(param_1 + 0x25) = *(unsigned char *)(param_1 + 0x25) & 0x3f | 0x40;
  return;
}

