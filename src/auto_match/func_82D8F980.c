extern int fn_82CE5410();
extern int fn_83082030();


void fn_82D8F980(int param_1,unsigned int *param_2,int *param_3,int param_4,int *param_5)

{
  unsigned short uVar1;
  unsigned int uVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  unsigned int *puVar7;
  int iVar8;
  int iVar9;
  unsigned int uVar10;
  int iVar11;
  int iVar12;
  unsigned int uVar13;
  unsigned int uVar14;
  int *piVar15;
  unsigned __int64 uVar16;
  int iVar17;
  unsigned __int64 uVar18;
  int *apiStack_70 [28];
  
  uVar2 = *(unsigned int *)(param_4 + 4);
  uVar16 = (unsigned __int64)uVar2;
  piVar4 = (int *)fn_82CE5410();
  piVar3 = (int *)*piVar4;
  uVar10 = uVar2 * 4 + 0x7f & 0xffffff80;
  *piVar4 = uVar10 + (int)piVar3;
  piVar4 = (int *)fn_82CE5410();
  apiStack_70[0] = (int *)*piVar4;
  *piVar4 = uVar10 + (int)apiStack_70[0];
  if (0 < (int)uVar2) {
    iVar8 = 0;
    uVar18 = uVar16;
    do {
      *(unsigned int *)(iVar8 + (int)apiStack_70[0]) = 0;
      *(unsigned int *)(iVar8 + (int)piVar3) = 0;
      iVar8 = iVar8 + 4;
      uVar18 = uVar18 - 1;
    } while (uVar18 != 0);
  }
  if (*(char *)(param_1 + 0xd5) == '\0') {
    iVar8 = 0;
    if (0 < param_3[1]) {
      iVar17 = 0;
      do {
        iVar11 = *(int *)(iVar17 + *param_3);
        iVar9 = *(int *)(*(int *)*param_2 + iVar17);
        apiStack_70[0][iVar9] = 1;
        uVar1 = *(unsigned short *)(iVar11 + 0xb0);
        uVar10 = (unsigned int)uVar1;
        if (uVar1 == 0) {
          uVar10 = 1;
        }
        iVar8 = iVar8 + 1;
        iVar17 = iVar17 + 4;
        piVar3[iVar9] = piVar3[iVar9] + uVar10;
      } while (iVar8 < param_3[1]);
    }
  }
  else {
    iVar8 = 0;
    if (0 < param_3[1]) {
      iVar17 = 0;
      do {
        iVar11 = *(int *)(iVar17 + *param_3);
        uVar1 = *(unsigned short *)(iVar11 + 0xec);
        uVar10 = (unsigned int)uVar1;
        iVar9 = *(int *)(*(int *)*param_2 + iVar17);
        if ((unsigned int)*(unsigned char *)(param_1 + 0x306) == (int)(unsigned int)uVar1 >> 0xe) {
          uVar10 = (int)(unsigned int)uVar1 >> 7;
        }
        uVar1 = *(unsigned short *)(iVar11 + 0xea);
        uVar13 = (unsigned int)uVar1;
        if ((unsigned int)*(unsigned char *)(param_1 + 0x305) == (int)(unsigned int)uVar1 >> 0xe) {
          uVar13 = (int)(unsigned int)uVar1 >> 7;
        }
        uVar14 = uVar10 & 0x7f;
        if ((uVar10 & 0x7f) < (uVar13 & 0x7f)) {
          uVar14 = uVar13 & 0x7f;
        }
        if (uVar14 < 6) {
          apiStack_70[0][iVar9] = 1;
        }
        uVar10 = (unsigned int)*(unsigned short *)(iVar11 + 0xb0);
        if (*(unsigned short *)(iVar11 + 0xb0) == 0) {
          uVar10 = 1;
        }
        iVar8 = iVar8 + 1;
        iVar17 = iVar17 + 4;
        piVar3[iVar9] = piVar3[iVar9] + uVar10;
      } while (iVar8 < param_3[1]);
    }
  }
  if (0 < (int)uVar2) {
    iVar8 = 0;
    uVar18 = uVar16;
    do {
      if (*(int *)(iVar8 + (int)apiStack_70[0]) == 0) {
        *(unsigned int *)(iVar8 + (int)piVar3) = 0xffffffff;
      }
      iVar8 = iVar8 + 4;
      uVar18 = uVar18 - 1;
    } while (uVar18 != 0);
  }
  iVar8 = 0;
  if (0 < (int)uVar2) {
    iVar17 = 1;
    piVar4 = apiStack_70[0];
    piVar6 = piVar3;
    do {
      iVar11 = *piVar6;
      iVar9 = iVar8;
      if (iVar11 != -2) {
        iVar9 = iVar8 + 1;
        *(unsigned char *)(*param_5 + iVar8) = 0;
        *piVar4 = iVar8;
        if ((-1 < iVar11) && (iVar17 < (int)uVar2)) {
          iVar5 = iVar17;
          piVar15 = piVar6;
          do {
            piVar15 = piVar15 + 1;
            if (*(int *)(param_1 + 0xb4) <= iVar11 + 10) break;
            if ((-1 < *piVar15) && (iVar12 = *piVar15 + iVar11, iVar12 < *(int *)(param_1 + 0xb4)))
            {
              *(unsigned char *)(*param_5 + iVar8) = 1;
              *(int *)(((int)apiStack_70[0] - (int)piVar3) + (int)piVar15) = iVar8;
              *piVar15 = -2;
              iVar11 = iVar12;
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 < (int)uVar2);
        }
      }
      iVar8 = iVar9;
      piVar6 = piVar6 + 1;
      piVar4 = piVar4 + 1;
      iVar17 = iVar17 + 1;
      uVar16 = uVar16 - 1;
    } while (uVar16 != 0);
  }
  fn_83082030(param_2,apiStack_70,iVar8,param_4);
  piVar4 = apiStack_70[0];
  piVar6 = (int *)fn_82CE5410();
  *piVar6 = (int)piVar4;
  puVar7 = (unsigned int *)fn_82CE5410();
  *puVar7 = piVar3;
  return;
}

