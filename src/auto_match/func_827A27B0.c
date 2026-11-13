extern int fn_8279C708();
extern int fn_8279C7A0();


void fn_827A27B0(int param_1)

{
  fn_8279C7A0(*(unsigned int *)(param_1 + 8),*(unsigned int *)(param_1 + 0x5c));
  fn_8279C708(*(unsigned int *)(param_1 + 8),*(unsigned int *)(param_1 + 0x58));
  *(unsigned short *)(param_1 + 0x68) = *(unsigned short *)(param_1 + 0x68) | 0x400;
  return;
}

