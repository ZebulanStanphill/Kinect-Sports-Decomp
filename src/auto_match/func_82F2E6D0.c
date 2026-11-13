void fn_82F2E6D0(int param_1,__int64 param_2,__int64 param_3)

{
  int iVar1;
  short sVar2;
  unsigned int uVar3;
  int iVar4;
  int iVar5;
  unsigned int uVar6;
  int iVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  int iVar10;
  unsigned int uVar11;
  unsigned __int64 uVar12;
  __int64 lVar13;
  unsigned char *puVar14;
  unsigned char *pbVar15;
  unsigned int uVar16;
  int iVar17;
  unsigned int uVar18;
  int iVar19;
  __int64 lVar20;
  
  uVar3 = *(unsigned int *)(param_1 + 0x60);
  uVar12 = (unsigned __int64)uVar3;
  iVar17 = *(int *)(param_1 + 0x74);
  trapWord(6,uVar12,0);
  uVar9 = *(unsigned int *)(iVar17 + 4);
  uVar16 = (uVar9 - 1) * uVar3;
  iVar4 = (int)((int)((uVar12 + ((unsigned __int64)uVar3 & 0x7fffffff) * 2 & 0xffffffff) << 3) + 0x1fU &
               0xffffffe0) >> 3;
  uVar18 = (int)(((unsigned __int64)uVar9 & 0x1ffffff) << 7) / (int)uVar3;
  iVar5 = (int)(*(unsigned short *)(iVar17 + 0xe) * uVar9 + 0x1f & 0xffffffe0) >> 3;
  iVar7 = (int)param_2;
  trapWord(5,uVar12 & ~((((unsigned __int64)uVar9 & 0xffffff) << 8 | ((unsigned __int64)uVar9 & 0x1ffffff) >> 0x18
                        ) - 1),0xffff);
  trapWord(5,(unsigned __int64)uVar9 &
             ~((((unsigned __int64)uVar16 & 0x7fffffff) << 1 | (unsigned __int64)(uVar16 >> 0x1f)) - 1),0xffff);
  iVar1 = (int)uVar16 / (int)uVar9;
  trapWord(6,(unsigned __int64)uVar9,0);
  uVar18 = 0xffffffffU - ((int)uVar18 >> 0x1f) & uVar18;
  iVar19 = iVar5 * iVar7 + *(int *)(param_1 + 0x78);
  lVar13 = (__int64)iVar4 * (__int64)iVar7 + (unsigned __int64)*(unsigned int *)(param_1 + 0x84);
  if (*(int *)(iVar17 + 0x10) == 0) {
    uVar16 = 0x3e0;
    uVar9 = 0x7c00;
    iVar17 = 0x11;
  }
  else if (((*(int *)(iVar17 + 0x28) == 0x7c00) && (*(int *)(iVar17 + 0x2c) == 0x3e0)) &&
          (*(int *)(iVar17 + 0x30) == 0x1f)) {
    uVar16 = 0x3e0;
    uVar9 = 0x7c00;
    iVar17 = 0x11;
  }
  else {
    uVar16 = 0x7e0;
    uVar9 = 0xf800;
    iVar17 = 0x12;
  }
  if (iVar7 < (int)param_3) {
    param_3 = param_3 - param_2;
    do {
      uVar11 = 0;
      if (0 < iVar1) {
        lVar20 = (__int64)iVar1;
        do {
          uVar6 = uVar11 & 0x7f;
          iVar7 = ((int)uVar11 >> 7) * 2;
          iVar10 = 0x80 - uVar6;
          uVar11 = uVar11 + uVar18;
          sVar2 = *(short *)(iVar7 + iVar19);
          uVar8 = (unsigned int)*(short *)(iVar19 + 2 + iVar7);
          puVar14 = (unsigned char *)lVar13;
          *puVar14 = (char)(((__int64)(int)((int)sVar2 & 0x1f) * (__int64)iVar10 +
                             (__int64)(int)(uVar8 & 0x1f) * (__int64)(int)uVar6 & 0xffffffffU) >>
                           7);
          puVar14[1] = (char)(((__int64)(int)((int)sVar2 & uVar16) * (__int64)iVar10 +
                               (__int64)(int)(uVar8 & uVar16) * (__int64)(int)uVar6 & 0xffffffffU)
                             >> 0xc);
          puVar14[2] = (char)(((int)sVar2 & uVar9) * iVar10 + (uVar8 & uVar9) * uVar6 >> iVar17);
          lVar13 = lVar13 + 3;
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
      }
      if (iVar1 < *(int *)(param_1 + 0x60)) {
        lVar20 = (__int64)iVar1;
        do {
          iVar7 = (int)uVar11 >> 7;
          lVar20 = lVar20 + 1;
          uVar11 = uVar11 + uVar18;
          sVar2 = *(short *)(iVar7 * 2 + iVar19);
          pbVar15 = (unsigned char *)lVar13;
          *pbVar15 = (unsigned char)sVar2 & 0x1f;
          pbVar15[1] = (unsigned char)(uVar16 >> 5) & (unsigned char)((unsigned int)(int)sVar2 >> 5);
          pbVar15[2] = (unsigned char)(((int)sVar2 & uVar9) >> (iVar17 - 7U & 0x3f));
          lVar13 = lVar13 + 3;
        } while ((int)lVar20 < *(int *)(param_1 + 0x60));
      }
      param_3 = param_3 + -1;
      lVar13 = lVar13 + ((__int64)iVar4 - (uVar12 + ((unsigned __int64)uVar3 & 0x7fffffff) * 2));
      iVar19 = iVar19 + iVar5;
    } while (param_3 != 0);
  }
  return;
}

