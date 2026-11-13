extern int fn_8306ED38();


int fn_8306D6D8(int param_1,int param_2)

{
  char cVar1;
  unsigned int *puVar2;
  int in_r0;
  unsigned char in_vs32 [16];
  unsigned char in_vs36 [16];
  unsigned char in_vs43 [16];
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int in_register_000103f0;
  unsigned int in_register_000103f4;
  unsigned int in_register_000103f8;
  unsigned int in_vr63;
  float afStack_30 [12];
  
  cVar1 = *(char *)(param_2 + 0x1a7c);
  altv207_13(in_vs36,in_vs43);
  puVar2 = (unsigned int *)((int)afStack_30 + in_r0 & 0xfffffff0);
  *puVar2 = in_register_000103f0;
  puVar2[1] = in_register_000103f4;
  puVar2[2] = in_register_000103f8;
  puVar2[3] = in_vr63;
  if (cVar1 != '\0') {
    afStack_30[0] = -afStack_30[0];
  }
  puVar2 = (unsigned int *)((int)afStack_30 + in_r0 & 0xfffffff0);
  uVar3 = *puVar2;
  uVar4 = puVar2[1];
  uVar5 = puVar2[2];
  uVar6 = puVar2[3];
  fn_8306ED38((double)*(float *)(param_2 + 0x1a74));
  puVar2 = (unsigned int *)((int)afStack_30 + in_r0 & 0xfffffff0);
  *puVar2 = uVar3;
  puVar2[1] = uVar4;
  puVar2[2] = uVar5;
  puVar2[3] = uVar6;
  altv207_13(in_vs32,in_vs43);
  puVar2 = (unsigned int *)(in_r0 + param_1 & 0xfffffff0);
  *puVar2 = in_register_000103f0;
  puVar2[1] = in_register_000103f4;
  puVar2[2] = in_register_000103f8;
  puVar2[3] = in_vr63;
  return param_1;
}

