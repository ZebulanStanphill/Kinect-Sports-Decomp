typedef struct { unsigned __int64 lo, hi; } V16;
extern V16 vectorSubtractFloatingPoint();


void fn_8308AF58(unsigned __int64 param_1,unsigned __int64 param_2,int param_3)

{
  unsigned int *puVar1;
  int in_r0;
  unsigned char in_vs32 [16];
  unsigned char in_vs43 [16];
  unsigned char in_vs45 [16];
  unsigned int in_register_000100a0;
  unsigned int in_register_000100a4;
  unsigned int in_register_000100a8;
  unsigned int in_vr10;
  unsigned int in_register_000100c0;
  unsigned int in_register_000100c4;
  unsigned int in_register_000100c8;
  unsigned int in_vr12;
  
  vectorSubtractFloatingPoint(in_vs45,in_vs32);
  puVar1 = (unsigned int *)(param_3 + 0x10U & 0xfffffff0);
  *puVar1 = in_register_000100c0;
  puVar1[1] = in_register_000100c4;
  puVar1[2] = in_register_000100c8;
  puVar1[3] = in_vr12;
  vectorSubtractFloatingPoint(in_vs43,in_vs32);
  puVar1 = (unsigned int *)(in_r0 + param_3 & 0xfffffff0);
  *puVar1 = in_register_000100a0;
  puVar1[1] = in_register_000100a4;
  puVar1[2] = in_register_000100a8;
  puVar1[3] = in_vr10;
  return;
}

