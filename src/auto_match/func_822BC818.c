void fn_822BC818(int param_1,int param_2,int param_3)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int in_r0;
  int iVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  
  if (*(int *)(param_1 + 0x24) == 0) {
    return;
  }
  iVar3 = param_3 * 0x1c10 + *(int *)(param_1 + 0x24);
  puVar1 = (unsigned int *)(iVar3 + 0x2f0U & 0xfffffff0);
  uVar4 = puVar1[1];
  uVar5 = puVar1[2];
  uVar6 = puVar1[3];
  puVar2 = (unsigned int *)(in_r0 + param_2 & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar4;
  puVar2[2] = uVar5;
  puVar2[3] = uVar6;
  *(unsigned int *)(param_2 + 0x30) = *(unsigned int *)(iVar3 + 0x344);
  *(unsigned int *)(param_2 + 0x34) = *(unsigned int *)(iVar3 + 0x3c8);
  *(unsigned int *)(param_2 + 0x38) = *(unsigned int *)(iVar3 + 0x3cc);
  *(unsigned int *)(param_2 + 0x3c) = *(unsigned int *)(iVar3 + 0x3bc);
  *(unsigned int *)(param_2 + 0x40) = *(unsigned int *)(iVar3 + 0x3c0);
  *(unsigned int *)(param_2 + 0x44) = *(unsigned int *)(iVar3 + 0x3d8);
  *(unsigned int *)(param_2 + 0x48) = *(unsigned int *)(iVar3 + 0x348);
  *(unsigned int *)(param_2 + 0x4c) = *(unsigned int *)(iVar3 + 0x2d4);
  *(unsigned int *)(param_2 + 0x50) = *(unsigned int *)(iVar3 + 0x3dc);
  *(unsigned int *)(param_2 + 0x54) = *(unsigned int *)(iVar3 + 0x3e0);
  *(unsigned int *)(param_2 + 0x58) = *(unsigned int *)(iVar3 + 0x3e4);
  *(unsigned int *)(param_2 + 100) = *(unsigned int *)(iVar3 + 0x354);
  *(unsigned int *)(param_2 + 0x68) = *(unsigned int *)(iVar3 + 0x3ec);
  *(unsigned int *)(param_2 + 0x6c) = *(unsigned int *)(iVar3 + 0x3f0);
  *(unsigned int *)(param_2 + 0x70) = *(unsigned int *)(iVar3 + 0x3f4);
  *(unsigned int *)(param_2 + 0x5c) = *(unsigned int *)(iVar3 + 1000);
  *(unsigned int *)(param_2 + 0x60) = *(unsigned int *)(iVar3 + 0x388);
  *(unsigned int *)(param_2 + 0x74) = *(unsigned int *)(iVar3 + 0x3f8);
  *(unsigned int *)(param_2 + 0x78) = *(unsigned int *)(iVar3 + 0x3fc);
  *(unsigned int *)(param_2 + 0x7c) = *(unsigned int *)(iVar3 + 0x400);
  *(unsigned int *)(param_2 + 0x80) = *(unsigned int *)(iVar3 + 0x404);
  *(unsigned int *)(param_2 + 0x84) = *(unsigned int *)(iVar3 + 0x408);
  *(unsigned int *)(param_2 + 0x88) = *(unsigned int *)(iVar3 + 0x40c);
  *(unsigned int *)(param_2 + 0x8c) = *(unsigned int *)(iVar3 + 0x410);
  return;
}

