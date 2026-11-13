void fn_82F2E2D0(int param_1,__int64 param_2,__int64 param_3)

{
  int iVar1;
  unsigned int uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  unsigned int uVar6;
  int iVar7;
  int iVar8;
  unsigned int uVar9;
  unsigned __int64 uVar10;
  __int64 lVar11;
  unsigned char *puVar12;
  unsigned int uVar13;
  unsigned int uVar14;
  __int64 lVar15;
  
  iVar5 = (int)param_2;
  uVar2 = *(unsigned int *)(param_1 + 0x60);
  uVar10 = (unsigned __int64)uVar2;
  trapWord(6,uVar10,0);
  uVar9 = *(unsigned int *)(*(int *)(param_1 + 0x74) + 4);
  uVar6 = (unsigned int)*(unsigned short *)(*(int *)(param_1 + 0x74) + 0xe);
  iVar3 = (int)(uVar6 * uVar2 + 0x1f & 0xffffffe0) >> 3;
  uVar13 = (uVar9 - 1) * uVar2;
  uVar14 = (int)(((unsigned __int64)uVar9 & 0x1ffffff) << 7) / (int)uVar2;
  iVar4 = (int)(uVar6 * uVar9 + 0x1f & 0xffffffe0) >> 3;
  trapWord(5,uVar10 & ~((((unsigned __int64)uVar9 & 0xffffff) << 8 | ((unsigned __int64)uVar9 & 0x1ffffff) >> 0x18
                        ) - 1),0xffff);
  iVar1 = (int)uVar13 / (int)uVar9;
  trapWord(6,(unsigned __int64)uVar9,0);
  trapWord(5,(unsigned __int64)uVar9 &
             ~((((unsigned __int64)uVar13 & 0x7fffffff) << 1 | (unsigned __int64)(uVar13 >> 0x1f)) - 1),0xffff);
  uVar14 = 0xffffffffU - ((int)uVar14 >> 0x1f) & uVar14;
  iVar7 = iVar4 * iVar5 + *(int *)(param_1 + 0x78);
  lVar11 = (__int64)iVar3 * (__int64)iVar5 + (unsigned __int64)*(unsigned int *)(param_1 + 0x84);
  if (iVar5 < (int)param_3) {
    param_3 = param_3 - param_2;
    do {
      uVar9 = 0;
      if (0 < iVar1) {
        lVar15 = (__int64)iVar1;
        do {
          uVar6 = uVar9 & 0x7f;
          iVar8 = 0x80 - uVar6;
          iVar5 = ((int)uVar9 >> 7) * 3;
          uVar9 = uVar9 + uVar14;
          puVar12 = (unsigned char *)lVar11;
          *puVar12 = (char)((int)(*(unsigned char *)(iVar7 + 3 + iVar5) * uVar6 +
                                 (unsigned int)*(unsigned char *)(iVar5 + iVar7) * iVar8) >> 7);
          puVar12[1] = (char)((int)(*(unsigned char *)(iVar7 + 4 + iVar5) * uVar6 +
                                   (unsigned int)*(unsigned char *)(iVar7 + 1 + iVar5) * iVar8) >> 7);
          puVar12[2] = (char)((int)(*(unsigned char *)(iVar7 + 5 + iVar5) * uVar6 +
                                   (unsigned int)*(unsigned char *)(iVar7 + 2 + iVar5) * iVar8) >> 7);
          lVar11 = lVar11 + 3;
          lVar15 = lVar15 + -1;
        } while (lVar15 != 0);
      }
      if (iVar1 < *(int *)(param_1 + 0x60)) {
        lVar15 = (__int64)iVar1;
        do {
          iVar5 = (int)uVar9 >> 7;
          lVar15 = lVar15 + 1;
          uVar9 = uVar9 + uVar14;
          iVar5 = iVar5 * 3;
          puVar12 = (unsigned char *)lVar11;
          *puVar12 = *(unsigned char *)(iVar5 + iVar7);
          puVar12[1] = *(unsigned char *)(iVar7 + 1 + iVar5);
          puVar12[2] = *(unsigned char *)(iVar7 + 2 + iVar5);
          lVar11 = lVar11 + 3;
        } while ((int)lVar15 < *(int *)(param_1 + 0x60));
      }
      param_3 = param_3 + -1;
      lVar11 = lVar11 + ((__int64)iVar3 - (uVar10 + ((unsigned __int64)uVar2 & 0x7fffffff) * 2));
      iVar7 = iVar7 + iVar4;
    } while (param_3 != 0);
  }
  return;
}

