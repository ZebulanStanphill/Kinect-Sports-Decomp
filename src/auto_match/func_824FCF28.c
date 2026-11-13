unsigned int fn_824FCF28(int param_1,int param_2)

{
  unsigned int uVar1;
  unsigned *q = (unsigned *)(param_1 + 0xbb0);
  float uVar2;
  
  *(unsigned int *)(param_1 + 0xbbc) = *(unsigned int *)(param_2 + 0x5d4);
  uVar2 = 0.0f;
  *(unsigned int *)(param_1 + 0xbc0) = *(unsigned int *)(param_2 + 0x5d8);
  *(unsigned int *)(param_1 + 0xbc4) = *(unsigned int *)(param_2 + 0x5dc);
  *(unsigned int *)(param_1 + 0xbc8) = *(unsigned int *)(param_2 + 0x5e0);
  uVar1 = *(unsigned int *)(param_2 + 0x5e4);
  *(float *)(param_1 + 0xbb4) = uVar2;
  *(unsigned int *)(param_1 + 0xbcc) = uVar1;
  q[0] = 0;
  *(unsigned char *)(q+2) = 0;
  return 1;
}

