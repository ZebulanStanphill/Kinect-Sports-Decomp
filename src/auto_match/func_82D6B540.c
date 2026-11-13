extern int fn_82F68CC0();


int fn_82D6B540(int param_1,int param_2)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int in_r0;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  unsigned int uVar13;
  unsigned int uVar14;
  unsigned int uVar15;
  unsigned int uVar16;
  unsigned int uVar17;
  
  puVar1 = (unsigned int *)(in_r0 + param_2 & 0xfffffff0);
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  puVar2 = (unsigned int *)(param_2 + 0x10U & 0xfffffff0);
  uVar14 = *puVar2;
  uVar15 = puVar2[1];
  uVar16 = puVar2[2];
  uVar17 = puVar2[3];
  puVar2 = (unsigned int *)(param_2 + 0x20U & 0xfffffff0);
  uVar10 = *puVar2;
  uVar11 = puVar2[1];
  uVar12 = puVar2[2];
  uVar13 = puVar2[3];
  puVar2 = (unsigned int *)(param_2 + 0x30U & 0xfffffff0);
  uVar6 = *puVar2;
  uVar7 = puVar2[1];
  uVar8 = puVar2[2];
  uVar9 = puVar2[3];
  puVar2 = (unsigned int *)(in_r0 + param_1 & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar3;
  puVar2[2] = uVar4;
  puVar2[3] = uVar5;
  puVar1 = (unsigned int *)(param_1 + 0x10U & 0xfffffff0);
  *puVar1 = uVar14;
  puVar1[1] = uVar15;
  puVar1[2] = uVar16;
  puVar1[3] = uVar17;
  puVar1 = (unsigned int *)(param_1 + 0x20U & 0xfffffff0);
  *puVar1 = uVar10;
  puVar1[1] = uVar11;
  puVar1[2] = uVar12;
  puVar1[3] = uVar13;
  puVar1 = (unsigned int *)(param_1 + 0x30U & 0xfffffff0);
  *puVar1 = uVar6;
  puVar1[1] = uVar7;
  puVar1[2] = uVar8;
  puVar1[3] = uVar9;
  fn_82F68CC0(param_1 + 0x40,param_2 + 0x40,0x50);
  puVar1 = (unsigned int *)(param_2 + 0x90U & 0xfffffff0);
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  puVar2 = (unsigned int *)(param_1 + 0x90U & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar3;
  puVar2[2] = uVar4;
  puVar2[3] = uVar5;
  *(unsigned int *)(param_1 + 0xa0) = *(unsigned int *)(param_2 + 0xa0);
  *(unsigned int *)(param_1 + 0xa4) = *(unsigned int *)(param_2 + 0xa4);
  *(unsigned int *)(param_1 + 0xa8) = *(unsigned int *)(param_2 + 0xa8);
  *(unsigned char *)(param_1 + 0xac) = *(unsigned char *)(param_2 + 0xac);
  *(unsigned char *)(param_1 + 0xad) = *(unsigned char *)(param_2 + 0xad);
  *(unsigned char *)(param_1 + 0xae) = *(unsigned char *)(param_2 + 0xae);
  return param_1;
}

