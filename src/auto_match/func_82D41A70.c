typedef struct { unsigned __int64 lo, hi; } V16;
extern unsigned int *auStack_20;
extern unsigned int fStack_28;
extern unsigned int fStack_2c;
extern unsigned int fStack_30;
extern int fn_82CE5040();
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_24;
extern V16 vectorMaximumFloatingPoint();
extern V16 vectorMinimumFloatingPoint();


void fn_82D41A70(int param_1,unsigned __int64 param_2,float *param_3,float *param_4)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int in_r0;
  unsigned char in_vs32 [16];
  unsigned char in_vs44 [16];
  unsigned char in_vs45 [16];
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int in_register_000100a0;
  unsigned int in_register_000100a4;
  unsigned int in_register_000100a8;
  unsigned int in_vr10;
  unsigned int in_register_000100b0;
  unsigned int in_register_000100b4;
  unsigned int in_register_000100b8;
  unsigned int in_vr11;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  unsigned int uStack_24;
  unsigned char auStack_20 [16];
  
  fStack_30 = *param_3 * *param_4;
  fStack_2c = param_3[1] * param_4[1];
  fStack_28 = param_3[2] * param_4[2];
  uStack_24 = lbl_821AAD20;
  puVar1 = (unsigned int *)((int)&fStack_30 + in_r0 & 0xfffffff0);
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  puVar2 = (unsigned int *)((int)&fStack_30 + in_r0 & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar3;
  puVar2[2] = uVar4;
  puVar2[3] = uVar5;
  fn_82CE5040(auStack_20,param_2,&fStack_30);
  vectorMinimumFloatingPoint(in_vs45,in_vs32);
  vectorMaximumFloatingPoint(in_vs44,in_vs32);
  puVar1 = (unsigned int *)(in_r0 + param_1 & 0xfffffff0);
  *puVar1 = in_register_000100b0;
  puVar1[1] = in_register_000100b4;
  puVar1[2] = in_register_000100b8;
  puVar1[3] = in_vr11;
  puVar1 = (unsigned int *)(in_r0 + param_1 + 0x10 & 0xfffffff0);
  *puVar1 = in_register_000100a0;
  puVar1[1] = in_register_000100a4;
  puVar1[2] = in_register_000100a8;
  puVar1[3] = in_vr10;
  return;
}

