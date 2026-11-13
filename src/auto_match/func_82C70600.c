__int64 fn_82C70600(__int64 param_1,int param_2,__int64 param_3,int param_4,int *param_5,
                      int param_6)

{
  unsigned char bVar1;
  unsigned int uVar2;
  int iVar3;
  int iVar4;
  unsigned char *puVar5;
  unsigned int uVar6;
  __int64 lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  unsigned int uVar11;
  int iVar12;
  unsigned __int64 uVar13;
  int iVar14;
  __int64 lVar15;
  
  uVar13 = 0;
  uVar2 = *param_5 >> 1;
  uVar6 = uVar2 & 0xfffffffc;
  param_6 = param_6 - param_5[3];
  iVar3 = (int)param_3;
  iVar4 = (int)param_1;
  if (0 < (int)uVar6) {
    iVar8 = 0;
    iVar12 = iVar4 - iVar3;
    do {
      iVar14 = (int)uVar13;
      bVar1 = *(unsigned char *)((iVar14 >> 2) + param_5[0xf]);
      if (bVar1 == 0) {
        *(unsigned int *)(iVar12 + iVar14 + iVar3) = 0x80808080;
        *(unsigned int *)(iVar14 + iVar3) = 0x80808080;
      }
      else if ((bVar1 & 0x55) == 0x55) {
        iVar9 = (*(int *)(iVar8 + param_5[0x11]) * param_6 >> 0x14) + param_5[3];
        if (((*(int *)(iVar8 + param_5[0x10]) < 0) || (iVar9 < 0)) || (param_5[1] <= iVar9)) {
          *(unsigned char *)(iVar12 + iVar14 + iVar3) = 0x80;
          *(unsigned char *)(iVar14 + iVar3) = 0x80;
        }
        else {
          iVar9 = (iVar9 >> 1) * uVar2 + (*(int *)(iVar8 + param_5[0x10]) >> 1);
          *(unsigned char *)(iVar12 + iVar14 + iVar3) = *(unsigned char *)(iVar9 + param_2);
          *(unsigned char *)(iVar14 + iVar3) = *(unsigned char *)(iVar9 + param_4);
        }
        iVar9 = *(int *)(iVar8 + param_5[0x10] + 8);
        iVar10 = (*(int *)(iVar8 + param_5[0x11] + 8) * param_6 >> 0x14) + param_5[3];
        if (((iVar9 < 0) || (iVar10 < 0)) || (param_5[1] <= iVar10)) {
          *(unsigned char *)(iVar14 + iVar4 + 1) = 0x80;
          *(unsigned char *)(iVar14 + iVar3 + 1) = 0x80;
        }
        else {
          iVar9 = (iVar10 >> 1) * uVar2 + (iVar9 >> 1);
          *(unsigned char *)(iVar14 + iVar4 + 1) = *(unsigned char *)(iVar9 + param_2);
          *(unsigned char *)(iVar14 + iVar3 + 1) = *(unsigned char *)(iVar9 + param_4);
        }
        iVar9 = *(int *)(iVar8 + 0x10 + param_5[0x10]);
        iVar10 = (*(int *)(iVar8 + 0x10 + param_5[0x11]) * param_6 >> 0x14) + param_5[3];
        if (((iVar9 < 0) || (iVar10 < 0)) || (param_5[1] <= iVar10)) {
          *(unsigned char *)(iVar14 + iVar4 + 2) = 0x80;
          *(unsigned char *)(iVar14 + iVar3 + 2) = 0x80;
        }
        else {
          iVar9 = (iVar10 >> 1) * uVar2 + (iVar9 >> 1);
          *(unsigned char *)(iVar14 + iVar4 + 2) = *(unsigned char *)(iVar9 + param_2);
          *(unsigned char *)(iVar14 + iVar3 + 2) = *(unsigned char *)(iVar9 + param_4);
        }
        iVar9 = *(int *)(iVar8 + 0x18 + param_5[0x10]);
        iVar10 = (*(int *)(iVar8 + 0x18 + param_5[0x11]) * param_6 >> 0x14) + param_5[3];
        if (((iVar9 < 0) || (iVar10 < 0)) || (param_5[1] <= iVar10)) {
          *(unsigned char *)(iVar14 + iVar4 + 3) = 0x80;
          *(unsigned char *)(iVar14 + iVar3 + 3) = 0x80;
        }
        else {
          iVar9 = (iVar10 >> 1) * uVar2 + (iVar9 >> 1);
          *(unsigned char *)(iVar14 + iVar4 + 3) = *(unsigned char *)(iVar9 + param_2);
          *(unsigned char *)(iVar14 + iVar3 + 3) = *(unsigned char *)(iVar9 + param_4);
        }
      }
      else {
        iVar14 = iVar14 + iVar3;
        uVar11 = 0;
        lVar7 = 4;
        iVar9 = iVar8;
        do {
          if ((1 << ((uVar11 & 0x1f) << 1) & (unsigned int)bVar1) == 0) {
LAB_82c708ec:
            *(unsigned char *)(iVar12 + iVar14 + uVar11) = 0x80;
            *(unsigned char *)(iVar14 + uVar11) = 0x80;
          }
          else {
            iVar10 = (*(int *)(param_5[0x11] + iVar9) * param_6 >> 0x14) + param_5[3];
            if (((*(int *)(param_5[0x10] + iVar9) < 0) || (iVar10 < 0)) || (param_5[1] <= iVar10))
            goto LAB_82c708ec;
            iVar10 = (iVar10 >> 1) * uVar2 + (*(int *)(param_5[0x10] + iVar9) >> 1);
            *(unsigned char *)(iVar12 + iVar14 + uVar11) = *(unsigned char *)(iVar10 + param_2);
            *(unsigned char *)(iVar14 + uVar11) = *(unsigned char *)(iVar10 + param_4);
          }
          uVar11 = uVar11 + 1;
          iVar9 = iVar9 + 8;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      uVar13 = uVar13 + 4;
      iVar8 = iVar8 + 0x20;
    } while ((int)uVar13 < (int)uVar6);
  }
  if ((uVar6 != uVar2) &&
     (bVar1 = *(unsigned char *)(((int)uVar13 >> 2) + param_5[0xf]), (int)uVar13 < (int)uVar2)) {
    lVar7 = (__int64)(int)uVar2 - uVar13;
    param_3 = uVar13 + param_3;
    lVar15 = (uVar13 & 0x1fffffff) << 3;
    do {
      puVar5 = (unsigned char *)param_3;
      if ((1 << ((unsigned int)((uVar13 & 0xffffffff) << 1) & 6) & (unsigned int)bVar1) == 0) {
LAB_82c709b8:
        puVar5[iVar4 - iVar3] = 0x80;
        *puVar5 = 0x80;
      }
      else {
        iVar12 = *(int *)(param_5[0x10] + (int)lVar15);
        iVar8 = (*(int *)(param_5[0x11] + (int)lVar15) * param_6 >> 0x14) + param_5[3];
        if (((iVar12 < 0) || (iVar8 < 0)) || (param_5[1] <= iVar8)) goto LAB_82c709b8;
        iVar12 = (iVar8 >> 1) * uVar2 + (iVar12 >> 1);
        puVar5[iVar4 - iVar3] = *(unsigned char *)(iVar12 + param_2);
        *puVar5 = *(unsigned char *)(iVar12 + param_4);
      }
      uVar13 = uVar13 + 1;
      lVar15 = lVar15 + 8;
      param_3 = param_3 + 1;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return (int)uVar2 + param_1;
}

