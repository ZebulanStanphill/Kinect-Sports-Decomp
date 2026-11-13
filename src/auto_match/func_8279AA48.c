typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_8279FB38();


unsigned int fn_8279AA48(int param_1)

{
  unsigned int uVar1;
  int iVar2;
  int *piVar3;
  unsigned __int64 uVar4;
  bool bVar5;
  unsigned __int64 uVar6;
  __int64 lVar7;
  unsigned int uVar8;
  int iVar9;
  
  if ((*(unsigned char *)(param_1 + 0x13f) & 3) != 0) {
    fn_8279FB38();
    *(unsigned char *)(param_1 + 0x13f) = *(unsigned char *)(param_1 + 0x13f) & 0xfc;
  }
  if (*(short *)(param_1 + 0x110) == *(short *)(param_1 + 0x138)) goto LAB_8279abfc;
  uVar1 = *(unsigned int *)(param_1 + 0x28);
  if (uVar1 == 0) {
LAB_8279abf0:
    iVar9 = 0;
  }
  else {
    uVar4 = (unsigned __int64)uVar1;
    iVar2 = *(int *)(param_1 + 0x24);
    iVar9 = 0;
    uVar6 = uVar4 - 1;
    piVar3 = *(int **)((int)((uVar6 & 0xffffffff) << 2) + iVar2);
    if (*(int *)(param_1 + 0x114) == 0) {
LAB_8279aad0:
      bVar5 = true;
    }
    else {
      bVar5 = false;
      if ((*(unsigned short *)(*(int *)(param_1 + 0x114) + 0x68) & 1) != 0) goto LAB_8279aad0;
    }
    if (bVar5) {
      if (*piVar3 < 0) {
        uVar8 = (unsigned int)*(unsigned char *)(piVar3 + 2);
      }
      else {
        uVar8 = piVar3[8];
      }
      if (uVar8 == 0) {
        if (-1 < (int)uVar6) {
          uVar6 = uVar4 - 2;
        }
        iVar9 = 1;
      }
    }
    if ((uVar4 <= (uVar6 & 0xffffffff)) || (bVar5 = false, (int)uVar6 < 0)) {
      bVar5 = true;
    }
    if (bVar5) goto LAB_8279abf0;
    lVar7 = (uVar6 & 0x3fffffff) << 2;
    piVar3 = *(int **)(iVar2 + (int)lVar7);
    if (*piVar3 < 0) {
      uVar8 = (unsigned int)*(unsigned short *)((int)piVar3 + 0x16);
    }
    else {
      uVar8 = piVar3[6];
    }
    while( true ) {
      if ((uVar4 <= (uVar6 & 0xffffffff)) || (bVar5 = false, (int)uVar6 < 0)) {
        bVar5 = true;
      }
      if (bVar5) break;
      if (iVar9 != 0) {
        if ((float)(__int64)*(int *)(*(int *)((int)lVar7 + iVar2) + 0x10) <
            ((float)(__int64)(int)(piVar3[4] + uVar8) - *(float *)(param_1 + 0x48)) +
            *(float *)(param_1 + 0x40)) break;
      }
      if (-1 < (int)uVar6) {
        uVar6 = uVar6 - 1;
        lVar7 = lVar7 + -4;
      }
      iVar9 = iVar9 + 1;
    }
    iVar9 = uVar1 - iVar9;
  }
  *(int *)(param_1 + 0x10c) = iVar9;
  *(short *)(param_1 + 0x110) = *(short *)(param_1 + 0x138);
LAB_8279abfc:
  return *(unsigned int *)(param_1 + 0x10c);
}

