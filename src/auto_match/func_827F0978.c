void fn_827F0978(int param_1,unsigned int param_2,char param_3)

{
  *(unsigned int *)((*(unsigned short *)(param_1 + 0xe8) + 0x28) * 4 + param_1) = param_2;
  *(unsigned short *)(param_1 + 0xea) = *(unsigned short *)(param_1 + 0xea) & 0xfffe;
  if (param_3 != '\0') {
    *(unsigned int *)(param_1 + 0xf0) = (unsigned int)*(unsigned short *)(param_1 + 0xe8);
    *(unsigned short *)(param_1 + 0xea) = *(unsigned short *)(param_1 + 0xea) | 2;
  }
  *(short *)(param_1 + 0xe8) = *(short *)(param_1 + 0xe8) + 1;
  return;
}

