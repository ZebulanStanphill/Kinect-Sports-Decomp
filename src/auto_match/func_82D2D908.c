extern int fn_82D2BFD0();


unsigned int * fn_82D2D908(unsigned int *param_1,int param_2)

{
  unsigned short uVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  unsigned short uVar4;
  unsigned short uVar5;
  int iVar6;
  
  if (param_1[1] != 0) {
    iVar6 = *(int *)*param_1;
    if (*(int *)(iVar6 + 0x480) != 0) goto LAB_82d2d94c;
  }
  iVar6 = fn_82D2BFD0(param_1);
LAB_82d2d94c:
  puVar2 = *(unsigned int **)(iVar6 + 0x480);
  uVar3 = *puVar2;
  *(int *)(iVar6 + 0x484) = *(int *)(iVar6 + 0x484) + 1;
  *(unsigned int *)(iVar6 + 0x480) = uVar3;
  puVar2[2] = *(unsigned int *)(param_2 + 8);
  puVar2[3] = *(unsigned int *)(param_2 + 0xc);
  puVar2[4] = *(unsigned int *)(param_2 + 0x10);
  puVar2[5] = *(unsigned int *)(param_2 + 0x14);
  puVar2[6] = *(unsigned int *)(param_2 + 0x18);
  puVar2[7] = *(unsigned int *)(param_2 + 0x1c);
  uVar1 = *(unsigned short *)(puVar2 + 8);
  uVar4 = *(unsigned short *)(param_2 + 0x20) & 0xe000;
  *(unsigned short *)(puVar2 + 8) = uVar1 & 0x1fff | uVar4;
  uVar5 = *(unsigned short *)(param_2 + 0x20) & 0x1000;
  *(unsigned short *)(puVar2 + 8) = uVar5 | uVar1 & 0xfff | uVar4;
  *(unsigned short *)(puVar2 + 8) = uVar5 | uVar4 | *(unsigned short *)(param_2 + 0x20) & 0xfff;
  *(unsigned short *)((int)puVar2 + 0x22) = *(unsigned short *)(param_2 + 0x22);
  puVar2[1] = 0;
  *puVar2 = param_1[3];
  if (param_1[3] != 0) {
    *(unsigned int **)(param_1[3] + 4) = puVar2;
  }
  param_1[3] = puVar2;
  param_1[4] = param_1[4] + 1;
  return puVar2;
}

