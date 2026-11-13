extern int fn_8279C708();
extern int fn_8279C7A0();


void fn_827A2800(int param_1)

{
  fn_8279C7A0(*(unsigned int *)(param_1 + 8),*(unsigned int *)(param_1 + 100));
  fn_8279C708(*(unsigned int *)(param_1 + 8),*(unsigned int *)(param_1 + 0x60));
  *(unsigned short *)(param_1 + 0x68) = *(unsigned short *)(param_1 + 0x68) & 0xfb9f;
  return;
}

