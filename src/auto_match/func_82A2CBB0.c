extern int memcpy();


void fn_82A2CBB0(int param_1,int param_2,int param_3)

{
  unsigned char bVar1;
  unsigned short uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  int iVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  int iVar11;
  int iVar12;
  unsigned char bVar13;
  
  uVar3 = *(unsigned int *)(param_1 + 0x1c);
  uVar4 = *(unsigned int *)(param_1 + 0x14);
  iVar5 = *(int *)(param_1 + 0x20);
  bVar13 = 0;
  uVar9 = uVar3 >> 0xc;
  uVar10 = uVar4 >> 0xc;
  if (*(int *)(param_1 + 0x28) == 0) {
    if (*(unsigned int *)(param_1 + 0x2c) != uVar4) {
      if (*(unsigned int *)(param_1 + 0x2c) + 0x1000 != uVar4) goto LAB_82a2cc30;
      iVar11 = *(int *)(param_1 + 0x24);
      iVar12 = iVar5 + uVar10 + -1;
      goto LAB_82a2cc24;
    }
  }
  else {
    if (uVar10 != 2) goto LAB_82a2cc30;
    iVar12 = *(int *)(param_1 + 0x24);
    iVar11 = iVar5 + 1;
LAB_82a2cc24:
    if (iVar11 != iVar12) goto LAB_82a2cc30;
  }
  bVar13 = 1;
LAB_82a2cc30:
  memcpy(param_3,param_1 + 0x50,0x28);
  bVar1 = *(unsigned char *)(param_1 + 0x35);
  bVar13 = (bVar13 | bVar1 & 0xfe) << 6;
  *(unsigned char *)(param_3 + 0x28) = bVar13 | *(unsigned char *)(param_3 + 0x28) & 0x3f;
  if ((param_2 == 0) || ((bVar1 & 8) == 0)) {
    *(unsigned char *)(param_3 + 0x28) = bVar13 | *(unsigned char *)(param_1 + 0x34) & 0x3f;
  }
  else {
    *(unsigned char *)(param_3 + 0x28) = bVar13;
  }
  iVar11 = *(int *)(param_1 + 8);
  uVar6 = *(unsigned int *)(param_1 + 0x18);
  uVar7 = *(unsigned int *)(param_1 + 0x40);
  uVar8 = *(unsigned int *)(param_1 + 0x44);
  *(char *)(param_3 + 0x2a) = (char)(uVar9 >> 8);
  uVar2 = *(unsigned short *)(iVar11 + 0x36);
  *(unsigned char *)(param_3 + 0x2b) = (unsigned char)(uVar3 >> 0x1c);
  *(char *)(param_3 + 0x29) = (char)uVar9;
  *(char *)(param_3 + 0x2c) = (char)uVar10;
  *(char *)(param_3 + 0x2d) = (char)(uVar10 >> 8);
  *(unsigned char *)(param_3 + 0x2e) = (unsigned char)(uVar4 >> 0x1c);
  *(char *)(param_3 + 0x2f) = (char)iVar5;
  *(char *)(param_3 + 0x30) = (char)((unsigned int)iVar5 >> 8);
  *(char *)(param_3 + 0x31) = (char)((unsigned int)iVar5 >> 0x10);
  *(unsigned short *)(param_3 + 0x32) = uVar2;
  *(unsigned int *)(param_3 + 0x34) = uVar6;
  *(unsigned int *)(param_3 + 0x38) = uVar7;
  *(unsigned int *)(param_3 + 0x3c) = uVar8;
  return;
}

