extern unsigned int *auStack_30;
extern int fn_82CE4040();
extern int fn_82CE4118();


void fn_82D819D8(int param_1,int param_2)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned char uVar5;
  unsigned char *puVar4;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned char auStack_30 [16];
  
  puVar2 = (unsigned int *)(param_1 + 0x10U & 0xfffffff0);
  uVar6 = puVar2[1];
  uVar7 = puVar2[2];
  uVar8 = puVar2[3];
  puVar3 = (unsigned int *)(param_2 + 0x10U & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar6;
  puVar3[2] = uVar7;
  puVar3[3] = uVar8;
  *(unsigned int *)(param_2 + 0x20) = *(unsigned int *)(param_1 + 0x338);
  puVar2 = (unsigned int *)(param_1 + 0x310U & 0xfffffff0);
  uVar6 = puVar2[1];
  uVar7 = puVar2[2];
  uVar8 = puVar2[3];
  puVar3 = (unsigned int *)(param_2 + 0x30U & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar6;
  puVar3[2] = uVar7;
  puVar3[3] = uVar8;
  puVar2 = (unsigned int *)(param_1 + 800U & 0xfffffff0);
  uVar6 = puVar2[1];
  uVar7 = puVar2[2];
  uVar8 = puVar2[3];
  puVar3 = (unsigned int *)(param_2 + 0x40U & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar6;
  puVar3[2] = uVar7;
  puVar3[3] = uVar8;
  *(unsigned int *)(param_2 + 0x54) = *(unsigned int *)(*(int *)(param_1 + 0x78) + 8);
  iVar1 = *(int *)(param_1 + 0x7c);
  if (iVar1 != 0) {
    fn_82CE4040(iVar1);
  }
  if (*(int *)(param_2 + 0x58) != 0) {
    fn_82CE4118();
  }
  *(int *)(param_2 + 0x58) = iVar1;
  iVar1 = *(int *)(param_1 + 0x84);
  if (iVar1 != 0) {
    fn_82CE4040(iVar1);
  }
  if (*(int *)(param_2 + 0x5c) != 0) {
    fn_82CE4118();
  }
  *(int *)(param_2 + 0x5c) = iVar1;
  if (*(int *)(param_1 + 0x1bc) == 0) {
    uVar5 = 3;
  }
  else {
    uVar5 = (unsigned char)*(unsigned int *)(*(int *)(param_1 + 0x1bc) + 0x30);
  }
  *(unsigned char *)(param_2 + 0x28) = uVar5;
  if (*(int *)(param_1 + 0x1bc) == 0) {
    puVar4 = auStack_30;
    auStack_30[0] = 0;
  }
  else {
    puVar4 = (unsigned char *)(*(int *)(param_1 + 0x1bc) + 0x34);
  }
  *(unsigned char *)(param_2 + 0x29) = *puVar4;
  *(char *)(param_2 + 0x50) = '\x01' - (*(int *)(param_1 + 0x5c) == 0);
  *(unsigned char *)(param_2 + 0x53) = *(unsigned char *)(param_1 + 0x60);
  *(unsigned int *)(param_2 + 0x60) = *(unsigned int *)(*(int *)(param_1 + 0x80) + 0x1e40);
  *(unsigned int *)(param_2 + 0x68) = *(unsigned int *)(*(int *)(param_1 + 0x80) + 0x1e44);
  *(unsigned int *)(param_2 + 0x8c) = *(unsigned int *)(param_1 + 0xcc);
  *(unsigned int *)(param_2 + 0x8c) = *(unsigned int *)(param_1 + 0xd0);
  *(unsigned char *)(param_2 + 0x94) = *(unsigned char *)(param_1 + 0xd4);
  if (*(int *)(param_1 + 0x50) != 0) {
    fn_82CE4040();
  }
  if (*(int *)(param_2 + 0x6c) != 0) {
    fn_82CE4118();
  }
  *(unsigned int *)(param_2 + 0x6c) = *(unsigned int *)(param_1 + 0x50);
  *(unsigned int *)(param_2 + 0x70) = *(unsigned int *)(param_1 + 0x330);
  *(unsigned int *)(param_2 + 100) = *(unsigned int *)(param_1 + 0x334);
  *(unsigned char *)(param_2 + 0x74) = *(unsigned char *)(param_1 + 0x340);
  *(unsigned char *)(param_2 + 0x75) = *(unsigned char *)(*(int *)(param_1 + 0x78) + 0x6d);
  *(unsigned int *)(param_2 + 0x24) = *(unsigned int *)(param_1 + 0x240);
  *(unsigned int *)(param_2 + 0x78) = *(unsigned int *)(param_1 + 0x1e4);
  *(unsigned int *)(param_2 + 0x7c) = *(unsigned int *)(param_1 + 0x1e8);
  *(unsigned int *)(param_2 + 0x80) = *(unsigned int *)(param_1 + 0x2f4);
  *(unsigned int *)(param_2 + 0x84) = *(unsigned int *)(param_1 + 0x2f8);
  *(unsigned char *)(param_2 + 0x88) = *(unsigned char *)(param_1 + 0x304);
  *(unsigned char *)(param_2 + 0xa0) = *(unsigned char *)(param_1 + 0x305);
  *(unsigned char *)(param_2 + 0xa1) = *(unsigned char *)(param_1 + 0x306);
  *(unsigned char *)(param_2 + 0xa2) = *(unsigned char *)(param_1 + 0x307);
  *(unsigned int *)(param_2 + 0x98) = **(unsigned int **)(*(int *)(param_1 + 0x78) + 0x70);
  *(unsigned int *)(param_2 + 0x9c) = *(unsigned int *)(*(int *)(*(int *)(param_1 + 0x78) + 0x70) + 4);
  *(unsigned char *)(param_2 + 0x95) = *(unsigned char *)(*(int *)(param_1 + 0x78) + 0x6c);
  *(unsigned char *)(param_2 + 0xa3) = *(unsigned char *)(param_1 + 0xd6);
  *(unsigned int *)(param_2 + 0xa8) = *(unsigned int *)(param_1 + 0xdc);
  *(unsigned int *)(param_2 + 0xac) = *(unsigned int *)(param_1 + 0xe0);
  *(unsigned char *)(param_2 + 0xb0) = *(unsigned char *)(param_1 + 0xe4);
  *(unsigned int *)(param_2 + 0xb4) = *(unsigned int *)(param_1 + 0xe8);
  *(unsigned int *)(param_2 + 0xb8) = *(unsigned int *)(param_1 + 0xec);
  *(unsigned int *)(param_2 + 0xa4) = *(unsigned int *)(param_1 + 0xd8);
  *(unsigned int *)(param_2 + 0xbc) = *(unsigned int *)(param_1 + 0xf4);
  *(unsigned int *)(param_2 + 0xc0) = *(unsigned int *)(param_1 + 0xf8);
  *(unsigned int *)(param_2 + 0xc4) = *(unsigned int *)(param_1 + 0xfc);
  *(unsigned int *)(param_2 + 200) = *(unsigned int *)(param_1 + 0x100);
  *(unsigned char *)(param_2 + 0xcc) = *(unsigned char *)(param_1 + 0xd5);
  *(char *)(param_2 + 0xcd) = (char)*(unsigned int *)(param_1 + 0xf0);
  *(unsigned int *)(param_2 + 0xd8) = *(unsigned int *)(*(int *)(param_1 + 8) + 0x24);
  *(unsigned char *)(param_2 + 0xce) = *(unsigned char *)(param_1 + 200);
  *(unsigned char *)(param_2 + 0xd4) = *(unsigned char *)(param_1 + 0xb0);
  *(unsigned int *)(param_2 + 0xd0) = *(unsigned int *)(param_1 + 0xb4);
  *(char *)(param_2 + 0xdc) = '\x01' - (*(int *)(param_1 + 0x1c0) == 0);
  return;
}

