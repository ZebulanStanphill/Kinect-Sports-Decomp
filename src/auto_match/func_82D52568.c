typedef struct { unsigned __int64 lo, hi; } V16;
extern V16 vectorAddFloatingPoint();


int fn_82D52568(int param_1,int param_2)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int in_r0;
  unsigned char in_vs32 [16];
  unsigned char in_vs39 [16];
  unsigned char in_vs40 [16];
  unsigned char in_vs42 [16];
  unsigned char in_vs43 [16];
  unsigned char in_vs45 [16];
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int in_register_00010060;
  unsigned int in_register_00010064;
  unsigned int in_register_00010068;
  unsigned int in_vr6;
  unsigned int in_register_00010090;
  unsigned int in_register_00010094;
  unsigned int in_register_00010098;
  unsigned int in_vr9;
  unsigned int uVar6;
  
  puVar1 = (unsigned int *)(in_r0 + param_1 + 0x20 & 0xfffffff0);
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  puVar2 = (unsigned int *)(in_r0 + param_2 & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar3;
  puVar2[2] = uVar4;
  puVar2[3] = uVar5;
  *(unsigned int *)(param_2 + 0xc) = *(unsigned int *)(param_1 + 0x10);
  puVar1 = (unsigned int *)(in_r0 + param_1 + 0x30 & 0xfffffff0);
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  puVar2 = (unsigned int *)(in_r0 + param_2 + 0x10 & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar3;
  puVar2[2] = uVar4;
  puVar2[3] = uVar5;
  *(unsigned int *)(param_2 + 0x1c) = *(unsigned int *)(param_1 + 0x10);
  puVar1 = (unsigned int *)(in_r0 + param_1 + 0x40 & 0xfffffff0);
  uVar3 = *puVar1;
  uVar4 = puVar1[1];
  uVar5 = puVar1[2];
  uVar6 = puVar1[3];
  puVar1 = (unsigned int *)(in_r0 + param_2 + 0x20 & 0xfffffff0);
  *puVar1 = uVar3;
  puVar1[1] = uVar4;
  puVar1[2] = uVar5;
  puVar1[3] = uVar6;
  *(unsigned int *)(param_2 + 0x2c) = *(unsigned int *)(param_1 + 0x10);
  if (*(char *)(param_1 + 0x17) == '\0') {
    return param_2;
  }
  vectorAddFloatingPoint(in_vs32,in_vs45);
  puVar1 = (unsigned int *)(in_r0 + param_2 + 0x30 & 0xfffffff0);
  *puVar1 = uVar3;
  puVar1[1] = uVar4;
  puVar1[2] = uVar5;
  puVar1[3] = uVar6;
  *(unsigned int *)(param_2 + 0x3c) = *(unsigned int *)(param_1 + 0x10);
  vectorAddFloatingPoint(in_vs42,in_vs43);
  puVar1 = (unsigned int *)(in_r0 + param_2 + 0x40 & 0xfffffff0);
  *puVar1 = in_register_00010090;
  puVar1[1] = in_register_00010094;
  puVar1[2] = in_register_00010098;
  puVar1[3] = in_vr9;
  *(unsigned int *)(param_2 + 0x4c) = *(unsigned int *)(param_1 + 0x10);
  vectorAddFloatingPoint(in_vs39,in_vs40);
  puVar1 = (unsigned int *)(in_r0 + param_2 + 0x50 & 0xfffffff0);
  *puVar1 = in_register_00010060;
  puVar1[1] = in_register_00010064;
  puVar1[2] = in_register_00010068;
  puVar1[3] = in_vr6;
  *(unsigned int *)(param_2 + 0x5c) = *(unsigned int *)(param_1 + 0x10);
  return param_2;
}

