extern int fn_827B3D38();


void fn_827B3E60(int param_1,unsigned __int64 param_2,__int64 param_3,__int64 param_4,__int64 param_5,
                  __int64 param_6)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  int iVar5;
  int iVar7;
  unsigned __int64 uVar6;
  __int64 lVar8;
  unsigned __int64 uVar9;
  __int64 lVar10;
  unsigned __int64 uVar11;
  int iVar12;
  __int64 lVar13;
  unsigned int uVar14;
  __int64 lVar15;
  unsigned __int64 uVar16;
  unsigned int *puVar17;
  int iVar18;
  int iVar19;
  __int64 lVar20;
  unsigned __int64 uVar21;
  
  uVar1 = (int)(unsigned int)param_3 >> 8;
  uVar2 = (int)(unsigned int)param_5 >> 8;
  uVar4 = (unsigned int)param_3 & 0xff;
  uVar3 = (unsigned int)param_5 & 0xff;
  iVar5 = (int)param_6;
  iVar18 = (int)param_4;
  uVar14 = (unsigned int)param_2;
  if (iVar18 == iVar5) {
    if ((unsigned __int64)*(unsigned int *)(param_1 + 0x3c) != (__int64)(int)uVar2 ||
        *(unsigned int *)(param_1 + 0x40) != param_2) {
      if (*(int *)(param_1 + 0x48) != 0 || *(int *)(param_1 + 0x44) != 0) {
        fn_827B3D38(param_1 + 0x14,(unsigned int *)(param_1 + 0x3c));
      }
      *(unsigned int *)(param_1 + 0x3c) = uVar2;
      *(unsigned int *)(param_1 + 0x40) = uVar14;
      *(unsigned int *)(param_1 + 0x44) = 0;
      *(unsigned int *)(param_1 + 0x48) = 0;
    }
  }
  else {
    if (uVar1 == uVar2) {
      iVar7 = (iVar5 - iVar18) + *(int *)(param_1 + 0x44);
      iVar5 = (uVar3 + uVar4) * (iVar5 - iVar18) + *(int *)(param_1 + 0x48);
    }
    else {
      uVar21 = param_5 - param_3;
      uVar9 = (__int64)(int)(0x100 - uVar4) * (__int64)(iVar5 - iVar18);
      iVar12 = 0x100;
      lVar15 = 1;
      if ((__int64)uVar21 < 0) {
        uVar9 = (__int64)(iVar5 - iVar18) * (__int64)(int)uVar4;
        iVar12 = 0;
        lVar15 = -1;
        uVar21 = -uVar21;
      }
      iVar18 = (int)uVar21;
      trapWord(6,uVar21,0);
      lVar13 = uVar9 - (__int64)((int)uVar9 / iVar18) * (__int64)iVar18;
      lVar20 = (__int64)((int)uVar9 / iVar18);
      trapWord(6,uVar21,0);
      trapWord(5,uVar21 & ~(((uVar9 & 0x7fffffff) << 1 | (uVar9 & 0xffffffff) >> 0x1f) - 1),0xffff);
      trapWord(5,uVar21 & ~(((uVar9 & 0x7fffffff) << 1 | (uVar9 & 0xffffffff) >> 0x1f) - 1),0xffff);
      if (lVar13 < 0) {
        lVar20 = lVar20 + -1;
        lVar13 = lVar13 + uVar21;
      }
      uVar9 = lVar15 + (int)uVar1;
      lVar8 = (__int64)(int)(iVar12 + uVar4) * (__int64)(int)lVar20 +
              (unsigned __int64)*(unsigned int *)(param_1 + 0x48);
      *(int *)(param_1 + 0x48) = (int)lVar8;
      lVar10 = lVar20 + (unsigned __int64)*(unsigned int *)(param_1 + 0x44);
      *(int *)(param_1 + 0x44) = (int)lVar10;
      puVar17 = (unsigned int *)(param_1 + 0x3c);
      if (*(unsigned int *)(param_1 + 0x3c) != uVar9 || *(unsigned int *)(param_1 + 0x40) != param_2) {
        if (lVar8 != 0 || lVar10 != 0) {
          fn_827B3D38(param_1 + 0x14,puVar17);
        }
        *puVar17 = (unsigned int)uVar9;
        *(unsigned int *)(param_1 + 0x40) = uVar14;
        *(unsigned int *)(param_1 + 0x44) = 0;
        *(unsigned int *)(param_1 + 0x48) = 0;
      }
      param_4 = lVar20 + param_4;
      iVar19 = (int)param_4;
      if ((unsigned int)uVar9 != uVar2) {
        trapWord(6,uVar21,0);
        uVar11 = (lVar20 - param_4) + param_6;
        trapWord(6,uVar21,0);
        uVar6 = (uVar11 & 0xffffff) * 0x100;
        lVar20 = uVar6 - (__int64)((int)uVar6 / iVar18) * (__int64)iVar18;
        uVar16 = (unsigned __int64)((int)uVar6 / iVar18);
        trapWord(5,uVar21 & ~(((uVar6 & 0x7fffffff) << 1 | (uVar11 & 0xffffff) >> 0x17) - 1),0xffff)
        ;
        trapWord(5,uVar21 & ~(((uVar6 & 0x7fffffff) << 1 | (uVar11 & 0xffffff) >> 0x17) - 1),0xffff)
        ;
        if (lVar20 < 0) {
          uVar16 = uVar16 - 1;
          lVar20 = lVar20 + uVar21;
        }
        lVar13 = lVar13 - uVar21;
        do {
          lVar13 = lVar20 + lVar13;
          uVar6 = uVar16;
          if (-1 < lVar13) {
            lVar13 = lVar13 - uVar21;
            uVar6 = uVar16 + 1;
          }
          uVar9 = lVar15 + uVar9;
          lVar10 = uVar6 + *(unsigned int *)(param_1 + 0x44);
          lVar8 = (uVar6 & 0xffffff) * 0x100 + (unsigned __int64)*(unsigned int *)(param_1 + 0x48);
          *(int *)(param_1 + 0x44) = (int)lVar10;
          *(int *)(param_1 + 0x48) = (int)lVar8;
          param_4 = uVar6 + param_4;
          iVar19 = (int)param_4;
          if (*puVar17 != uVar9 || *(unsigned int *)(param_1 + 0x40) != param_2) {
            if (lVar8 != 0 || lVar10 != 0) {
              fn_827B3D38(param_1 + 0x14,puVar17);
            }
            *puVar17 = (unsigned int)uVar9;
            *(unsigned int *)(param_1 + 0x40) = uVar14;
            *(unsigned int *)(param_1 + 0x44) = 0;
            *(unsigned int *)(param_1 + 0x48) = 0;
          }
        } while ((unsigned int)uVar9 != uVar2);
      }
      iVar7 = (iVar5 - iVar19) + *(int *)(param_1 + 0x44);
      iVar5 = ((uVar3 - iVar12) + 0x100) * (iVar5 - iVar19) + *(int *)(param_1 + 0x48);
    }
    *(int *)(param_1 + 0x48) = iVar5;
    *(int *)(param_1 + 0x44) = iVar7;
  }
  return;
}

