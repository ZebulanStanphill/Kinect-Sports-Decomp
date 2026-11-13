typedef unsigned char bool;
#define true 1
#define false 0
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int *auStack_380;
extern unsigned int *auStack_390;
extern unsigned int *auStack_3b0;
extern unsigned int *auStack_3d0;
extern unsigned int *auStack_420;
extern unsigned int fStack_250;
extern unsigned int fStack_3a0;
extern unsigned int fStack_3c0;
extern unsigned int fStack_44c;
extern unsigned int fStack_45c;
extern unsigned int fStack_46c;
extern unsigned int fStack_47c;
extern int fn_822315A0();
extern int fn_823116D8();
extern int fn_823A9A98();
extern int fn_823ADF20();
extern int fn_823AE180();
extern int fn_823AF468();
extern int fn_823B0C20();
extern int fn_823B3BA8();
extern int fn_823F2E20();
extern int fn_82512E18();
extern int fn_8253FEF8();
extern int fn_82573200();
extern int fn_82573310();
extern int fn_82F622E0();
extern int fn_82F6A544();
extern int fn_82F6A590();
extern unsigned int iStack_1f0;
extern unsigned int iStack_200;
extern unsigned int iStack_204;
extern unsigned int iStack_26c;
extern unsigned int iStack_274;
extern unsigned int iStack_27c;
extern unsigned int iStack_41c;
extern unsigned int lbl_82193A34;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int uStack_3d8;
extern unsigned int uStack_3e0;
extern unsigned int uStack_3e8;
extern unsigned int uStack_3f0;
extern unsigned int uStack_3f8;
extern unsigned int uStack_400;
extern unsigned int uStack_408;
extern unsigned int uStack_410;
extern unsigned int uStack_428;
extern unsigned int uStack_430;
extern unsigned int uStack_438;
extern unsigned int uStack_440;
extern unsigned int uStack_448;
extern unsigned int uStack_450;
extern unsigned int uStack_458;
extern unsigned int uStack_460;
extern unsigned int uStack_468;
extern unsigned int uStack_470;
extern unsigned int uStack_478;
extern unsigned int uStack_480;


void fn_823B30D0(unsigned __int64 param_1,unsigned __int64 param_2)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  bool bVar3;
  unsigned __int64 in_r0;
  int iVar5;
  unsigned __int64 uVar4;
  unsigned __int64 *puVar6;
  int *piVar7;
  int iVar8;
  unsigned int uVar9;
  int *piVar10;
  int *piVar11;
  unsigned int *puVar12;
  unsigned int uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  unsigned int uVar20;
  unsigned int uVar21;
  unsigned int uVar22;
  unsigned int uVar23;
  unsigned int uVar24;
  unsigned int uVar25;
  unsigned int uVar26;
  unsigned int uVar27;
  unsigned int uStack_480;
  float fStack_47c;
  unsigned int uStack_478;
  unsigned int uStack_470;
  float fStack_46c;
  unsigned int uStack_468;
  unsigned int uStack_460;
  float fStack_45c;
  unsigned int uStack_458;
  unsigned int uStack_450;
  float fStack_44c;
  unsigned int uStack_448;
  unsigned __int64 uStack_440;
  unsigned __int64 uStack_438;
  unsigned __int64 uStack_430;
  unsigned __int64 uStack_428;
  unsigned char auStack_420 [4];
  int iStack_41c;
  unsigned __int64 uStack_410;
  unsigned __int64 uStack_408;
  unsigned __int64 uStack_400;
  unsigned __int64 uStack_3f8;
  unsigned __int64 uStack_3f0;
  unsigned __int64 uStack_3e8;
  unsigned __int64 uStack_3e0;
  unsigned __int64 uStack_3d8;
  unsigned char auStack_3d0 [16];
  float fStack_3c0;
  unsigned __int64 auStack_3b0 [2];
  float fStack_3a0;
  unsigned char auStack_390 [16];
  unsigned char auStack_380 [260];
  int iStack_27c;
  int iStack_274;
  int iStack_26c;
  float fStack_250;
  int iStack_204;
  int iStack_200;
  int iStack_1f0;
  
  iVar5 = fn_82F6A544();
  if (*(int *)(iVar5 + 700) == 0) {
    piVar11 = (int *)(iVar5 + 0x2b4);
    if (*(int *)(iVar5 + 0x2b4) == 0) {
      uVar4 = fn_823A9A98(auStack_420);
      fn_823F2E20(piVar11,uVar4);
      if (iStack_41c != 0) {
        fn_822315A0();
      }
    }
    if ((param_2 & 0xffffffff) == 0) {
      fn_823AF468(auStack_390,iVar5);
      fn_823B0C20(auStack_390,0);
      puVar12 = (unsigned int *)((unsigned int)(auStack_380 + (int)in_r0) & 0xfffffff0);
      uVar20 = puVar12[1];
      uVar21 = puVar12[2];
      uVar22 = puVar12[3];
      puVar1 = (unsigned int *)((int)&uStack_440 + (int)in_r0 & 0xfffffff0);
      *puVar1 = *puVar12;
      puVar1[1] = uVar20;
      puVar1[2] = uVar21;
      puVar1[3] = uVar22;
      uStack_430 = CONCAT44(fStack_250,(((unsigned __int64)(uStack_430) >> 32) & 0xFFFFFFFF));
      fn_823116D8(*(unsigned int *)*piVar11,&uStack_440);
LAB_823b3190:
      do {
        fn_823AE180((double)lbl_82193A34,auStack_390);
        puVar12 = (unsigned int *)((unsigned int)(auStack_380 + (int)in_r0) & 0xfffffff0);
        uVar20 = puVar12[1];
        uVar21 = puVar12[2];
        uVar22 = puVar12[3];
        puVar1 = (unsigned int *)((int)&uStack_440 + (int)in_r0 & 0xfffffff0);
        *puVar1 = *puVar12;
        puVar1[1] = uVar20;
        puVar1[2] = uVar21;
        puVar1[3] = uVar22;
        dVar19 = (double)fStack_250;
        uStack_430 = CONCAT44(fStack_250,(((unsigned __int64)(uStack_430) >> 32) & 0xFFFFFFFF));
        fn_823116D8(*(unsigned int *)*piVar11,&uStack_440);
        iVar8 = iStack_26c;
        if (iStack_274 == 0) {
          if (iStack_27c == 0) {
            if (iStack_26c == 0) {
              if ((iStack_1f0 == 0) || ((iStack_204 == 0 && (iStack_200 == 0)))) goto LAB_823b3190;
              fStack_47c = (float)dVar19;
              uStack_478 = 0;
              puVar12 = &uStack_480;
              uStack_480 = 2;
            }
            else {
              fStack_44c = (float)dVar19;
              uStack_450 = 1;
              uStack_448 = 0;
              puVar12 = &uStack_450;
            }
          }
          else {
            fStack_45c = (float)dVar19;
            uStack_460 = 0;
            uStack_458 = 0;
            puVar12 = &uStack_460;
          }
        }
        else {
          fStack_46c = (float)dVar19;
          uStack_468 = 0;
          puVar12 = &uStack_470;
          uStack_470 = 3;
        }
        fn_82512E18(*(unsigned int *)(*piVar11 + 8),puVar12);
      } while (iVar8 == 0);
      fn_823ADF20(auStack_390);
    }
    else {
      piVar7 = (int *)param_2;
      piVar10 = *(int **)(*piVar7 + 8);
      dVar19 = (double)ltcg_pool_0_0f;
      puVar12 = (unsigned int *)(iVar5 + 0x10U & 0xfffffff0);
      uVar20 = puVar12[1];
      uVar21 = puVar12[2];
      uVar22 = puVar12[3];
      uVar13 = 0;
      fStack_3a0 = ltcg_pool_0_0f;
      puVar1 = (unsigned int *)((int)auStack_3b0 + (int)in_r0 & 0xfffffff0);
      *puVar1 = *puVar12;
      puVar1[1] = uVar20;
      puVar1[2] = uVar21;
      puVar1[3] = uVar22;
      if ((piVar10[1] - *piVar10) / 0xc != 0) {
        do {
          if ((unsigned int)((piVar10[1] - *piVar10) / 0xc) <= uVar13) {
                    /* WARNING: Subroutine does not return */
            fn_82F622E0(0xffffffff821ae698);
          }
          puVar12 = (unsigned int *)(uVar13 * 0xc + *piVar10);
          dVar14 = dVar19;
          if (uVar13 != 0) {
            if ((unsigned int)((piVar10[1] - *piVar10) / 0xc) <= uVar13 - 1) {
                    /* WARNING: Subroutine does not return */
              fn_82F622E0(0xffffffff821ae698);
            }
            dVar14 = (double)*(float *)((uVar13 - 1) * 0xc + *piVar10 + 4);
          }
          dVar18 = (double)(float)puVar12[1];
          if (uVar13 == 0) {
            puVar6 = auStack_3b0;
          }
          else {
            puVar6 = (unsigned __int64 *)fn_823B3BA8(dVar14);
          }
          uStack_440 = *puVar6;
          uStack_438 = puVar6[1];
          uStack_430 = puVar6[2];
          uStack_428 = puVar6[3];
          uStack_410 = uStack_440;
          uStack_408 = uStack_438;
          uStack_400 = uStack_430;
          uStack_3f8 = uStack_428;
          puVar6 = (unsigned __int64 *)fn_823B3BA8(dVar18,*piVar7,uStack_438,uStack_440);
          uStack_3f0 = *puVar6;
          bVar3 = false;
          uStack_3e8 = puVar6[1];
          uVar9 = 0;
          uStack_3e0 = puVar6[2];
          uStack_3d8 = puVar6[3];
          piVar10 = *(int **)*piVar7;
          if (piVar10[1] - *piVar10 >> 5 != 0) {
            iVar8 = 0;
            do {
              if ((unsigned int)(piVar10[1] - *piVar10 >> 5) <= uVar9) {
                    /* WARNING: Subroutine does not return */
                fn_82F622E0(0xffffffff821ae698);
              }
              puVar6 = (unsigned __int64 *)(iVar8 + *piVar10);
              if ((dVar14 < (double)*(float *)(puVar6 + 2)) &&
                 ((double)*(float *)(puVar6 + 2) < dVar18)) {
                uStack_440 = *puVar6;
                uStack_438 = puVar6[1];
                bVar3 = true;
                uStack_430 = puVar6[2];
                uStack_428 = puVar6[3];
                break;
              }
              uVar9 = uVar9 + 1;
              iVar8 = iVar8 + 0x20;
            } while (uVar9 < (unsigned int)(piVar10[1] - *piVar10 >> 5));
          }
          dVar16 = dVar14;
          if (uVar13 != 0) {
            dVar16 = (double)(float)(dVar14 + (double)lbl_82193A34);
          }
          dVar14 = (double)fn_8253FEF8(dVar16,dVar14,dVar18);
          if (dVar14 <= dVar18) {
            dVar17 = (double)(((unsigned __int64)(uStack_400) >> 0) & 0xFFFFFFFF);
            dVar16 = (double)(float)((double)(((unsigned __int64)(uStack_3e0) >> 0) & 0xFFFFFFFF) - dVar17);
            puVar1 = (unsigned int *)((int)&uStack_410 + (int)in_r0 & 0xfffffff0);
            uVar23 = *puVar1;
            uVar22 = puVar1[1];
            uVar21 = puVar1[2];
            uVar20 = puVar1[3];
            do {
              dVar15 = (double)(float)((double)(float)(dVar14 - dVar17) / dVar16);
              uVar27 = uVar20;
              uVar26 = uVar21;
              uVar25 = uVar22;
              uVar24 = uVar23;
              if (bVar3) {
                fn_82573310(dVar15,(double)(float)((double)(float)((double)(((unsigned __int64)(uStack_430) >> 0) & 0xFFFFFFFF) -
                                                                        dVar17) / dVar16));
                dVar15 = dVar14;
              }
              else {
                fn_82573200(dVar15);
                dVar15 = dVar14;
              }
              puVar1 = (unsigned int *)*piVar11;
              puVar2 = (unsigned int *)((unsigned int)(auStack_3d0 + (int)in_r0) & 0xfffffff0);
              *puVar2 = uVar23;
              puVar2[1] = uVar22;
              puVar2[2] = uVar21;
              puVar2[3] = uVar20;
              fStack_3c0 = (float)dVar15;
              uVar20 = uVar27;
              uVar21 = uVar26;
              uVar22 = uVar25;
              uVar23 = uVar24;
              fn_823116D8(*puVar1,auStack_3d0);
              if ((dVar18 <= dVar15) ||
                 (dVar14 = dVar18, (double)(float)(dVar15 + (double)lbl_82193A34) <= dVar18)) {
                dVar14 = (double)(float)(dVar15 + (double)lbl_82193A34);
              }
            } while (dVar14 <= dVar18);
          }
          uStack_480 = *puVar12;
          fStack_47c = (float)puVar12[1];
          uStack_478 = 0;
          fn_82512E18(*(unsigned int *)(*piVar11 + 8),&uStack_480);
          uVar13 = uVar13 + 1;
          piVar10 = *(int **)(*piVar7 + 8);
        } while (uVar13 < (unsigned int)((piVar10[1] - *piVar10) / 0xc));
      }
    }
    *(unsigned int *)(iVar5 + 700) = 1;
  }
  fn_82F6A590();
  return;
}

