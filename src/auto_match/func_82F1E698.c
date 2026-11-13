typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82F1CBA0();
extern int fn_82F1CCC8();
extern int fn_82F1CDD0();
extern unsigned int iStack00000024;
extern unsigned int iStack0000002c;
extern unsigned int iStack_ec;
extern unsigned int iStack_f0;
extern unsigned int uStack0000001c;
extern unsigned int uStack_e8;


void fn_82F1E698(int param_1,unsigned __int64 param_2,int param_3,int param_4,short *param_5)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  unsigned int uVar12;
  unsigned char bVar13;
  bool bVar14;
  __int64 lVar15;
  unsigned __int64 uVar16;
  __int64 lVar17;
  __int64 lVar18;
  unsigned __int64 uVar19;
  __int64 lVar20;
  __int64 lVar21;
  unsigned char bVar25;
  unsigned __int64 uVar22;
  __int64 lVar23;
  __int64 lVar24;
  unsigned __int64 uVar26;
  unsigned __int64 uVar27;
  unsigned __int64 uVar28;
  unsigned __int64 uVar29;
  int iVar30;
  unsigned __int64 uVar31;
  unsigned __int64 uVar32;
  unsigned __int64 uVar33;
  unsigned int uVar34;
  unsigned int uVar35;
  short *psVar36;
  __int64 lVar37;
  short *psVar38;
  unsigned int uStack0000001c;
  int iStack00000024;
  int iStack0000002c;
  int iStack_f0;
  int iStack_ec;
  unsigned int uStack_e8;
  short *psStack_e4;
  int aiStack_e0 [8];
  short asStack_c0 [96];
  
  uStack0000001c = (unsigned int)param_2;
  uVar33 = 0;
  uVar32 = 0;
  bVar14 = false;
  uVar31 = 0;
  iStack00000024 = param_3;
  iStack0000002c = param_4;
  psStack_e4 = param_5;
  do {
    iVar30 = (int)uVar31;
    bVar25 = *(unsigned char *)(param_4 + 0x4a + iVar30);
    if ((*(int *)(param_1 + 0xaf0) == 0) || (*(int *)(param_1 + 0xaf0) == 4)) {
      bVar25 = 0xf;
      if (((int)param_2 == 0) && (((uVar31 & 1) == 0 || (iVar30 == 5)))) {
        bVar25 = 5;
      }
      if (((param_3 == 0) || (*(int *)(*(int *)(param_1 + 0x8d8) + param_3 * 4) != 0)) &&
         ((iVar30 < 2 || (3 < iVar30)))) {
        bVar25 = bVar25 & 3;
      }
      *(unsigned char *)(param_4 + 0x4a + iVar30) = bVar25;
    }
    if ((bVar25 & 1) != 0) {
      bVar13 = (char)bVar25 >> 2 & 1;
      lVar18 = ((unsigned __int64)*(unsigned int *)(param_1 + 0x2d0) & 0x7fffffff) << 1;
      if (iVar30 < 4) {
        uVar16 = (unsigned __int64)*(unsigned int *)(param_1 + 0x908);
        uVar22 = (__int64)((iVar30 >> 1) + param_3 * 2) * (__int64)(int)lVar18 + (uVar31 & 1) +
                 (param_2 & 0x7fffffff) * 2;
      }
      else {
        iVar6 = (int)lVar18 >> 1;
        if (iVar30 == 4) {
          lVar18 = (__int64)iVar6;
          uVar16 = (unsigned __int64)*(unsigned int *)(param_1 + 0x90c);
          uVar22 = (__int64)iVar6 * (__int64)param_3 + param_2;
        }
        else {
          lVar18 = (__int64)iVar6;
          uVar16 = (unsigned __int64)*(unsigned int *)(param_1 + 0x910);
          uVar22 = (__int64)iVar6 * (__int64)param_3 + param_2;
        }
      }
      uVar35 = *(unsigned int *)(param_1 + 0x2f8);
      lVar37 = (uVar22 - lVar18 & 0x7ffffff) * 0x20 + uVar16;
      lVar18 = (uVar22 & 0x7ffffff) * 0x20 + uVar16 + -0x20;
      iVar30 = 2;
      if (((char)bVar25 >> 1 & 1U) == 0) {
        if (bVar13 != 0) {
LAB_82f1e8bc:
          uVar35 = *(unsigned int *)(param_1 + 0x2fc);
          iVar30 = 1;
          goto LAB_82f1e8c4;
        }
      }
      else {
        if (bVar13 == 0) {
          iVar30 = 0;
        }
        else {
          psVar38 = (short *)lVar37;
          if (((char)bVar25 >> 3 & 1U) == 0) {
            iStack_f0 = 0;
          }
          else {
            iStack_f0 = (int)psVar38[-0x10];
          }
          uStack_e8 = (unsigned int)*(short *)lVar18;
          iStack_ec = (int)*psVar38;
          fn_82F1CDD0(param_1,uVar31,param_4,&iStack_ec,&uStack_e8,&iStack_f0);
          iVar30 = 0;
          uVar34 = iStack_f0 - iStack_ec >> 0x1f;
          uVar12 = (int)(iStack_f0 - uStack_e8) >> 0x1f;
          if ((int)((iStack_f0 - uStack_e8 ^ uVar12) - uVar12) <
              (int)((iStack_f0 - iStack_ec ^ uVar34) - uVar34)) goto LAB_82f1e8bc;
        }
LAB_82f1e8c4:
        if (iVar30 == 0) {
          iVar6 = *(int *)(param_1 + 0x2f0);
          fn_82F1CCC8(param_1,uVar31,lVar18);
        }
        else {
          iVar6 = *(int *)(param_1 + 0x2f4);
          fn_82F1CBA0(param_1,uVar31,lVar37,asStack_c0,param_4);
        }
        sVar1 = param_5[1 << (uVar35 & 0x3f)];
        sVar2 = param_5[2 << (uVar35 & 0x3f)];
        uVar19 = (__int64)sVar1 - (__int64)asStack_c0[iVar6 + 1];
        sVar3 = param_5[3 << (uVar35 & 0x3f)];
        uVar29 = (unsigned __int64)((int)uVar19 >> 0x1f);
        uVar28 = (__int64)sVar3 - (__int64)asStack_c0[iVar6 + 3];
        uVar22 = (unsigned __int64)((int)((__int64)sVar2 - (__int64)asStack_c0[iVar6 + 2]) >> 0x1f);
        uStack_e8 = (int)sVar2 ^ (int)sVar2 >> 0x1f;
        sVar4 = param_5[4 << (uVar35 & 0x3f)];
        uVar27 = (unsigned __int64)((int)uVar28 >> 0x1f);
        uVar16 = (__int64)sVar4 - (__int64)asStack_c0[iVar6 + 4];
        uVar26 = (unsigned __int64)((int)uVar16 >> 0x1f);
        sVar5 = param_5[5 << (uVar35 & 0x3f)];
        lVar23 = (uVar16 ^ uVar26) - uVar26;
        lVar20 = ((__int64)sVar4 ^ (__int64)((int)sVar4 >> 0x1f)) - (__int64)((int)sVar4 >> 0x1f)
        ;
        uVar26 = (__int64)sVar5 - (__int64)asStack_c0[iVar6 + 5];
        uVar16 = (unsigned __int64)((int)uVar26 >> 0x1f);
        lVar18 = (uVar26 ^ uVar16) - uVar16;
        param_2 = (unsigned __int64)uStack0000001c;
        lVar37 = ((__int64)sVar5 ^ (__int64)((int)sVar5 >> 0x1f)) - (__int64)((int)sVar5 >> 0x1f)
        ;
        sVar4 = param_5[6 << (uVar35 & 0x3f)];
        uVar26 = (__int64)sVar4 - (__int64)asStack_c0[iVar6 + 6];
        uVar16 = (unsigned __int64)((int)uVar26 >> 0x1f);
        sVar5 = param_5[7 << (uVar35 & 0x3f)];
        lVar15 = (uVar26 ^ uVar16) - uVar16;
        lVar17 = ((__int64)sVar4 ^ (__int64)((int)sVar4 >> 0x1f)) - (__int64)((int)sVar4 >> 0x1f)
        ;
        uVar16 = (__int64)sVar5 - (__int64)asStack_c0[iVar6 + 7];
        uVar26 = (unsigned __int64)((int)uVar16 >> 0x1f);
        lVar21 = (uVar16 ^ uVar26) - uVar26;
        lVar24 = ((__int64)sVar5 ^ (__int64)((int)sVar5 >> 0x1f)) - (__int64)((int)sVar5 >> 0x1f)
        ;
        uVar33 = ((int)lVar21 >> 1) + lVar21 +
                 ((int)lVar15 >> 1) + lVar15 +
                 ((int)lVar18 >> 1) + lVar18 +
                 ((int)lVar23 >> 1) + lVar23 +
                 ((uVar28 ^ uVar27) - uVar27) +
                 (((__int64)sVar2 - (__int64)asStack_c0[iVar6 + 2] ^ uVar22) - uVar22) +
                 ((uVar19 ^ uVar29) - uVar29) + uVar33;
        uVar32 = ((int)lVar24 >> 1) + lVar24 +
                 ((int)lVar17 >> 1) + lVar17 +
                 ((int)lVar37 >> 1) + lVar37 +
                 ((int)lVar20 >> 1) + lVar20 +
                 (((__int64)sVar3 ^ (__int64)((int)sVar3 >> 0x1f)) -
                 (__int64)((int)sVar3 >> 0x1f)) +
                 ((unsigned __int64)uStack_e8 - (__int64)((int)sVar2 >> 0x1f)) +
                 (((__int64)sVar1 ^ (__int64)((int)sVar1 >> 0x1f)) -
                 (__int64)((int)sVar1 >> 0x1f)) + uVar32;
        bVar14 = true;
        param_3 = iStack00000024;
        param_4 = iStack0000002c;
      }
      *(int *)((int)aiStack_e0 + (int)((uVar31 & 0xffffffff) << 2)) = iVar30;
    }
    uVar31 = uVar31 + 1;
    param_5 = param_5 + 0x80;
    if (5 < (int)uVar31) {
      if (((bVar14) || (*(int *)(param_1 + 0xaf0) == 0)) || (*(int *)(param_1 + 0xaf0) == 4)) {
        uVar31 = 0;
        uVar35 = (int)((~(uVar32 ^ uVar33) & 0xffffffff) >> 0x1f) + (unsigned int)(uVar32 <= uVar33) & 1;
        *(unsigned int *)(param_4 + 0x1c) = uVar35;
        psVar38 = psStack_e4;
        do {
          iVar6 = (int)((uVar31 + 8 & 0xffffffff) << 2);
          *(unsigned int *)(iVar6 + param_4) = 0;
          iVar30 = (int)uVar31;
          if ((*(unsigned char *)(param_4 + 0x4a + iVar30) & 1) != 0) {
            lVar18 = ((unsigned __int64)*(unsigned int *)(param_1 + 0x2d0) & 0x7fffffff) << 1;
            iVar7 = *(int *)((int)aiStack_e0 + (int)((uVar31 & 0xffffffff) << 2));
            if (iVar30 < 4) {
              uVar32 = (unsigned __int64)*(unsigned int *)(param_1 + 0x908);
              uVar33 = (__int64)((iVar30 >> 1) + param_3 * 2) * (__int64)(int)lVar18 +
                       (uVar31 & 1) + (param_2 & 0x7fffffff) * 2;
            }
            else {
              iVar8 = (int)lVar18 >> 1;
              if (iVar30 == 4) {
                lVar18 = (__int64)iVar8;
                uVar32 = (unsigned __int64)*(unsigned int *)(param_1 + 0x90c);
                uVar33 = (__int64)iVar8 * (__int64)param_3 + param_2;
              }
              else {
                lVar18 = (__int64)iVar8;
                uVar32 = (unsigned __int64)*(unsigned int *)(param_1 + 0x910);
                uVar33 = (__int64)iVar8 * (__int64)param_3 + param_2;
              }
            }
            if (iVar7 != 2) {
              if (iVar7 == 0) {
                uVar34 = *(unsigned int *)(param_1 + 0x2f8);
                psVar36 = asStack_c0 + *(int *)(param_1 + 0x2f0);
                fn_82F1CCC8(param_1,uVar31,(uVar33 & 0x7ffffff) * 0x20 + uVar32 + -0x20,
                                  asStack_c0,param_4);
              }
              else {
                uVar34 = *(unsigned int *)(param_1 + 0x2fc);
                psVar36 = asStack_c0 + *(int *)(param_1 + 0x2f4);
                fn_82F1CBA0(param_1,uVar31,(uVar33 - lVar18 & 0x7ffffff) * 0x20 + uVar32,
                                  asStack_c0,param_4);
              }
              *psVar38 = *psVar38 - *psVar36;
              if (uVar35 != 0) {
                iVar30 = 1 << (uVar34 & 0x3f);
                iVar8 = 2 << (uVar34 & 0x3f);
                iVar9 = 6 << (uVar34 & 0x3f);
                psVar38[iVar30] = psVar38[iVar30] - psVar36[1];
                iVar30 = 4 << (uVar34 & 0x3f);
                iVar10 = 3 << (uVar34 & 0x3f);
                iVar11 = 5 << (uVar34 & 0x3f);
                psVar38[iVar8] = psVar38[iVar8] - psVar36[2];
                iVar8 = 7 << (uVar34 & 0x3f);
                psVar38[iVar10] = psVar38[iVar10] - psVar36[3];
                psVar38[iVar30] = psVar38[iVar30] - psVar36[4];
                psVar38[iVar11] = psVar38[iVar11] - psVar36[5];
                psVar38[iVar9] = psVar38[iVar9] - psVar36[6];
                psVar38[iVar8] = psVar38[iVar8] - psVar36[7];
              }
            }
            if (iVar7 == 1) {
              *(unsigned int *)(iVar6 + param_4) = 1;
            }
          }
          uVar31 = uVar31 + 1;
          psVar38 = psVar38 + 0x80;
        } while ((int)uVar31 < 6);
      }
      else {
        *(unsigned int *)(param_4 + 0x1c) = 0xffffffff;
      }
      return;
    }
  } while( true );
}

