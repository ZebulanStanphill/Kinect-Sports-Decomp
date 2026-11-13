extern int fn_82820EF8();
extern int fn_82827770();


void fn_8282C5F8(int param_1,unsigned char *param_2)

{
  unsigned char bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  unsigned int *puVar6;
  unsigned __int64 uVar5;
  unsigned int uVar7;
  int *piVar8;
  __int64 lVar9;
  unsigned int uVar10;
  __int64 lVar11;
  
  puVar6 = (unsigned int *)0x0;
  if (((*param_2 & 0x80) != 0) || ((*param_2 & 0x20) != 0)) {
    *(int *)(param_1 + 0x114) = *(int *)(param_1 + 0xb8);
    iVar4 = (unsigned int)*(unsigned char *)(param_1 + 0x51) * 0x21 + *(int *)(param_1 + 0xb8);
    *(int *)(param_1 + 200) = iVar4;
    puVar6 = (unsigned int *)(*(int *)(param_1 + 0x54) + iVar4);
    cVar2 = fn_82827770(param_1);
    if (cVar2 != '\0') {
      uVar7 = 0;
      if (*(char *)(param_1 + 0x51) != '\0') {
        lVar9 = 0;
        do {
          lVar11 = lVar9 + (unsigned __int64)*(unsigned int *)(param_1 + 0x114);
          fn_82820EF8(lVar11,4);
          fn_82820EF8(lVar11 + 0xd,4);
          fn_82820EF8(lVar11 + 0x1d,4);
          fn_82820EF8(lVar11 + 0x19,4);
          fn_82820EF8(lVar11 + 0x11,4);
          fn_82820EF8(lVar11 + 0x15,4);
          fn_82820EF8(lVar11 + 9,4);
          fn_82820EF8(lVar11 + 5,4);
          uVar7 = uVar7 + 1;
          lVar9 = lVar9 + 0x21;
        } while (uVar7 < *(unsigned char *)(param_1 + 0x51));
      }
    }
    *(unsigned char *)(param_1 + 0x134) = *(unsigned char *)(param_1 + 0x134) | 0x20;
  }
  bVar1 = *param_2 >> 6 & 1;
  if ((bVar1 != 0) || ((*param_2 & 0x20) != 0)) {
    if (bVar1 != 0) {
      puVar6 = *(unsigned int **)(param_1 + 0xbc);
    }
    piVar8 = (int *)(param_1 + 0xdc);
    *(unsigned int *)(param_1 + 0xdc) = *puVar6;
    cVar2 = fn_82827770(param_1);
    if (cVar2 != '\0') {
      fn_82820EF8(piVar8,4);
    }
    if (*piVar8 == 0) {
      *(unsigned int *)(param_1 + 0xe0) = 0;
      puVar6 = puVar6 + 1;
      *(unsigned int *)(param_1 + 0xe4) = 0;
    }
    else {
      *(unsigned int **)(param_1 + 0xe0) = puVar6 + 1;
      cVar2 = fn_82827770(param_1);
      if ((cVar2 != '\0') && (uVar7 = 0, *(int *)(param_1 + 0x24) != 0)) {
        lVar9 = 0;
        do {
          fn_82820EF8((unsigned __int64)*(unsigned int *)(param_1 + 0xe0) + lVar9,4);
          uVar7 = uVar7 + 1;
          lVar9 = lVar9 + 4;
        } while (uVar7 < *(unsigned int *)(param_1 + 0x24));
      }
      iVar4 = *(int *)(param_1 + 0x24) * 4 + *(int *)(param_1 + 0xe0);
      *(int *)(param_1 + 0xe4) = iVar4;
      puVar6 = (unsigned int *)(iVar4 + *piVar8);
    }
    *(unsigned int *)(param_1 + 0xd0) = *puVar6;
    cVar2 = fn_82827770(param_1);
    if (cVar2 != '\0') {
      fn_82820EF8((int *)(param_1 + 0xd0),4);
    }
    iVar4 = *(int *)(param_1 + 0xd0);
    puVar6 = puVar6 + 1;
    if (iVar4 == 0) {
      *(unsigned int *)(param_1 + 0xd4) = 0;
      *(unsigned int **)(param_1 + 0xe8) = puVar6;
    }
    else {
      *(unsigned int **)(param_1 + 0xd4) = puVar6;
      *(int *)(param_1 + 0xe8) = (int)puVar6 + iVar4;
    }
    cVar2 = fn_82827770(param_1);
    if (cVar2 != '\0') {
      uVar7 = 0;
      if (*(int *)(param_1 + 0x28) != 0) {
        lVar9 = (unsigned __int64)*(unsigned int *)(param_1 + 0xe8) + 4;
        do {
          fn_82820EF8(lVar9 + -4,4);
          fn_82820EF8(lVar9 + 4,4);
          fn_82820EF8(lVar9,4);
          uVar7 = uVar7 + 1;
          lVar9 = lVar9 + 0xe;
        } while (uVar7 < *(unsigned int *)(param_1 + 0x28));
      }
    }
    *(unsigned char *)(param_1 + 0x134) = *(unsigned char *)(param_1 + 0x134) | 0x10;
  }
  if ((*param_2 & 0x10) != 0) {
    iVar4 = *(int *)(param_1 + 0x2c) * 0x14 + *(int *)(param_1 + 0xc0);
    *(int *)(param_1 + 0xec) = *(int *)(param_1 + 0xc0);
    *(int *)(param_1 + 0xf0) = iVar4;
    iVar4 = *(int *)(param_1 + 0x30) * 4 + iVar4;
    iVar3 = *(int *)(param_1 + 0x3c) * 0x14 + iVar4;
    *(int *)(param_1 + 0xf4) = iVar4;
    *(int *)(param_1 + 0xf8) = iVar3;
    iVar3 = *(int *)(param_1 + 0x40) * 4 + iVar3;
    iVar4 = *(int *)(param_1 + 0x34) * 0xc + iVar3;
    *(int *)(param_1 + 0xfc) = iVar3;
    *(int *)(param_1 + 0x100) = iVar4;
    iVar4 = *(int *)(param_1 + 0x38) * 4 + iVar4;
    iVar3 = *(int *)(param_1 + 0x44) * 0xc + iVar4;
    *(int *)(param_1 + 0x104) = iVar4;
    iVar4 = *(int *)(param_1 + 0x48) * 4 + iVar3;
    *(int *)(param_1 + 0x108) = iVar3;
    *(int *)(param_1 + 0x118) = iVar4;
    *(unsigned int *)(param_1 + 0x11c) = (unsigned int)*(unsigned char *)(param_1 + 0x53) * 8 + iVar4;
    cVar2 = fn_82827770(param_1);
    if (cVar2 != '\0') {
      uVar5 = 0;
      uVar7 = 0;
      if (*(int *)(param_1 + 0x2c) != 0) {
        iVar4 = 0;
        do {
          fn_82820EF8(iVar4 + *(int *)(param_1 + 0xec) + 4,4);
          fn_82820EF8(iVar4 + *(int *)(param_1 + 0xec),4);
          fn_82820EF8(iVar4 + *(int *)(param_1 + 0xec) + 0xc,4);
          fn_82820EF8(iVar4 + *(int *)(param_1 + 0xec) + 0x10,4);
          fn_82820EF8(iVar4 + *(int *)(param_1 + 0xec) + 8,4);
          uVar10 = 0;
          if (*(int *)(iVar4 + *(int *)(param_1 + 0xec) + 4) != 0) {
            lVar9 = (uVar5 & 0x3fffffff) << 2;
            do {
              fn_82820EF8(lVar9 + (unsigned __int64)*(unsigned int *)(param_1 + 0xf0),4);
              uVar10 = uVar10 + 1;
              uVar5 = uVar5 + 1;
              lVar9 = lVar9 + 4;
            } while (uVar10 < *(unsigned int *)(iVar4 + *(int *)(param_1 + 0xec) + 4));
          }
          uVar7 = uVar7 + 1;
          iVar4 = iVar4 + 0x14;
        } while (uVar7 < *(unsigned int *)(param_1 + 0x2c));
      }
      uVar5 = 0;
      uVar7 = 0;
      if (*(int *)(param_1 + 0x3c) != 0) {
        iVar4 = 0;
        do {
          fn_82820EF8(iVar4 + *(int *)(param_1 + 0xf4) + 4,4);
          fn_82820EF8(iVar4 + *(int *)(param_1 + 0xf4),4);
          fn_82820EF8(iVar4 + *(int *)(param_1 + 0xf4) + 0xc,4);
          fn_82820EF8(iVar4 + *(int *)(param_1 + 0xf4) + 0x10,4);
          fn_82820EF8(iVar4 + *(int *)(param_1 + 0xf4) + 8,4);
          uVar10 = 0;
          if (*(int *)(iVar4 + *(int *)(param_1 + 0xf4) + 4) != 0) {
            lVar9 = (uVar5 & 0x3fffffff) << 2;
            do {
              fn_82820EF8(lVar9 + (unsigned __int64)*(unsigned int *)(param_1 + 0xf8),4);
              uVar10 = uVar10 + 1;
              uVar5 = uVar5 + 1;
              lVar9 = lVar9 + 4;
            } while (uVar10 < *(unsigned int *)(iVar4 + *(int *)(param_1 + 0xf4) + 4));
          }
          uVar7 = uVar7 + 1;
          iVar4 = iVar4 + 0x14;
        } while (uVar7 < *(unsigned int *)(param_1 + 0x3c));
      }
      uVar5 = 0;
      uVar7 = 0;
      if (*(int *)(param_1 + 0x34) != 0) {
        iVar4 = 0;
        do {
          fn_82820EF8(iVar4 + *(int *)(param_1 + 0xfc) + 8,4);
          fn_82820EF8(iVar4 + *(int *)(param_1 + 0xfc),4);
          fn_82820EF8(iVar4 + *(int *)(param_1 + 0xfc) + 4,4);
          uVar10 = 0;
          if (*(int *)(iVar4 + *(int *)(param_1 + 0xfc) + 8) != 0) {
            lVar9 = (uVar5 & 0x3fffffff) << 2;
            do {
              fn_82820EF8(lVar9 + (unsigned __int64)*(unsigned int *)(param_1 + 0x100),4);
              uVar10 = uVar10 + 1;
              uVar5 = uVar5 + 1;
              lVar9 = lVar9 + 4;
            } while (uVar10 < *(unsigned int *)(iVar4 + *(int *)(param_1 + 0xfc) + 8));
          }
          uVar7 = uVar7 + 1;
          iVar4 = iVar4 + 0xc;
        } while (uVar7 < *(unsigned int *)(param_1 + 0x34));
      }
      uVar5 = 0;
      uVar7 = 0;
      if (*(int *)(param_1 + 0x44) != 0) {
        iVar4 = 0;
        do {
          fn_82820EF8(iVar4 + *(int *)(param_1 + 0x104) + 8,4);
          fn_82820EF8(iVar4 + *(int *)(param_1 + 0x104),4);
          fn_82820EF8(iVar4 + *(int *)(param_1 + 0x104) + 4,4);
          uVar10 = 0;
          if (*(int *)(iVar4 + *(int *)(param_1 + 0x104) + 8) != 0) {
            lVar9 = (uVar5 & 0x3fffffff) << 2;
            do {
              fn_82820EF8(lVar9 + (unsigned __int64)*(unsigned int *)(param_1 + 0x108),4);
              uVar10 = uVar10 + 1;
              uVar5 = uVar5 + 1;
              lVar9 = lVar9 + 4;
            } while (uVar10 < *(unsigned int *)(iVar4 + *(int *)(param_1 + 0x104) + 8));
          }
          uVar7 = uVar7 + 1;
          iVar4 = iVar4 + 0xc;
        } while (uVar7 < *(unsigned int *)(param_1 + 0x44));
      }
      uVar7 = 0;
      if (*(char *)(param_1 + 0x53) != '\0') {
        lVar9 = 0;
        do {
          fn_82820EF8(lVar9 + (unsigned __int64)*(unsigned int *)(param_1 + 0x118) + 4,4);
          fn_82820EF8(lVar9 + (unsigned __int64)*(unsigned int *)(param_1 + 0x118),4);
          uVar7 = uVar7 + 1;
          lVar9 = lVar9 + 8;
        } while (uVar7 < *(unsigned char *)(param_1 + 0x53));
      }
      uVar7 = 0;
      if (*(int *)(param_1 + 0x4c) != 0) {
        lVar9 = 0;
        do {
          fn_82820EF8((unsigned __int64)*(unsigned int *)(param_1 + 0x11c) + lVar9 + 0xe,2);
          fn_82820EF8((unsigned __int64)*(unsigned int *)(param_1 + 0x11c) + lVar9,4);
          fn_82820EF8((unsigned __int64)*(unsigned int *)(param_1 + 0x11c) + lVar9 + 4,4);
          fn_82820EF8((unsigned __int64)*(unsigned int *)(param_1 + 0x11c) + lVar9 + 8,4);
          uVar7 = uVar7 + 1;
          lVar9 = lVar9 + 0x10;
        } while (uVar7 < *(unsigned int *)(param_1 + 0x4c));
      }
    }
    *(unsigned char *)(param_1 + 0x134) = *(unsigned char *)(param_1 + 0x134) | 8;
  }
  return;
}

