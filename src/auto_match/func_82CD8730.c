unsigned __int64 fn_82CD8730(unsigned __int64 param_1,int param_2,int param_3,int param_4,unsigned __int64 param_5,
                       unsigned __int64 param_6,int param_7,int param_8)

{
  unsigned int uVar1;
  int iVar2;
  unsigned char bVar3;
  unsigned char bVar4;
  unsigned char bVar5;
  int iVar6;
  int iVar7;
  short sVar8;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  __int64 lVar11;
  int iVar12;
  int iVar13;
  unsigned __int64 uVar14;
  unsigned int uVar15;
  short *psVar16;
  int iVar17;
  unsigned int uVar18;
  unsigned int uVar19;
  unsigned __int64 uVar20;
  int iVar21;
  int iVar22;
  unsigned __int64 uVar23;
  int iVar24;
  unsigned __int64 uVar25;
  int iVar26;
  unsigned int in_stack_00000054;
  unsigned int in_stack_0000005c;
  unsigned int in_stack_0000006c;
  
  uVar25 = (unsigned __int64)in_stack_0000005c;
  lVar11 = (param_6 & 0xffff) * 0x10000;
  uVar14 = lVar11 - 0x10000;
  uVar10 = uVar25 - 1;
  uVar9 = (param_5 & 0xffff) * 0x10000 - 0x10000;
  uVar1 = (int)uVar14 / (int)uVar10;
  uVar23 = (unsigned __int64)in_stack_00000054 - 1;
  uVar14 = ((uVar14 & 0x7fffffff) << 1 | (uVar14 & 0xffffffff) >> 0x1f) - 1;
  trapWord(6,uVar10,0);
  uVar20 = ((__int64)((int)uVar1 >> 4) + (unsigned __int64)((int)uVar1 < 0 && (uVar1 & 0xf) != 0) + lVar11
           ) - 0x8000;
  iVar2 = (int)uVar9 / (int)uVar23;
  trapWord(6,uVar23,0);
  trapWord(5,uVar23 & ~(((uVar9 & 0x7fffffff) << 1 | (uVar9 & 0xffffffff) >> 0x1f) - 1),0xffff);
  trapWord(5,uVar10 & ~uVar14,0xffff);
  if ((param_1 & 3) == 0) {
    iVar17 = 0x8000;
    if (0 < (int)in_stack_00000054) {
      uVar9 = uVar20;
      uVar19 = 0;
      do {
        iVar13 = 0x8000;
        uVar15 = uVar19 + 0x10;
        uVar18 = uVar15;
        if ((int)in_stack_00000054 < (int)uVar15) {
          uVar18 = in_stack_00000054;
        }
        if (0x8000 < (int)uVar9) {
          do {
            iVar22 = (int)(iVar13 + uVar1) >> 0x10;
            uVar14 = (unsigned __int64)iVar22;
            iVar24 = (iVar13 >> 0x10) * param_7 + param_2;
            iVar22 = iVar22 * param_7 + param_2;
            if ((int)uVar19 < (int)uVar18) {
              iVar21 = (iVar13 >> 0x11) * param_8;
              lVar11 = (unsigned __int64)((uVar18 - uVar19) - 1 >> 1) + 1;
              iVar12 = iVar17;
              do {
                iVar6 = iVar12 >> 0x10;
                iVar26 = iVar12 + iVar2;
                iVar7 = iVar12 >> 0x11;
                iVar12 = iVar2 * 2 + iVar12;
                iVar26 = iVar26 >> 0x10;
                bVar3 = *(unsigned char *)(iVar21 + iVar7 + param_3);
                iVar7 = (unsigned int)*(unsigned char *)(iVar21 + param_4 + iVar7) * 0x1000000;
                bVar4 = *(unsigned char *)(iVar26 + iVar22);
                uVar14 = (unsigned __int64)*(unsigned char *)(iVar26 + iVar24) + (unsigned __int64)bVar3 * 0x100;
                *(unsigned int *)param_1 =
                     (unsigned int)*(unsigned char *)(iVar6 + iVar22) * 0x10000 + iVar7 |
                     (unsigned int)*(unsigned char *)(iVar6 + iVar24) + (unsigned int)bVar3 * 0x100;
                *(unsigned int *)((int)(unsigned int *)param_1 + in_stack_0000006c * 2) =
                     (unsigned int)bVar4 * 0x10000 + iVar7 | (unsigned int)uVar14;
                param_1 = param_1 + ((unsigned __int64)in_stack_0000006c & 0x3fffffff) * 4;
                lVar11 = lVar11 + -1;
              } while (lVar11 != 0);
              uVar9 = uVar20 & 0xffffffff;
            }
            iVar13 = iVar13 + uVar1 + uVar1;
            param_1 = (2U - (__int64)(int)(uVar18 - uVar19) * (__int64)(int)in_stack_0000006c &
                      0x7fffffff) * 2 + param_1;
          } while (iVar13 < (int)uVar9);
        }
        param_1 = (((unsigned __int64)in_stack_0000006c & 0xfffffff) * 0x10 - uVar25 & 0x7fffffff) * 2 +
                  param_1;
        iVar17 = iVar17 + iVar2 * 0x10;
        uVar19 = uVar15;
      } while ((int)uVar15 < (int)in_stack_00000054);
    }
  }
  else {
    iVar17 = 0x8000;
    if (0 < (int)in_stack_00000054) {
      uVar9 = uVar20;
      uVar19 = 0;
      do {
        iVar13 = 0x8000;
        uVar15 = uVar19 + 0x10;
        uVar18 = uVar15;
        if ((int)in_stack_00000054 < (int)uVar15) {
          uVar18 = in_stack_00000054;
        }
        if (0x8000 < (int)uVar9) {
          do {
            uVar14 = (unsigned __int64)(iVar13 >> 0x11);
            iVar24 = (iVar13 >> 0x10) * param_7 + param_2;
            iVar22 = ((int)(iVar13 + uVar1) >> 0x10) * param_7 + param_2;
            if ((int)uVar19 < (int)uVar18) {
              iVar21 = (iVar13 >> 0x11) * param_8;
              lVar11 = (unsigned __int64)((uVar18 - uVar19) - 1 >> 1) + 1;
              iVar12 = iVar17;
              do {
                iVar6 = iVar12 >> 0x10;
                iVar26 = iVar12 + iVar2;
                iVar7 = iVar12 >> 0x11;
                iVar12 = iVar2 * 2 + iVar12;
                bVar3 = *(unsigned char *)(iVar6 + iVar22);
                iVar26 = iVar26 >> 0x10;
                bVar4 = *(unsigned char *)(iVar26 + iVar24);
                bVar5 = *(unsigned char *)(iVar26 + iVar22);
                sVar8 = (unsigned short)*(unsigned char *)(iVar21 + param_4 + iVar7) * 0x100;
                uVar14 = (unsigned __int64)*(unsigned char *)(iVar21 + iVar7 + param_3) << 8;
                psVar16 = (short *)param_1;
                *psVar16 = (unsigned short)*(unsigned char *)(iVar6 + iVar24) + sVar8;
                psVar16[1] = (unsigned short)bVar3 + (short)uVar14;
                psVar16[in_stack_0000006c] = (unsigned short)bVar4 + sVar8;
                psVar16[in_stack_0000006c + 1] = (unsigned short)bVar5 + (short)uVar14;
                param_1 = param_1 + ((unsigned __int64)in_stack_0000006c & 0x3fffffff) * 4;
                lVar11 = lVar11 + -1;
              } while (lVar11 != 0);
              uVar9 = uVar20 & 0xffffffff;
            }
            iVar13 = iVar13 + uVar1 + uVar1;
            param_1 = (2U - (__int64)(int)(uVar18 - uVar19) * (__int64)(int)in_stack_0000006c &
                      0x7fffffff) * 2 + param_1;
          } while (iVar13 < (int)uVar9);
        }
        iVar17 = iVar17 + iVar2 * 0x10;
        param_1 = (((unsigned __int64)in_stack_0000006c & 0xfffffff) * 0x10 - uVar25 & 0x7fffffff) * 2 +
                  param_1;
        uVar19 = uVar15;
      } while ((int)uVar15 < (int)in_stack_00000054);
    }
  }
  return uVar14;
}

