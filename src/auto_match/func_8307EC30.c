typedef struct { unsigned __int64 lo, hi; } V16;
extern unsigned int lbl_82134504;
extern unsigned int lbl_82134508;
extern unsigned int lbl_821AAD20;
extern V16 vectorMaximumFloatingPoint();
extern V16 vectorMinimumFloatingPoint();


void fn_8307EC30(int *param_1,__int64 param_2,unsigned int *param_3)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int in_r0;
  unsigned char in_vs32 [16];
  unsigned char in_vs42 [16];
  unsigned char in_vs44 [16];
  unsigned char in_vs45 [16];
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int in_register_00010090;
  unsigned int in_register_00010094;
  unsigned int in_register_00010098;
  unsigned int in_vr9;
  unsigned int in_register_000100b0;
  unsigned int in_register_000100b4;
  unsigned int in_register_000100b8;
  unsigned int in_vr11;
  unsigned int in_register_000100d0;
  unsigned int in_register_000100d4;
  unsigned int in_register_000100d8;
  unsigned int in_vr13;
  
  if ((int)param_2 == 0) {
    *param_3 = lbl_82134508;
    uVar3 = lbl_82134504;
    puVar1 = (unsigned int *)(in_r0 + (int)param_3 & 0xfffffff0);
    *puVar1 = in_register_000100d0;
    puVar1[1] = in_register_000100d4;
    puVar1[2] = in_register_000100d8;
    puVar1[3] = in_vr13;
    param_3[4] = uVar3;
    puVar1 = (unsigned int *)((int)param_3 + in_r0 + 0x10 & 0xfffffff0);
    *puVar1 = in_register_000100b0;
    puVar1[1] = in_register_000100b4;
    puVar1[2] = in_register_000100b8;
    puVar1[3] = in_vr11;
    return;
  }
  puVar1 = (unsigned int *)(in_r0 + *param_1 & 0xfffffff0);
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  puVar2 = (unsigned int *)(in_r0 + (int)param_3 & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar3;
  puVar2[2] = uVar4;
  puVar2[3] = uVar5;
  puVar1 = (unsigned int *)(in_r0 + *param_1 & 0xfffffff0);
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  puVar2 = (unsigned int *)((int)param_3 + in_r0 + 0x10 & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar3;
  puVar2[2] = uVar4;
  puVar2[3] = uVar5;
  if (1 < (int)param_2) {
    param_2 = param_2 + -1;
    do {
      vectorMinimumFloatingPoint(in_vs44,in_vs32);
      puVar1 = (unsigned int *)(in_r0 + (int)param_3 & 0xfffffff0);
      *puVar1 = in_register_000100b0;
      puVar1[1] = in_register_000100b4;
      puVar1[2] = in_register_000100b8;
      puVar1[3] = in_vr11;
      vectorMaximumFloatingPoint(in_vs42,in_vs45);
      puVar1 = (unsigned int *)((int)param_3 + in_r0 + 0x10 & 0xfffffff0);
      *puVar1 = in_register_00010090;
      puVar1[1] = in_register_00010094;
      puVar1[2] = in_register_00010098;
      puVar1[3] = in_vr9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  uVar3 = lbl_821AAD20;
  param_3[3] = lbl_821AAD20;
  param_3[7] = uVar3;
  return;
}

