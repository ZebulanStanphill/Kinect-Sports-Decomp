typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_120;
extern int d3dx_jcopy_block_row();
extern unsigned int iStack00000014;
extern unsigned int iStack_140;
extern unsigned int iStack_148;
extern unsigned int iStack_160;
extern unsigned int iStack_164;
extern unsigned int iStack_168;
extern unsigned int uStack_170;


__int64 fn_829BBE00(int param_1,int *param_2)

{
  unsigned short uVar1;
  int iVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned short *puVar5;
  int (**pcVar6)();
  unsigned int uVar7;
  int iVar8;
  bool bVar9;
  int iVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  unsigned __int64 uVar13;
  unsigned int uVar14;
  unsigned int uVar15;
  short *psVar16;
  int iVar17;
  unsigned __int64 uVar18;
  unsigned int uVar20;
  unsigned int *puVar21;
  short *psVar22;
  __int64 lVar19;
  int iVar23;
  unsigned int uVar24;
  short *psVar25;
  __int64 lVar26;
  unsigned int uVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  unsigned __int64 uVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  unsigned int uVar38;
  int iStack00000014;
  unsigned int uStack_170;
  unsigned int *puStack_16c;
  int iStack_168;
  int iStack_164;
  int iStack_160;
  int *piStack_15c;
  int iStack_148;
  int iStack_140;
  unsigned char auStack_120 [2];
  short sStack_11e;
  short sStack_11c;
  short sStack_110;
  short sStack_10e;
  short sStack_100;
  
  iVar2 = *(int *)(param_1 + 0x1b0);
  iVar3 = *(int *)(param_1 + 0x144);
  iStack00000014 = param_1;
  if (*(int *)(param_1 + 0x94) <= *(int *)(param_1 + 0x9c)) {
    do {
      if (((*(unsigned int **)(param_1 + 0x1b8))[5] != 0) ||
         ((*(int *)(param_1 + 0x94) == *(int *)(param_1 + 0x9c) &&
          ((unsigned int)(*(int *)(param_1 + 0x194) == 0) + *(int *)(param_1 + 0xa0) <
           *(unsigned int *)(param_1 + 0x98))))) break;
      iVar10 = (*(int (**)())**(unsigned int **)(param_1 + 0x1b8))(param_1);
      if (iVar10 == 0) {
        return 0;
      }
    } while (*(int *)(param_1 + 0x94) <= *(int *)(param_1 + 0x9c));
  }
  iVar10 = *(int *)(param_1 + 0xdc);
  iStack_148 = 0;
  if (0 < *(int *)(param_1 + 0x24)) {
    puStack_16c = (unsigned int *)(iVar2 + 0x48);
    iStack_164 = 0;
    piStack_15c = param_2;
    do {
      iVar37 = iStack00000014;
      if (*(int *)(iVar10 + 0x30) != 0) {
        uVar4 = *(unsigned int *)(iStack00000014 + 0xa0);
        uVar11 = *(unsigned int *)(iVar10 + 0xc);
        uVar18 = (unsigned __int64)uVar11;
        if (uVar4 < iVar3 - 1U) {
          bVar9 = false;
          uVar13 = ((unsigned __int64)uVar11 & 0x7fffffff) << 1;
          uVar33 = uVar18;
          uStack_170 = uVar11;
        }
        else {
          trapWord(6,uVar18,0);
          uVar13 = (unsigned __int64)*(unsigned int *)(iVar10 + 0x20) -
                   (__int64)(int)(*(unsigned int *)(iVar10 + 0x20) / uVar11) * (__int64)(int)uVar11;
          uStack_170 = (unsigned int)uVar13;
          if (uVar13 == 0) {
            uVar13 = uVar18;
            uStack_170 = uVar11;
          }
          bVar9 = true;
          uVar33 = uVar13;
        }
        if (uVar4 == 0) {
          iStack_140 = (**(int (***)())(*(int *)(iStack00000014 + 4) + 0x20))
                                 (iStack00000014,*puStack_16c,0,uVar13,0);
        }
        else {
          iStack_140 = (**(int (***)())(*(int *)(iStack00000014 + 4) + 0x20))
                                 (iStack00000014,*puStack_16c,
                                  (__int64)(int)(uVar4 - 1) * (__int64)(int)uVar11,uVar18 + uVar13
                                 );
          iStack_140 = *(int *)(iVar10 + 0xc) * 4 + iStack_140;
        }
        puVar5 = *(unsigned short **)(iVar10 + 0x4c);
        iStack_168 = 0;
        iStack_160 = *piStack_15c;
        iVar17 = *(int *)(iVar2 + 0x70) + iStack_164;
        pcVar6 = *(int (***)())((int)puStack_16c + (*(int *)(iVar37 + 0x1c4) - iVar2) + -0x44);
        uVar1 = *puVar5;
        uVar11 = (unsigned int)puVar5[1];
        uVar20 = (unsigned int)puVar5[8];
        uVar15 = (unsigned int)puVar5[0x10];
        uVar14 = (unsigned int)puVar5[9];
        uVar12 = (unsigned int)puVar5[2];
        if (0 < (int)uVar33) {
          do {
            puVar21 = (unsigned int *)(iStack_168 * 4 + iStack_140);
            psVar25 = (short *)*puVar21;
            if ((uVar4 != 0) || (psVar16 = psVar25, iStack_168 != 0)) {
              psVar16 = (short *)puVar21[-1];
            }
            if ((!bVar9) || (psVar22 = psVar25, iStack_168 != uStack_170 - 1)) {
              psVar22 = (short *)puVar21[1];
            }
            lVar26 = 0;
            uVar27 = 0;
            uVar38 = *(int *)(iVar10 + 0x1c) - 1;
            iVar37 = (int)*psVar16;
            iVar30 = (int)*psVar16;
            iVar36 = (int)*psVar22;
            iVar28 = (int)*psVar22;
            iVar32 = (int)*psVar25;
            iVar34 = (int)*psVar25;
            do {
              psVar16 = psVar16 + 0x40;
              psVar22 = psVar22 + 0x40;
              d3dx_jcopy_block_row(psVar25,auStack_120,1);
              iVar31 = iVar30;
              iVar29 = iVar28;
              iVar35 = iVar34;
              if (uVar27 < uVar38) {
                iVar31 = (int)*psVar16;
                iVar35 = (int)psVar25[0x40];
                iVar29 = (int)*psVar22;
              }
              uVar7 = *(unsigned int *)(iVar17 + 4);
              uVar24 = (unsigned int)uVar1;
              if ((uVar7 != 0) && (sStack_11e == 0)) {
                uVar18 = (__int64)(iVar32 - iVar35) * (__int64)(int)uVar24;
                uVar18 = uVar18 + (uVar18 & 0x1fffffff) * 8 & 0x3fffffff;
                lVar19 = uVar18 * 4;
                if ((int)lVar19 < 0) {
                  uVar13 = (unsigned __int64)uVar11 << 8;
                  uVar18 = (unsigned __int64)uVar11 * 0x80 + uVar18 * -4;
                  trapWord(6,uVar13,0);
                  iVar23 = (int)uVar18 / (int)uVar13;
                  trapWord(5,uVar13 & ~(((uVar18 & 0x7fffffff) << 1 | (uVar18 & 0xffffffff) >> 0x1f)
                                       - 1),0xffff);
                  if ((0 < (int)uVar7) && (iVar8 = 1 << (uVar7 & 0x3f), iVar8 <= iVar23)) {
                    iVar23 = iVar8 + -1;
                  }
                  iVar23 = -iVar23;
                }
                else {
                  uVar13 = (unsigned __int64)uVar11 << 8;
                  uVar18 = (unsigned __int64)uVar11 * 0x80 + lVar19;
                  trapWord(6,uVar13,0);
                  iVar23 = (int)uVar18 / (int)uVar13;
                  trapWord(5,uVar13 & ~(((uVar18 & 0x7fffffff) << 1 | (uVar18 & 0xffffffff) >> 0x1f)
                                       - 1),0xffff);
                  if ((0 < (int)uVar7) && (iVar8 = 1 << (uVar7 & 0x3f), iVar8 <= iVar23)) {
                    iVar23 = iVar8 + -1;
                  }
                }
                sStack_11e = (short)iVar23;
              }
              uVar7 = *(unsigned int *)(iVar17 + 8);
              if ((uVar7 != 0) && (sStack_110 == 0)) {
                uVar18 = (__int64)(iVar30 - iVar28) * (__int64)(int)uVar24;
                uVar18 = uVar18 + (uVar18 & 0x1fffffff) * 8 & 0x3fffffff;
                lVar19 = uVar18 * 4;
                if ((int)lVar19 < 0) {
                  uVar13 = (unsigned __int64)uVar20 << 8;
                  uVar18 = (unsigned __int64)uVar20 * 0x80 + uVar18 * -4;
                  trapWord(6,uVar13,0);
                  iVar23 = (int)uVar18 / (int)uVar13;
                  trapWord(5,uVar13 & ~(((uVar18 & 0x7fffffff) << 1 | (uVar18 & 0xffffffff) >> 0x1f)
                                       - 1),0xffff);
                  if ((0 < (int)uVar7) && (iVar8 = 1 << (uVar7 & 0x3f), iVar8 <= iVar23)) {
                    iVar23 = iVar8 + -1;
                  }
                  iVar23 = -iVar23;
                }
                else {
                  uVar13 = (unsigned __int64)uVar20 << 8;
                  uVar18 = (unsigned __int64)uVar20 * 0x80 + lVar19;
                  trapWord(6,uVar13,0);
                  iVar23 = (int)uVar18 / (int)uVar13;
                  trapWord(5,uVar13 & ~(((uVar18 & 0x7fffffff) << 1 | (uVar18 & 0xffffffff) >> 0x1f)
                                       - 1),0xffff);
                  if ((0 < (int)uVar7) && (iVar8 = 1 << (uVar7 & 0x3f), iVar8 <= iVar23)) {
                    iVar23 = iVar8 + -1;
                  }
                }
                sStack_110 = (short)iVar23;
              }
              uVar7 = *(unsigned int *)(iVar17 + 0xc);
              if ((uVar7 != 0) && (sStack_100 == 0)) {
                uVar18 = (__int64)(iVar28 + iVar34 * -2 + iVar30) * (__int64)(int)uVar24;
                lVar19 = uVar18 + (uVar18 & 0x1fffffff) * 8;
                if (lVar19 < 0) {
                  uVar13 = (unsigned __int64)uVar15 << 8;
                  uVar18 = (unsigned __int64)uVar15 * 0x80 - lVar19;
                  trapWord(6,uVar13,0);
                  iVar23 = (int)uVar18 / (int)uVar13;
                  trapWord(5,uVar13 & ~(((uVar18 & 0x7fffffff) << 1 | (uVar18 & 0xffffffff) >> 0x1f)
                                       - 1),0xffff);
                  if ((0 < (int)uVar7) && (iVar8 = 1 << (uVar7 & 0x3f), iVar8 <= iVar23)) {
                    iVar23 = iVar8 + -1;
                  }
                  iVar23 = -iVar23;
                }
                else {
                  uVar13 = (unsigned __int64)uVar15 << 8;
                  uVar18 = (unsigned __int64)uVar15 * 0x80 + lVar19;
                  trapWord(6,uVar13,0);
                  iVar23 = (int)uVar18 / (int)uVar13;
                  trapWord(5,uVar13 & ~(((uVar18 & 0x7fffffff) << 1 | (uVar18 & 0xffffffff) >> 0x1f)
                                       - 1),0xffff);
                  if ((0 < (int)uVar7) && (iVar8 = 1 << (uVar7 & 0x3f), iVar8 <= iVar23)) {
                    iVar23 = iVar8 + -1;
                  }
                }
                sStack_100 = (short)iVar23;
              }
              uVar7 = *(unsigned int *)(iVar17 + 0x10);
              if ((uVar7 != 0) && (sStack_10e == 0)) {
                uVar18 = (__int64)(((iVar29 - iVar36) - iVar31) + iVar37) * (__int64)(int)uVar24;
                lVar19 = uVar18 + (uVar18 & 0x3fffffff) * 4;
                if (lVar19 < 0) {
                  uVar13 = (unsigned __int64)uVar14 << 8;
                  uVar18 = (unsigned __int64)uVar14 * 0x80 - lVar19;
                  trapWord(6,uVar13,0);
                  iVar37 = (int)uVar18 / (int)uVar13;
                  trapWord(5,uVar13 & ~(((uVar18 & 0x7fffffff) << 1 | (uVar18 & 0xffffffff) >> 0x1f)
                                       - 1),0xffff);
                  if ((0 < (int)uVar7) && (iVar36 = 1 << (uVar7 & 0x3f), iVar36 <= iVar37)) {
                    iVar37 = iVar36 + -1;
                  }
                  iVar37 = -iVar37;
                }
                else {
                  uVar13 = (unsigned __int64)uVar14 << 8;
                  uVar18 = (unsigned __int64)uVar14 * 0x80 + lVar19;
                  trapWord(6,uVar13,0);
                  iVar37 = (int)uVar18 / (int)uVar13;
                  trapWord(5,uVar13 & ~(((uVar18 & 0x7fffffff) << 1 | (uVar18 & 0xffffffff) >> 0x1f)
                                       - 1),0xffff);
                  if ((0 < (int)uVar7) && (iVar36 = 1 << (uVar7 & 0x3f), iVar36 <= iVar37)) {
                    iVar37 = iVar36 + -1;
                  }
                }
                sStack_10e = (short)iVar37;
              }
              uVar7 = *(unsigned int *)(iVar17 + 0x14);
              if ((uVar7 != 0) && (sStack_11c == 0)) {
                uVar18 = (__int64)(iVar35 + iVar34 * -2 + iVar32) * (__int64)(int)uVar24;
                lVar19 = uVar18 + (uVar18 & 0x1fffffff) * 8;
                if (lVar19 < 0) {
                  uVar13 = (unsigned __int64)uVar12 << 8;
                  uVar18 = (unsigned __int64)uVar12 * 0x80 - lVar19;
                  trapWord(6,uVar13,0);
                  iVar37 = (int)uVar18 / (int)uVar13;
                  trapWord(5,uVar13 & ~(((uVar18 & 0x7fffffff) << 1 | (uVar18 & 0xffffffff) >> 0x1f)
                                       - 1),0xffff);
                  if ((0 < (int)uVar7) && (iVar36 = 1 << (uVar7 & 0x3f), iVar36 <= iVar37)) {
                    iVar37 = iVar36 + -1;
                  }
                  iVar37 = -iVar37;
                }
                else {
                  uVar13 = (unsigned __int64)uVar12 << 8;
                  uVar18 = (unsigned __int64)uVar12 * 0x80 + lVar19;
                  trapWord(6,uVar13,0);
                  iVar37 = (int)uVar18 / (int)uVar13;
                  trapWord(5,uVar13 & ~(((uVar18 & 0x7fffffff) << 1 | (uVar18 & 0xffffffff) >> 0x1f)
                                       - 1),0xffff);
                  if ((0 < (int)uVar7) && (iVar36 = 1 << (uVar7 & 0x3f), iVar36 <= iVar37)) {
                    iVar37 = iVar36 + -1;
                  }
                }
                sStack_11c = (short)iVar37;
              }
              (*pcVar6)(iStack00000014,iVar10,auStack_120,iStack_160,lVar26);
              uVar27 = uVar27 + 1;
              psVar25 = psVar25 + 0x40;
              lVar26 = (unsigned __int64)*(unsigned int *)(iVar10 + 0x24) + lVar26;
              iVar37 = iVar30;
              iVar30 = iVar31;
              iVar36 = iVar28;
              iVar28 = iVar29;
              iVar32 = iVar34;
              iVar34 = iVar35;
            } while (uVar27 <= uVar38);
            iStack_168 = iStack_168 + 1;
            iStack_160 = *(unsigned int *)(iVar10 + 0x24) * 4 + iStack_160;
          } while (iStack_168 < (int)uStack_170);
        }
      }
      iVar10 = iVar10 + 0x54;
      iStack_148 = iStack_148 + 1;
      iStack_164 = iStack_164 + 0x18;
      puStack_16c = puStack_16c + 1;
      piStack_15c = piStack_15c + 1;
    } while (iStack_148 < *(int *)(iStack00000014 + 0x24));
  }
  uVar18 = (unsigned __int64)*(unsigned int *)(iStack00000014 + 0xa0) + 1;
  *(int *)(iStack00000014 + 0xa0) = (int)uVar18;
  return 4 - (unsigned __int64)(uVar18 < *(unsigned int *)(iStack00000014 + 0x144));
}

