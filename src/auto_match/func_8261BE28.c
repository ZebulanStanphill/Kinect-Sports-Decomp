extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;


void fn_8261BE28(unsigned short *param_1)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned short uVar9;
  int iVar10;
  float fVar11;
  int *piVar12;
  int iVar13;
  
  fVar11 = lbl_821CA460;
  iVar13 = 0;
  iVar1 = (*(int *)(param_1 + 4) - *(int *)(param_1 + 2)) / (int)(unsigned int)*param_1;
  if (0 < iVar1) {
    piVar12 = (int *)(*(int *)(param_1 + 2) + -4);
    do {
      do {
        lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
        iVar2 = (int)(((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - fVar11) *
                     (float)(__int64)iVar1);
      } while (iVar2 == iVar13);
      iVar13 = iVar13 + 1;
      piVar12 = piVar12 + 1;
      iVar10 = *piVar12;
      iVar2 = *(int *)((unsigned int)*param_1 * iVar2 + *(int *)(param_1 + 2));
      uVar3 = *(unsigned int *)(iVar10 + 0x14);
      uVar4 = *(unsigned int *)(iVar10 + 0x18);
      uVar9 = *(unsigned short *)(iVar10 + 8);
      uVar5 = *(unsigned int *)(iVar10 + 0x1c);
      uVar6 = *(unsigned int *)(iVar10 + 0x20);
      uVar7 = *(unsigned int *)(iVar10 + 0x24);
      uVar8 = *(unsigned int *)(iVar10 + 0x28);
      *(unsigned int *)(iVar10 + 0x14) = *(unsigned int *)(iVar2 + 0x14);
      *(unsigned int *)(iVar10 + 0x18) = *(unsigned int *)(iVar2 + 0x18);
      *(unsigned int *)(iVar10 + 0x1c) = *(unsigned int *)(iVar2 + 0x1c);
      *(unsigned int *)(iVar10 + 0x20) = *(unsigned int *)(iVar2 + 0x20);
      *(unsigned int *)(iVar10 + 0x24) = *(unsigned int *)(iVar2 + 0x24);
      *(unsigned int *)(iVar10 + 0x28) = *(unsigned int *)(iVar2 + 0x28);
      *(unsigned short *)(iVar10 + 8) = *(unsigned short *)(iVar2 + 8);
      *(unsigned int *)(iVar2 + 0x14) = uVar3;
      *(unsigned int *)(iVar2 + 0x18) = uVar4;
      *(unsigned int *)(iVar2 + 0x1c) = uVar5;
      *(unsigned int *)(iVar2 + 0x20) = uVar6;
      *(unsigned int *)(iVar2 + 0x24) = uVar7;
      *(unsigned int *)(iVar2 + 0x28) = uVar8;
      *(unsigned short *)(iVar2 + 8) = uVar9;
    } while (iVar13 < iVar1);
    return;
  }
  return;
}

