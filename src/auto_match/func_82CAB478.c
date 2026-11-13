extern int fn_82CAB2D8();
extern unsigned int iStack00000024;
extern unsigned int uStack_ac;


void fn_82CAB478(unsigned char *param_1,unsigned int param_2,int param_3)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned char bVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  char cVar9;
  int iVar10;
  unsigned __int64 uVar11;
  unsigned __int64 uVar12;
  int iVar13;
  __int64 lVar14;
  __int64 lVar15;
  __int64 lVar16;
  unsigned char *pbVar17;
  unsigned char *pbVar18;
  unsigned char *pbVar19;
  unsigned char *pbVar20;
  unsigned char *pbVar21;
  unsigned __int64 uVar22;
  unsigned __int64 uVar23;
  unsigned __int64 uVar24;
  unsigned __int64 uVar25;
  unsigned __int64 uVar26;
  unsigned __int64 uVar27;
  unsigned __int64 uVar28;
  unsigned __int64 uVar29;
  __int64 lVar30;
  int iStack00000024;
  unsigned char *pbStack_b0;
  unsigned int uStack_ac;
  
  uVar4 = param_3 + 10 >> 3;
  lVar30 = (__int64)(int)uVar4;
  pbStack_b0 = param_1 + param_2 * -5;
  uVar28 = ((unsigned __int64)uVar4 & 0x7fffffff) << 1;
  uStack_ac = 8;
  pbVar21 = param_1 + -param_2;
  pbVar19 = param_1 + (param_2 & 0x7fffffff) * -2;
  pbVar20 = param_1 + param_2 * 3;
  pbVar18 = param_1 + param_2 * -3;
  pbVar17 = param_1 + (param_2 & 0x3fffffff) * -4;
  iStack00000024 = param_3;
  do {
    uVar11 = (unsigned __int64)*pbVar18;
    uVar24 = (unsigned __int64)*pbVar17;
    uVar25 = (unsigned __int64)*pbVar19;
    uVar12 = (unsigned __int64)*pbVar21;
    bVar1 = *param_1;
    uVar27 = (unsigned __int64)bVar1;
    uVar23 = (unsigned __int64)*pbVar20;
    bVar2 = param_1[param_2];
    uVar26 = (unsigned __int64)bVar2;
    bVar3 = (param_1 + param_2)[param_2];
    uVar29 = (unsigned __int64)bVar3;
    uVar22 = uVar12 - uVar27;
    lVar15 = ((-((unsigned __int64)(uVar28 < (uVar11 - uVar25) + lVar30) - 1) -
              ((unsigned __int64)(uVar28 < (uVar24 - uVar11) + lVar30) - 1)) -
             ((unsigned __int64)(uVar28 < (uVar25 - uVar12) + lVar30) - 1)) -
             ((unsigned __int64)(uVar28 < uVar22 + lVar30) - 1);
    if (lVar15 != 0) {
      lVar15 = ((((-((unsigned __int64)(uVar28 < (*pbStack_b0 - uVar24) + lVar30) - 1) -
                  ((unsigned __int64)(uVar28 < (uVar23 - pbVar20[param_2]) + lVar30) - 1)) -
                 ((unsigned __int64)(uVar28 < (uVar29 - uVar23) + lVar30) - 1)) -
                ((unsigned __int64)(uVar28 < ((unsigned int)bVar2 - (unsigned int)bVar3) + uVar4) - 1)) -
               ((unsigned __int64)(uVar28 < (uVar27 - uVar26) + lVar30) - 1)) + lVar15;
    }
    if (((int)lVar15 < 6) ||
       (iVar10 = fn_82CAB2D8(uVar24,uVar11,uVar25,uVar12,uVar27,uVar26,uVar29,uVar23), iVar10 == 0
       )) {
      uVar8 = (unsigned int)uVar22;
      iVar10 = (int)(((uVar25 - uVar26) + 2 & 0xffffffff) << 1) -
               (uVar8 + (int)((uVar22 & 0xffffffff) << 2));
      uVar5 = iVar10 >> 3;
      uVar6 = iVar10 >> 0x1f;
      lVar15 = (__int64)(int)(uVar5 ^ uVar6) - (__int64)(int)uVar6;
      if ((int)lVar15 < iStack00000024) {
        iVar13 = (int)(((uVar24 - uVar12) + 2 & 0xffffffff) << 1) +
                 (int)(uVar25 - uVar11) + (int)((uVar25 - uVar11 & 0xffffffff) << 2);
        iVar10 = (int)(((uVar27 - uVar23) + 2 & 0xffffffff) << 1) +
                 (int)(uVar29 - uVar26) + (int)((uVar29 - uVar26 & 0xffffffff) << 2);
        uVar6 = iVar10 >> 0x1f;
        uVar7 = iVar13 >> 0x1f;
        lVar16 = (__int64)(int)(iVar10 >> 3 ^ uVar6) - (__int64)(int)uVar6;
        lVar14 = (__int64)(int)(iVar13 >> 3 ^ uVar7) - (__int64)(int)uVar7;
        if ((int)lVar14 < (int)lVar16) {
          lVar16 = lVar14;
        }
        uVar11 = lVar15 - lVar16;
        if ((0 < (__int64)uVar11) && ((int)(uVar5 ^ uVar8) < 0)) {
          iVar10 = (int)((uVar8 ^ (int)uVar8 >> 0x1f) - ((int)uVar8 >> 0x1f)) >> 1;
          iVar13 = (int)uVar11 + (int)((uVar11 & 0xffffffff) << 2) >> 3;
          if (iVar10 < iVar13) {
            iVar13 = iVar10;
          }
          bVar2 = (char)(uVar22 >> 0x18) >> 7;
          cVar9 = (bVar2 ^ (unsigned char)iVar13) - bVar2;
          *pbVar21 = (char)uVar12 - cVar9;
          *param_1 = cVar9 + bVar1;
        }
      }
    }
    else {
      iVar13 = (int)((uVar29 + uVar11 & 0xffffffff) << 1);
      iVar10 = (int)(uVar29 + uVar11);
      param_1[(param_2 & 0x7fffffff) * -2] =
           (unsigned char)((int)(uVar11 + uVar25) + (int)((uVar11 + uVar25 & 0xffffffff) << 1) + iVar10 + 4
                 >> 3);
      param_1[param_2] = (unsigned char)((int)(((unsigned int)bVar3 + (unsigned int)bVar2) * 3 + iVar10 + 4) >> 3);
      *pbVar21 = (unsigned char)((int)uVar12 + (int)((uVar12 & 0xffffffff) << 1) + iVar13 + (int)uVar11 + 4
                       >> 3);
      *param_1 = (unsigned char)((int)((unsigned int)bVar1 + (unsigned int)bVar1 * 2 + iVar13 + (unsigned int)bVar3 + 4) >> 3);
    }
    uVar11 = (unsigned __int64)uStack_ac;
    param_1 = param_1 + 1;
    pbVar20 = pbVar20 + 1;
    pbStack_b0 = pbStack_b0 + 1;
    uStack_ac = (unsigned int)(uVar11 - 1);
    pbVar21 = pbVar21 + 1;
    pbVar19 = pbVar19 + 1;
    pbVar18 = pbVar18 + 1;
    pbVar17 = pbVar17 + 1;
  } while (uVar11 - 1 != 0);
  return;
}

