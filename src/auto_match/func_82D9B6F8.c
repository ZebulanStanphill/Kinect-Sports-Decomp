typedef struct { unsigned __int64 lo, hi; } V16;
extern unsigned int fStack_18;
extern unsigned int fStack_1c;
extern unsigned int fStack_20;
extern int fn_82CECC38();
extern unsigned int lbl_82002AE0;
extern V16 vectorMaximumFloatingPoint();


void fn_82D9B6F8(__int64 param_1,float *param_2)

{
  unsigned int *puVar1;
  float fVar2;
  int in_r0;
  unsigned char in_vs32 [16];
  unsigned char in_vs44 [16];
  unsigned int in_register_000100b0;
  unsigned int in_register_000100b4;
  unsigned int in_register_000100b8;
  unsigned int in_vr11;
  unsigned int in_register_000100d0;
  unsigned int in_register_000100d4;
  unsigned int in_register_000100d8;
  unsigned int in_vr13;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  
  fVar2 = lbl_82002AE0;
  vectorMaximumFloatingPoint(in_vs44,in_vs32);
  puVar1 = (unsigned int *)(in_r0 + (int)param_2 & 0xfffffff0);
  *puVar1 = in_register_000100d0;
  puVar1[1] = in_register_000100d4;
  puVar1[2] = in_register_000100d8;
  puVar1[3] = in_vr13;
  puVar1 = (unsigned int *)((unsigned int)(param_2 + 4) & 0xfffffff0);
  *puVar1 = in_register_000100d0;
  puVar1[1] = in_register_000100d4;
  puVar1[2] = in_register_000100d8;
  puVar1[3] = in_vr13;
  puVar1 = (unsigned int *)((unsigned int)(param_2 + 8) & 0xfffffff0);
  *puVar1 = in_register_000100d0;
  puVar1[1] = in_register_000100d4;
  puVar1[2] = in_register_000100d8;
  puVar1[3] = in_vr13;
  puVar1 = (unsigned int *)((int)&fStack_20 + in_r0 & 0xfffffff0);
  *puVar1 = in_register_000100b0;
  puVar1[1] = in_register_000100b4;
  puVar1[2] = in_register_000100b8;
  puVar1[3] = in_vr11;
  param_2[5] = fVar2 / fStack_1c;
  *param_2 = fVar2 / fStack_20;
  param_2[10] = fVar2 / fStack_18;
  fn_82CECC38(param_2,param_1 + 0x10);
  return;
}

