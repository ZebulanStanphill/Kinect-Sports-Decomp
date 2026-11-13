#define true 1
extern unsigned int lbl_8200E1B0;


void fn_8270AA60(unsigned int *param_1,int param_2)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  int *piVar3;
  unsigned int *puVar4;
  int iVar5;
  unsigned __int64 uVar6;
  int iVar7;
  int iVar8;
  unsigned int uVar9;
  unsigned int *puVar10;
  unsigned int uVar12;
  unsigned __int64 uVar11;
  
  uVar2 = *param_1;
  *(unsigned int *)(param_2 + 0x20) = *(unsigned int *)(param_2 + 0x20) & 0xfffffffe;
  uVar2 = *(unsigned int *)(param_2 + 0x18) >> (uVar2 & 0x3f);
  uVar12 = uVar2 - 1 >> 3 & 0x1ffffffc;
  *(unsigned int *)(uVar12 + param_2 + 0x20) =
       *(unsigned int *)(uVar12 + param_2 + 0x20) & ~(1 << (uVar2 - 1 & 0x1f));
  piVar3 = *(int **)(param_2 + 0x1c);
  iVar7 = uVar2 << (*param_1 & 0x3f);
  if (uVar2 < 0x21) {
    *(short *)((int)piVar3 + iVar7 + -2) = (short)uVar2;
    *(short *)(piVar3 + 3) = (short)uVar2;
  }
  else {
    *(unsigned short *)((int)piVar3 + iVar7 + -2) = 0x21;
    *(unsigned short *)(piVar3 + 3) = 0x21;
    *(unsigned int *)((int)piVar3 + iVar7 + -8) = uVar2;
    piVar3[4] = uVar2;
  }
  piVar3[2] = param_2;
  puVar10 = param_1 + 2;
  uVar11 = (unsigned __int64)*(unsigned short *)(piVar3 + 3);
  if (0x20 < uVar11) {
    uVar11 = (unsigned __int64)(unsigned int)piVar3[4];
  }
  iVar7 = (int)uVar11;
  param_1[0x65] = iVar7 + param_1[0x65];
  if (uVar11 < 0x21) {
    iVar8 = (int)(uVar11 << 2);
    iVar5 = *(int *)(iVar8 + (int)puVar10);
    if (iVar5 == 0) {
      piVar3[1] = (int)piVar3;
      *piVar3 = (int)piVar3;
    }
    else {
      *piVar3 = iVar5;
      piVar3[1] = *(int *)(iVar5 + 4);
      **(unsigned int **)(iVar5 + 4) = piVar3;
      *(int **)(iVar5 + 4) = piVar3;
    }
    *(int **)(iVar8 + (int)puVar10) = piVar3;
    *puVar10 = 1 << (iVar7 - 1U & 0x3f) | *puVar10;
    return;
  }
  if (uVar11 < 0x41) {
    param_1 = param_1 + 0x23;
    iVar8 = (int)((uVar11 - 0x20 & 0xffffffff) << 2);
    iVar5 = *(int *)(iVar8 + (int)param_1);
    if (iVar5 == 0) {
      piVar3[1] = (int)piVar3;
      *piVar3 = (int)piVar3;
    }
    else {
      *piVar3 = iVar5;
      piVar3[1] = *(int *)(iVar5 + 4);
      **(unsigned int **)(iVar5 + 4) = piVar3;
      *(int **)(iVar5 + 4) = piVar3;
    }
    *(int **)(iVar8 + (int)param_1) = piVar3;
    *param_1 = 1 << (iVar7 - 0x21U & 0x3f) | *param_1;
    return;
  }
  param_1 = param_1 + 0x44;
  uVar2 = piVar3[4];
  uVar12 = uVar2 >> 5;
  if (uVar12 == 0) {
    uVar12 = 0;
  }
  else if (uVar12 < 0x10000) {
    if ((uVar12 & 0x7ff0000) == 0) {
      if ((uVar12 & 0xff00) == 0) {
        uVar12 = (unsigned int)(unsigned char)(&lbl_8200E1B0)[uVar12 & 0xff];
      }
      else {
        uVar12 = (unsigned char)(&lbl_8200E1B0)[uVar2 >> 0xd & 0xff] + 8;
      }
    }
    else if ((uVar12 & 0x7000000) == 0) {
      uVar12 = (unsigned char)(&lbl_8200E1B0)[uVar2 >> 0x15 & 0xff] + 0x10;
    }
    else {
      uVar12 = (unsigned char)(&lbl_8200E1B0)[uVar2 >> 0x1d] + 0x18;
    }
    uVar12 = (uVar2 >> ((uVar12 & 0xff) + 4 & 0x3f) & 1) + (uVar12 & 0xff) * 2;
  }
  else {
    uVar12 = 0x1f;
  }
  piVar3[8] = uVar12;
  piVar3[7] = 0;
  piVar3[6] = 0;
  uVar9 = 1 << (uVar12 & 0x3f);
  puVar10 = param_1 + uVar12 + 1;
  if ((*param_1 & uVar9) == 0) {
    *param_1 = *param_1 | uVar9;
    *puVar10 = (unsigned int)piVar3;
  }
  else {
    uVar9 = ((unsigned int *)*puVar10)[4];
    uVar11 = (unsigned __int64)(uVar2 << (-(unsigned int)(uVar12 < 0x1f) & 0x1c - (uVar12 >> 1) & 0x3f));
    puVar10 = (unsigned int *)*puVar10;
    while( true ) {
      if (uVar9 == uVar2) {
        puVar1 = (unsigned int *)puVar10[1];
        *puVar1 = piVar3;
        puVar10[1] = (unsigned int)piVar3;
        piVar3[1] = (int)puVar1;
        *piVar3 = (int)puVar10;
        piVar3[5] = 0;
        return;
      }
      uVar6 = uVar11 >> 0x1f;
      uVar11 = (uVar11 & 0x7fffffff) << 1;
      iVar7 = (int)uVar6 + 6;
      puVar4 = (unsigned int *)puVar10[iVar7];
      if (puVar4 == (unsigned int *)0x0) break;
      uVar9 = puVar4[4];
      puVar10 = puVar4;
    }
    puVar10[iVar7] = (unsigned int)piVar3;
  }
  piVar3[5] = (int)puVar10;
  *piVar3 = (int)piVar3;
  piVar3[1] = (int)piVar3;
  return;
}

