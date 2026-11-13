void fn_82D76320(int param_1,int param_2)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int in_r0;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  
  if ((*(char *)(param_1 + 8) != '\0') && (*(float *)(param_1 + 0x2c) <= *(float *)(param_2 + 0x1c))
     ) {
    return;
  }
  *(unsigned char *)(param_1 + 8) = 1;
  puVar1 = (unsigned int *)(in_r0 + param_2 & 0xfffffff0);
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  puVar2 = (unsigned int *)(in_r0 + param_1 + 0x10 & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar3;
  puVar2[2] = uVar4;
  puVar2[3] = uVar5;
  puVar1 = (unsigned int *)(param_2 + 0x10U & 0xfffffff0);
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  puVar2 = (unsigned int *)(param_1 + 0x20U & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar3;
  puVar2[2] = uVar4;
  puVar2[3] = uVar5;
  *(unsigned int *)(param_1 + 4) = *(unsigned int *)(param_2 + 0x1c);
  return;
}

