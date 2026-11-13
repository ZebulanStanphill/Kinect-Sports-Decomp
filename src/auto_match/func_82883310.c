extern unsigned int *auStack_20;
extern int fn_828A2240();
extern int fn_828C92E8();


int fn_82883310(int param_1)

{
  unsigned char auStack_20 [8];
  
  fn_828C92E8(param_1 + 0x10,auStack_20,auStack_20);
  *(unsigned int *)(param_1 + 0x60) = 0;
  *(unsigned int *)(param_1 + 100) = 0;
  *(unsigned int *)(param_1 + 0x68) = 0;
  *(unsigned int *)(param_1 + 0x70) = 0;
  *(unsigned int *)(param_1 + 0x74) = 0;
  *(unsigned int *)(param_1 + 0x78) = 0;
  *(unsigned int *)(param_1 + 0x7c) = 0;
  *(unsigned int *)(param_1 + 0x80) = 0;
  *(unsigned int *)(param_1 + 0x84) = 0;
  fn_828A2240(param_1 + 0x88,auStack_20,auStack_20);
  *(unsigned int *)(param_1 + 0x98) = 0;
  *(unsigned int *)(param_1 + 0x9c) = 0;
  *(unsigned int *)(param_1 + 0xa0) = 0;
  *(unsigned int *)(param_1 + 0xa4) = 0;
  *(unsigned int *)(param_1 + 0xa8) = 0;
  *(unsigned int *)(param_1 + 0xac) = 0;
  return param_1;
}

