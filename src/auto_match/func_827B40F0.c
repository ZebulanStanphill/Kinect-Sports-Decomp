extern int fn_827B3D38();
extern int fn_827B3E60();


void fn_827B40F0(int param_1,__int64 param_2,unsigned __int64 param_3,__int64 param_4,unsigned __int64 param_5
                  )

{
  unsigned int uVar1;
  int iVar2;
  unsigned __int64 uVar3;
  __int64 lVar4;
  unsigned __int64 uVar5;
  __int64 lVar6;
  int iVar7;
  __int64 lVar8;
  __int64 lVar9;
  unsigned __int64 uVar10;
  int iVar12;
  __int64 lVar11;
  unsigned int *puVar13;
  unsigned __int64 uVar14;
  __int64 lVar15;
  unsigned __int64 uVar16;
  unsigned __int64 uVar17;
  
  uVar1 = (int)param_2 >> 8;
  uVar16 = (unsigned __int64)(int)uVar1;
  iVar12 = (int)param_3 >> 8;
  uVar17 = (unsigned __int64)iVar12;
  iVar7 = (int)param_4 >> 8;
  uVar10 = param_4 - param_2;
  uVar14 = param_5 - param_3;
  iVar2 = (int)param_5 >> 8;
  param_3 = param_3 & 0xff;
  if ((int)uVar1 < *(int *)(param_1 + 0x4c)) {
    *(unsigned int *)(param_1 + 0x4c) = uVar1;
  }
  if (*(int *)(param_1 + 0x54) < (int)uVar1) {
    *(unsigned int *)(param_1 + 0x54) = uVar1;
  }
  if (iVar12 < *(int *)(param_1 + 0x50)) {
    *(int *)(param_1 + 0x50) = iVar12;
  }
  if (*(int *)(param_1 + 0x58) < iVar12) {
    *(int *)(param_1 + 0x58) = iVar12;
  }
  if (iVar7 < *(int *)(param_1 + 0x4c)) {
    *(int *)(param_1 + 0x4c) = iVar7;
  }
  if (*(int *)(param_1 + 0x54) < iVar7) {
    *(int *)(param_1 + 0x54) = iVar7;
  }
  if (iVar2 < *(int *)(param_1 + 0x50)) {
    *(int *)(param_1 + 0x50) = iVar2;
  }
  if (*(int *)(param_1 + 0x58) < iVar2) {
    *(int *)(param_1 + 0x58) = iVar2;
  }
  puVar13 = (unsigned int *)(param_1 + 0x3c);
  if (*(unsigned int *)(param_1 + 0x40) != uVar17 || *(unsigned int *)(param_1 + 0x3c) != uVar16) {
    if (*(int *)(param_1 + 0x44) != 0 || *(int *)(param_1 + 0x48) != 0) {
      fn_827B3D38(param_1 + 0x14,puVar13);
    }
    *puVar13 = uVar1;
    *(int *)(param_1 + 0x40) = iVar12;
    *(unsigned int *)(param_1 + 0x44) = 0;
    *(unsigned int *)(param_1 + 0x48) = 0;
  }
  if (iVar12 != iVar2) {
    lVar8 = 1;
    iVar12 = (int)uVar10;
    if (iVar12 == 0) {
      lVar15 = 0x100;
      iVar12 = (int)((param_2 + ((unsigned __int64)uVar1 & 0xffffff) * -0x100 & 0xffffffff) << 1);
      if ((int)uVar14 < 0) {
        lVar15 = 0;
        lVar8 = -1;
      }
      uVar17 = lVar8 + uVar17;
      lVar6 = (unsigned __int64)*(unsigned int *)(param_1 + 0x44) + (lVar15 - param_3);
      lVar4 = (__int64)(int)(lVar15 - param_3) * (__int64)iVar12 +
              (unsigned __int64)*(unsigned int *)(param_1 + 0x48);
      *(int *)(param_1 + 0x44) = (int)lVar6;
      *(int *)(param_1 + 0x48) = (int)lVar4;
      if (*puVar13 != uVar16 || *(unsigned int *)(param_1 + 0x40) != uVar17) {
        if (lVar4 != 0 || lVar6 != 0) {
          fn_827B3D38(param_1 + 0x14,puVar13);
        }
        *puVar13 = uVar1;
        *(int *)(param_1 + 0x40) = (int)uVar17;
        *(unsigned int *)(param_1 + 0x44) = 0;
        *(unsigned int *)(param_1 + 0x48) = 0;
      }
      uVar10 = lVar15 - 0x80U & 0x7fffffff;
      iVar7 = (int)(uVar10 << 1);
      lVar4 = (__int64)iVar7 * (__int64)iVar12;
      while ((int)uVar17 != iVar2) {
        uVar17 = lVar8 + uVar17;
        *(int *)(param_1 + 0x44) = iVar7;
        *(int *)(param_1 + 0x48) = (int)lVar4;
        if (*puVar13 != uVar16 || *(unsigned int *)(param_1 + 0x40) != uVar17) {
          if (lVar4 != 0 || uVar10 != 0) {
            fn_827B3D38(param_1 + 0x14,puVar13);
          }
          *puVar13 = uVar1;
          *(int *)(param_1 + 0x40) = (int)uVar17;
          *(unsigned int *)(param_1 + 0x44) = 0;
          *(unsigned int *)(param_1 + 0x48) = 0;
        }
      }
      iVar7 = (int)lVar15 + (int)(param_5 & 0xff) + -0x100;
      *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + iVar7;
      *(int *)(param_1 + 0x48) = iVar7 * iVar12 + *(int *)(param_1 + 0x48);
      return;
    }
    lVar15 = 0x100;
    uVar16 = (__int64)(0x100 - (int)param_3) * (__int64)iVar12;
    if ((int)uVar14 < 0) {
      uVar16 = (__int64)(int)param_3 * (__int64)iVar12;
      lVar15 = 0;
      lVar8 = -1;
      uVar14 = -uVar14;
    }
    iVar12 = (int)uVar14;
    uVar3 = uVar14 & ~(((uVar16 & 0x7fffffff) << 1 | (uVar16 & 0xffffffff) >> 0x1f) - 1);
    uVar5 = uVar14 & ~(((uVar16 & 0x7fffffff) << 1 | (uVar16 & 0xffffffff) >> 0x1f) - 1);
    lVar6 = uVar16 - (__int64)((int)uVar16 / iVar12) * (__int64)iVar12;
    trapWord(6,uVar14,0);
    lVar4 = (__int64)((int)uVar16 / iVar12);
    trapWord(6,uVar14,0);
    trapWord(5,uVar3,0xffff);
    trapWord(5,uVar5,0xffff);
    if (lVar6 < 0) {
      lVar4 = lVar4 + -1;
      lVar6 = lVar6 + uVar14;
    }
    lVar4 = lVar4 + param_2;
    fn_827B3E60(param_1,uVar17,param_2,param_3,lVar4,lVar15,uVar3,uVar5);
    uVar17 = lVar8 + uVar17;
    uVar1 = (int)lVar4 >> 8;
    if ((unsigned __int64)*puVar13 != (__int64)(int)uVar1 || *(unsigned int *)(param_1 + 0x40) != uVar17) {
      if (*(int *)(param_1 + 0x44) != 0 || *(int *)(param_1 + 0x48) != 0) {
        fn_827B3D38(param_1 + 0x14,puVar13);
      }
      *puVar13 = uVar1;
      *(int *)(param_1 + 0x40) = (int)uVar17;
      *(unsigned int *)(param_1 + 0x44) = 0;
      *(unsigned int *)(param_1 + 0x48) = 0;
    }
    param_2 = lVar4;
    if ((int)uVar17 != iVar2) {
      uVar16 = (uVar10 & 0xffffff) * 0x100;
      trapWord(6,uVar14,0);
      lVar9 = uVar16 - (__int64)((int)uVar16 / iVar12) * (__int64)iVar12;
      lVar11 = (__int64)((int)uVar16 / iVar12);
      trapWord(6,uVar14,0);
      trapWord(5,uVar14 & ~(((uVar16 & 0x7fffffff) << 1 | (uVar10 & 0xffffff) >> 0x17) - 1),0xffff);
      trapWord(5,uVar14 & ~(((uVar16 & 0x7fffffff) << 1 | (uVar10 & 0xffffff) >> 0x17) - 1),0xffff);
      if (lVar9 < 0) {
        lVar11 = lVar11 + -1;
        lVar9 = lVar9 + uVar14;
      }
      lVar6 = lVar6 - uVar14;
      do {
        lVar6 = lVar9 + lVar6;
        param_2 = lVar11;
        if (-1 < lVar6) {
          lVar6 = lVar6 - uVar14;
          param_2 = lVar11 + 1;
        }
        param_2 = lVar4 + param_2;
        fn_827B3E60(param_1,uVar17,lVar4,0x100 - lVar15,param_2,lVar15);
        uVar1 = (int)param_2 >> 8;
        uVar17 = lVar8 + uVar17;
        if ((unsigned __int64)*puVar13 != (__int64)(int)uVar1 || *(unsigned int *)(param_1 + 0x40) != uVar17) {
          if (*(int *)(param_1 + 0x44) != 0 || *(int *)(param_1 + 0x48) != 0) {
            fn_827B3D38(param_1 + 0x14,puVar13);
          }
          *puVar13 = uVar1;
          *(int *)(param_1 + 0x40) = (int)uVar17;
          *(unsigned int *)(param_1 + 0x44) = 0;
          *(unsigned int *)(param_1 + 0x48) = 0;
        }
        lVar4 = param_2;
      } while ((int)uVar17 != iVar2);
    }
    param_3 = 0x100 - lVar15;
  }
  fn_827B3E60(param_1,uVar17,param_2,param_3,param_4,param_5 & 0xff);
  return;
}

