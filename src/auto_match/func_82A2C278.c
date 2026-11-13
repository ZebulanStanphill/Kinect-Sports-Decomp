extern int fn_82A2C1E8();
extern int fn_82F68CC0();


int fn_82A2C278(int param_1,int *param_2,unsigned __int64 param_3,int param_4)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned char bVar3;
  unsigned char bVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  
  iVar8 = fn_82A2C1E8(param_3);
  if (iVar8 != 0) {
    bVar1 = *(unsigned char *)(param_4 + 0x28);
    uVar5 = *(unsigned int *)(param_4 + 0x40);
    *(unsigned char *)(iVar8 + 0x34) = bVar1 & 0x3f;
    *(short *)(iVar8 + 0x36) = (short)(uVar5 >> 6);
    fn_82F68CC0(iVar8 + 0x50,param_4);
    if ((bVar1 & 0x80) != 0) {
      *(unsigned char *)(iVar8 + 0x35) = *(unsigned char *)(iVar8 + 0x35) | 2;
    }
    bVar2 = *(unsigned char *)(param_4 + 0x2b);
    bVar3 = *(unsigned char *)(param_4 + 0x2a);
    bVar4 = *(unsigned char *)(param_4 + 0x29);
    iVar10 = ((unsigned int)*(unsigned char *)(param_4 + 0x2e) * 0x100 + (unsigned int)*(unsigned char *)(param_4 + 0x2d)) * 0x100 +
             (unsigned int)*(unsigned char *)(param_4 + 0x2c);
    uVar6 = *(unsigned int *)(param_4 + 0x38);
    uVar7 = *(unsigned int *)(param_4 + 0x3c);
    iVar9 = ((unsigned int)*(unsigned char *)(param_4 + 0x31) * 0x100 + (unsigned int)*(unsigned char *)(param_4 + 0x30)) * 0x100 +
            (unsigned int)*(unsigned char *)(param_4 + 0x2f);
    *(unsigned int *)(iVar8 + 0x18) = *(unsigned int *)(param_4 + 0x34);
    *(int *)(iVar8 + 0x20) = iVar9;
    *(int *)(iVar8 + 0x14) = iVar10 * 0x1000;
    *(unsigned int *)(iVar8 + 0x1c) = (((unsigned int)bVar2 * 0x100 + (unsigned int)bVar3) * 0x100 + (unsigned int)bVar4) * 0x1000;
    *(unsigned int *)(iVar8 + 0x40) = uVar6;
    *(unsigned int *)(iVar8 + 0x44) = uVar7;
    if (((bVar1 & 0x40) == 0) || (iVar10 == 0)) {
      iVar10 = -1;
      *(unsigned int *)(iVar8 + 0x28) = 0xffffffff;
    }
    else {
      *(int *)(iVar8 + 0x2c) = iVar10 * 0x1000;
      *(int *)(iVar8 + 0x30) = iVar9;
      iVar10 = iVar9 + iVar10 + -1;
      *(unsigned int *)(iVar8 + 0x28) = 0;
    }
    *(int *)(iVar8 + 0x24) = iVar10;
    *(int **)(iVar8 + 8) = param_2;
    param_2[4] = param_2[4] + 1;
    if (((param_3 & 0xffffffff) != 0) ||
       (piVar11 = (int *)(param_1 + 0x78), (*(unsigned char *)((int)param_2 + 0x35) & 4) == 0)) {
      piVar11 = param_2;
    }
    iVar10 = *piVar11;
    *(int **)(iVar8 + 0x4c) = piVar11;
    *(int *)(iVar8 + 0x48) = iVar10;
    *(int *)(iVar10 + 4) = iVar8 + 0x48;
    *piVar11 = iVar8 + 0x48;
  }
  return iVar8;
}

