extern unsigned int stack0x00000020;
extern unsigned int stack0x00000030;


void fn_824B5090(int param_1)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int in_r0;
  unsigned char *puVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  float in_register_00010010;
  float in_register_00010020;
  
  puVar3 = &stack0x00000020;
  if (ABS(in_register_00010010) <= ABS(in_register_00010020)) {
    puVar3 = &stack0x00000030;
  }
  puVar1 = (unsigned int *)((unsigned int)(puVar3 + in_r0) & 0xfffffff0);
  uVar4 = puVar1[1];
  uVar5 = puVar1[2];
  uVar6 = puVar1[3];
  puVar2 = (unsigned int *)(in_r0 + param_1 & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar4;
  puVar2[2] = uVar5;
  puVar2[3] = uVar6;
  return;
}

