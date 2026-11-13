unsigned __int64 fn_82A3AD78(__int64 param_1,unsigned int param_2)

{
  unsigned int uVar1;
  int *piVar3;
  unsigned __int64 uVar2;
  int iVar4;
  int iVar5;
  __int64 lVar6;
  int iVar8;
  __int64 lVar7;
  int iVar10;
  __int64 lVar9;
  int iVar11;
  unsigned __int64 uVar12;
  unsigned int uVar13;
  unsigned int *puVar14;
  unsigned int *puVar15;
  int iVar16;
  
  piVar3 = (int *)param_1;
  iVar4 = (unsigned int)*(unsigned short *)(*piVar3 + param_2) * 4;
  uVar1 = *(unsigned int *)(iVar4 + piVar3[2]);
  *(unsigned int *)(iVar4 + piVar3[2]) = param_2;
  uVar13 = (param_2 - piVar3[1]) + 4;
  iVar4 = param_2 * 4;
  if (uVar1 <= uVar13) {
    *(unsigned int *)(piVar3[4] + iVar4) = 0;
    *(unsigned int *)(piVar3[3] + iVar4) = 0;
    return 0;
  }
  uVar2 = 2;
  iVar10 = 2;
  piVar3[0x14] = (param_2 - uVar1) + 2;
  iVar11 = 2;
  iVar16 = 2;
  puVar15 = (unsigned int *)(iVar4 + piVar3[3]);
  puVar14 = (unsigned int *)(piVar3[4] + iVar4);
  do {
    iVar8 = iVar10 + uVar1;
    lVar6 = (unsigned __int64)*(unsigned char *)(*piVar3 + iVar8) - (unsigned __int64)*(unsigned char *)(*piVar3 + iVar10 + param_2)
    ;
    iVar4 = iVar10;
    if (lVar6 == 0) {
      iVar5 = (iVar8 - uVar1) + param_2;
      do {
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + 1;
        if (0x100 < iVar4) goto LAB_82a3ae6c;
        lVar6 = (unsigned __int64)*(unsigned char *)((iVar8 - iVar10) + *piVar3 + iVar4) -
                (unsigned __int64)*(unsigned char *)(iVar5 + *piVar3);
      } while (lVar6 == 0);
    }
    if ((int)lVar6 < 0) {
      if (iVar16 < iVar4) {
        if ((int)uVar2 < iVar4) {
LAB_82a3ae6c:
          lVar6 = (uVar2 + 0x12 & 0x3fffffff) * 4 + param_1;
          do {
            uVar2 = uVar2 + 1;
            lVar6 = lVar6 + 4;
            *(int *)lVar6 = (param_2 - uVar1) + 2;
          } while ((int)uVar2 < iVar4);
          if (0x31 < iVar4) {
LAB_82a3b094:
            *puVar15 = *(unsigned int *)(uVar1 * 4 + piVar3[3]);
            *puVar14 = *(unsigned int *)(piVar3[4] + uVar1 * 4);
            goto LAB_82a3af34;
          }
        }
        iVar10 = iVar11;
        iVar16 = iVar4;
        if (iVar4 <= iVar11) {
          iVar10 = iVar4;
        }
      }
      *puVar14 = uVar1;
      iVar4 = piVar3[3];
      puVar14 = (unsigned int *)(uVar1 * 4 + iVar4);
    }
    else {
      if (iVar11 < iVar4) {
        if ((int)uVar2 < iVar4) {
          lVar6 = (uVar2 + 0x12 & 0x3fffffff) * 4 + param_1;
          do {
            uVar2 = uVar2 + 1;
            lVar6 = lVar6 + 4;
            *(int *)lVar6 = (param_2 - uVar1) + 2;
          } while ((int)uVar2 < iVar4);
          if (0x31 < iVar4) goto LAB_82a3b094;
        }
        iVar10 = iVar4;
        iVar11 = iVar4;
        if (iVar16 <= iVar4) {
          iVar10 = iVar16;
        }
      }
      *puVar15 = uVar1;
      iVar4 = piVar3[4];
      puVar15 = (unsigned int *)(uVar1 * 4 + iVar4);
    }
    uVar1 = *(unsigned int *)(uVar1 * 4 + iVar4);
  } while (uVar13 < uVar1);
  *puVar15 = 0;
  *puVar14 = 0;
LAB_82a3af34:
  lVar6 = 0;
  iVar4 = (int)uVar2;
  if (0 < iVar4) {
    do {
      if (*(char *)(*piVar3 + param_2 + (int)lVar6) !=
          *(char *)((*piVar3 - piVar3[0xf]) + (int)lVar6 + param_2)) break;
      lVar6 = lVar6 + 1;
    } while ((int)lVar6 < iVar4);
  }
  iVar10 = (int)lVar6;
  if (1 < iVar10) {
    lVar7 = (lVar6 + 0x13U & 0x3fffffff) * 4 + param_1;
    lVar9 = lVar6;
    do {
      lVar9 = lVar9 + -1;
      lVar7 = lVar7 + -4;
      *(unsigned int *)lVar7 = 0;
    } while (1 < (int)lVar9);
    if (0x32 < iVar10) goto LAB_82a3b068;
  }
  iVar11 = 0;
  if (0 < iVar4) {
    do {
      if (*(char *)(*piVar3 + param_2 + iVar11) !=
          *(char *)((*piVar3 - piVar3[0x10]) + iVar11 + param_2)) break;
      iVar11 = iVar11 + 1;
    } while (iVar11 < iVar4);
  }
  if (iVar10 < iVar11) {
    lVar7 = (lVar6 + 0x12U & 0x3fffffff) * 4 + param_1;
    do {
      lVar6 = lVar6 + 1;
      lVar7 = lVar7 + 4;
      *(unsigned int *)lVar7 = 1;
    } while ((int)lVar6 < iVar11);
  }
  iVar10 = 0;
  if (0 < iVar4) {
    do {
      if (*(char *)(*piVar3 + param_2 + iVar10) !=
          *(char *)((*piVar3 - piVar3[0x11]) + iVar10 + param_2)) break;
      iVar10 = iVar10 + 1;
    } while (iVar10 < iVar4);
  }
  if ((int)lVar6 < iVar10) {
    param_1 = (lVar6 + 0x12U & 0x3fffffff) * 4 + param_1;
    do {
      lVar6 = lVar6 + 1;
      param_1 = param_1 + 4;
      *(unsigned int *)param_1 = 2;
    } while ((int)lVar6 < iVar10);
  }
LAB_82a3b068:
  uVar12 = -((unsigned __int64)param_2 & 0x7fff) + 0x7fff;
  if ((int)uVar12 < iVar4) {
    uVar2 = -(unsigned __int64)(-((unsigned __int64)param_2 & 0x7fff) + 0x7ffd < 0xffffffff7ffffffe) & uVar12;
  }
  return uVar2;
}

