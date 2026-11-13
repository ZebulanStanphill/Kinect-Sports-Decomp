void fn_82CD9918(__int64 param_1,int param_2,int param_3,int param_4,unsigned __int64 param_5,
                  unsigned __int64 param_6,int param_7,int param_8)

{
  unsigned int uVar1;
  int iVar2;
  unsigned char bVar3;
  unsigned char bVar4;
  unsigned char bVar5;
  unsigned char bVar6;
  unsigned char bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  short *psVar11;
  unsigned __int64 uVar12;
  unsigned __int64 uVar13;
  __int64 lVar14;
  int iVar15;
  unsigned __int64 uVar16;
  unsigned int uVar17;
  int iVar18;
  unsigned __int64 uVar19;
  int iVar20;
  unsigned int uVar21;
  unsigned int uVar22;
  int iVar23;
  unsigned __int64 uVar24;
  int iVar25;
  unsigned __int64 uVar26;
  int iVar27;
  unsigned __int64 uVar28;
  int iVar29;
  unsigned int in_stack_00000054;
  unsigned int in_stack_0000005c;
  unsigned int in_stack_0000006c;
  
  uVar28 = (unsigned __int64)in_stack_0000005c;
  lVar14 = (param_6 & 0xffff) * 0x10000;
  uVar16 = lVar14 - 0x10000;
  uVar13 = uVar28 - 1;
  uVar1 = (int)uVar16 / (int)uVar13;
  uVar26 = (param_5 & 0xffff) * 0x10000 - 0x10000;
  uVar24 = (unsigned __int64)in_stack_00000054 - 1;
  uVar19 = param_1 - 2;
  trapWord(6,uVar13,0);
  uVar12 = ((__int64)((int)uVar1 >> 4) + (unsigned __int64)((int)uVar1 < 0 && (uVar1 & 0xf) != 0) + lVar14
           ) - 0x8000;
  iVar2 = (int)uVar26 / (int)uVar24;
  trapWord(6,uVar24,0);
  trapWord(5,uVar24 & ~(((uVar26 & 0x7fffffff) << 1 | (uVar26 & 0xffffffff) >> 0x1f) - 1),0xffff);
  trapWord(5,uVar13 & ~(((uVar16 & 0x7fffffff) << 1 | (uVar16 & 0xffffffff) >> 0x1f) - 1),0xffff);
  if ((uVar19 & 3) == 0) {
    iVar20 = 0x8000;
    if (0 < (int)in_stack_00000054) {
      uVar13 = uVar12;
      uVar22 = 0;
      do {
        iVar18 = 0x8000;
        uVar17 = uVar22 + 0x10;
        uVar21 = uVar17;
        if ((int)in_stack_00000054 < (int)uVar17) {
          uVar21 = in_stack_00000054;
        }
        if (0x8000 < (int)uVar13) {
          do {
            iVar27 = (iVar18 >> 0x10) * param_7 + param_2;
            iVar25 = ((int)(iVar18 + uVar1) >> 0x10) * param_7 + param_2;
            if ((int)uVar22 < (int)uVar21) {
              iVar23 = (iVar18 >> 0x11) * param_8;
              lVar14 = (unsigned __int64)((uVar21 - uVar22) - 1 >> 1) + 1;
              iVar15 = iVar20;
              do {
                iVar8 = iVar15 >> 0x10;
                iVar29 = iVar15 + iVar2;
                iVar9 = iVar15 >> 0x11;
                iVar15 = iVar2 * 2 + iVar15;
                iVar10 = (unsigned int)*(unsigned char *)(iVar23 + param_4 + iVar9) * 0x10000;
                iVar29 = iVar29 >> 0x10;
                bVar3 = *(unsigned char *)(iVar23 + iVar9 + param_3);
                bVar4 = *(unsigned char *)(iVar29 + iVar25);
                bVar5 = *(unsigned char *)(iVar29 + iVar27);
                *(unsigned int *)uVar19 =
                     (unsigned int)*(unsigned char *)(iVar8 + iVar25) * 0x100 + (unsigned int)bVar3 |
                     (unsigned int)*(unsigned char *)(iVar8 + iVar27) * 0x1000000 + iVar10;
                *(unsigned int *)((int)(unsigned int *)uVar19 + in_stack_0000006c * 2) =
                     (unsigned int)bVar4 * 0x100 + (unsigned int)bVar3 | (unsigned int)bVar5 * 0x1000000 + iVar10;
                uVar19 = uVar19 + ((unsigned __int64)in_stack_0000006c & 0x3fffffff) * 4;
                lVar14 = lVar14 + -1;
              } while (lVar14 != 0);
              uVar13 = uVar12 & 0xffffffff;
            }
            iVar18 = iVar18 + uVar1 + uVar1;
            uVar19 = (-((__int64)(int)(uVar21 - uVar22) * (__int64)(int)in_stack_0000006c) - 2U &
                     0x7fffffff) * 2 + uVar19;
          } while (iVar18 < (int)uVar13);
        }
        iVar20 = iVar20 + iVar2 * 0x10;
        uVar19 = uVar19 + (((unsigned __int64)in_stack_0000006c & 0xfffffff) * 0x10 + uVar28 & 0x7fffffff)
                          * 2;
        uVar22 = uVar17;
      } while ((int)uVar17 < (int)in_stack_00000054);
    }
  }
  else {
    iVar20 = 0x8000;
    if (0 < (int)in_stack_00000054) {
      uVar13 = uVar12;
      uVar22 = 0;
      do {
        iVar18 = 0x8000;
        uVar17 = uVar22 + 0x10;
        uVar21 = uVar17;
        if ((int)in_stack_00000054 < (int)uVar17) {
          uVar21 = in_stack_00000054;
        }
        if (0x8000 < (int)uVar13) {
          do {
            iVar27 = (iVar18 >> 0x10) * param_7 + param_2;
            iVar25 = ((int)(iVar18 + uVar1) >> 0x10) * param_7 + param_2;
            if ((int)uVar22 < (int)uVar21) {
              iVar23 = (iVar18 >> 0x11) * param_8;
              lVar14 = (unsigned __int64)((uVar21 - uVar22) - 1 >> 1) + 1;
              iVar15 = iVar20;
              do {
                iVar8 = iVar15 >> 0x10;
                iVar29 = iVar15 + iVar2;
                iVar9 = iVar15 >> 0x11;
                psVar11 = (short *)uVar19;
                bVar3 = *(unsigned char *)(iVar8 + iVar27);
                iVar15 = iVar2 * 2 + iVar15;
                iVar29 = iVar29 >> 0x10;
                bVar4 = *(unsigned char *)(iVar23 + param_4 + iVar9);
                bVar5 = *(unsigned char *)(iVar23 + iVar9 + param_3);
                bVar6 = *(unsigned char *)(iVar29 + iVar25);
                bVar7 = *(unsigned char *)(iVar29 + iVar27);
                *psVar11 = (unsigned short)*(unsigned char *)(iVar8 + iVar25) * 0x100 + (unsigned short)bVar4;
                psVar11[1] = (unsigned short)bVar3 * 0x100 + (unsigned short)bVar5;
                psVar11[in_stack_0000006c] = (unsigned short)bVar6 * 0x100 + (unsigned short)bVar4;
                uVar19 = uVar19 + ((unsigned __int64)in_stack_0000006c & 0x3fffffff) * 4;
                psVar11[in_stack_0000006c + 1] = (unsigned short)bVar7 * 0x100 + (unsigned short)bVar5;
                lVar14 = lVar14 + -1;
              } while (lVar14 != 0);
              uVar13 = uVar12 & 0xffffffff;
            }
            iVar18 = iVar18 + uVar1 + uVar1;
            uVar19 = (-((__int64)(int)(uVar21 - uVar22) * (__int64)(int)in_stack_0000006c) - 2U &
                     0x7fffffff) * 2 + uVar19;
          } while (iVar18 < (int)uVar13);
        }
        iVar20 = iVar20 + iVar2 * 0x10;
        uVar19 = uVar19 + (((unsigned __int64)in_stack_0000006c & 0xfffffff) * 0x10 + uVar28 & 0x7fffffff)
                          * 2;
        uVar22 = uVar17;
      } while ((int)uVar17 < (int)in_stack_00000054);
    }
  }
  return;
}

