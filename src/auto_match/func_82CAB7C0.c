#define true 1
extern int fn_82CAB2D8();


void fn_82CAB7C0(int param_1,int param_2,int param_3)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  char cVar7;
  int iVar8;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  int iVar11;
  unsigned char bVar12;
  __int64 lVar13;
  unsigned char bVar14;
  __int64 lVar15;
  __int64 lVar16;
  __int64 lVar17;
  unsigned __int64 uVar18;
  unsigned __int64 uVar19;
  unsigned __int64 uVar20;
  unsigned __int64 uVar21;
  unsigned __int64 uVar22;
  unsigned __int64 uVar23;
  unsigned __int64 uVar24;
  __int64 lVar25;
  unsigned __int64 uVar26;
  unsigned char *pbVar27;
  
  uVar3 = param_3 + 10 >> 3;
  lVar25 = (__int64)(int)uVar3;
  pbVar27 = (unsigned char *)(param_1 + -5);
  lVar17 = 8;
  uVar24 = ((unsigned __int64)uVar3 & 0x7fffffff) << 1;
  do {
    uVar21 = (unsigned __int64)pbVar27[3];
    uVar10 = (unsigned __int64)pbVar27[4];
    uVar9 = (unsigned __int64)pbVar27[2];
    uVar19 = (unsigned __int64)pbVar27[1];
    bVar12 = pbVar27[5];
    uVar22 = (unsigned __int64)bVar12;
    bVar1 = pbVar27[6];
    uVar23 = (unsigned __int64)bVar1;
    bVar2 = pbVar27[7];
    uVar26 = (unsigned __int64)bVar2;
    uVar20 = (unsigned __int64)pbVar27[8];
    uVar18 = uVar10 - uVar22;
    lVar15 = ((-((unsigned __int64)(uVar24 < (uVar9 - uVar21) + lVar25) - 1) -
              ((unsigned __int64)(uVar24 < (uVar21 - uVar10) + lVar25) - 1)) -
             ((unsigned __int64)(uVar24 < (uVar19 - uVar9) + lVar25) - 1)) -
             ((unsigned __int64)(uVar24 < uVar18 + lVar25) - 1);
    if (lVar15 != 0) {
      lVar15 = ((((-((unsigned __int64)(uVar24 < (*pbVar27 - uVar19) + lVar25) - 1) -
                  ((unsigned __int64)(uVar24 < (uVar20 - pbVar27[9]) + lVar25) - 1)) -
                 ((unsigned __int64)(uVar24 < (uVar26 - uVar20) + lVar25) - 1)) -
                ((unsigned __int64)(uVar24 < (uVar23 - uVar26) + lVar25) - 1)) -
               ((unsigned __int64)(uVar24 < (uVar22 - uVar23) + lVar25) - 1)) + lVar15;
    }
    if ((int)lVar15 < 6) {
LAB_82cab970:
      uVar6 = (unsigned int)uVar18;
      iVar8 = (int)(((uVar21 - uVar23) + 2 & 0xffffffff) << 1) -
              (uVar6 + (int)((uVar18 & 0xffffffff) << 2));
      uVar3 = iVar8 >> 3;
      uVar4 = iVar8 >> 0x1f;
      lVar15 = (__int64)(int)(uVar3 ^ uVar4) - (__int64)(int)uVar4;
      if ((int)lVar15 < param_3) {
        iVar11 = (int)(((uVar19 - uVar10) + 2 & 0xffffffff) << 1) +
                 (int)(uVar21 - uVar9) + (int)((uVar21 - uVar9 & 0xffffffff) << 2);
        iVar8 = (int)(((uVar22 - uVar20) + 2 & 0xffffffff) << 1) +
                (int)(uVar26 - uVar23) + (int)((uVar26 - uVar23 & 0xffffffff) << 2);
        uVar4 = iVar8 >> 0x1f;
        uVar5 = iVar11 >> 0x1f;
        lVar16 = (__int64)(int)(iVar8 >> 3 ^ uVar4) - (__int64)(int)uVar4;
        lVar13 = (__int64)(int)(iVar11 >> 3 ^ uVar5) - (__int64)(int)uVar5;
        if ((int)lVar13 < (int)lVar16) {
          lVar16 = lVar13;
        }
        uVar9 = lVar15 - lVar16;
        if ((0 < (__int64)uVar9) && ((int)(uVar3 ^ uVar6) < 0)) {
          iVar8 = (int)((uVar6 ^ (int)uVar6 >> 0x1f) - ((int)uVar6 >> 0x1f)) >> 1;
          iVar11 = (int)uVar9 + (int)((uVar9 & 0xffffffff) << 2) >> 3;
          if (iVar8 < iVar11) {
            iVar11 = iVar8;
          }
          bVar1 = (char)(uVar18 >> 0x18) >> 7;
          cVar7 = (bVar1 ^ (unsigned char)iVar11) - bVar1;
          bVar14 = (char)uVar10 - cVar7;
          bVar12 = cVar7 + bVar12;
          goto LAB_82caba54;
        }
      }
    }
    else {
      iVar8 = fn_82CAB2D8(uVar19,uVar9,uVar21,uVar10,uVar22,uVar23,uVar26,uVar20);
      if (iVar8 == 0) goto LAB_82cab970;
      iVar11 = (int)((uVar26 + uVar9 & 0xffffffff) << 1);
      iVar8 = (int)(uVar26 + uVar9);
      pbVar27[3] = (unsigned char)((int)(uVar21 + uVar9) + (int)((uVar21 + uVar9 & 0xffffffff) << 1) + iVar8
                          + 4 >> 3);
      bVar14 = (unsigned char)((int)uVar10 + (int)((uVar10 & 0xffffffff) << 1) + iVar11 + (int)uVar9 + 4 >> 3
                     );
      bVar12 = (unsigned char)((int)((unsigned int)bVar12 + (unsigned int)bVar12 * 2 + iVar11 + (unsigned int)bVar2 + 4) >> 3);
      pbVar27[6] = (unsigned char)((int)(((unsigned int)bVar2 + (unsigned int)bVar1) * 3 + iVar8 + 4) >> 3);
LAB_82caba54:
      pbVar27[5] = bVar12;
      pbVar27[4] = bVar14;
    }
    lVar17 = lVar17 + -1;
    pbVar27 = pbVar27 + param_2;
    if (lVar17 == 0) {
      return;
    }
  } while( true );
}

