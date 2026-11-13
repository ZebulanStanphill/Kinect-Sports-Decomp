typedef unsigned char bool;
#define true 1
#define false 0
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
#define NAN(x) ((x) != (x))
extern unsigned int *auStack_2ae;
extern unsigned int *auStack_2e0;
extern unsigned int *auStack_310;
extern unsigned int *auStack_340;
extern unsigned int *auStack_370;
extern unsigned int *auStack_3ee;
extern unsigned int *auStack_4e0;
extern unsigned int *auStack_4f0;
extern unsigned int fStack_54c;
extern unsigned int fStack_55c;
extern int fn_822315A0();
extern int fn_8225F160();
extern int fn_8227AD00();
extern int fn_8227B5E0();
extern int fn_8227B668();
extern int fn_8227B800();
extern int fn_8227B8D0();
extern int fn_8227CB30();
extern int fn_822ABA88();
extern int fn_822B1860();
extern int fn_822B67F8();
extern int fn_822B98A8();
extern int fn_82350888();
extern int fn_82351DC8();
extern int fn_82353158();
extern int fn_823571B0();
extern int fn_82359C18();
extern int fn_823F2E20();
extern int fn_824B8548();
extern int fn_824BC388();
extern int fn_82526AF8();
extern int fn_82536590();
extern int fn_8265C9E0();
extern int fn_82670C10();
extern int fn_828647D8();
extern int fn_82864898();
extern int fn_82864988();
extern int fn_828EA5F8();
extern int fn_828EA610();
extern int fn_82F64988();
extern int memset();
extern unsigned int iStack_4ec;
extern unsigned int iStack_550;
extern unsigned int iStack_554;
extern unsigned int iStack_560;
extern unsigned int lbl_82005748;
extern unsigned int lbl_820E975C;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821A8D8C;
extern unsigned int lbl_821B2408;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_832765BC;
extern unsigned int uStack_2b0;
extern unsigned int uStack_3f0;
extern unsigned int uStack_50c;
extern unsigned int uStack_528;
extern unsigned int uStack_548;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82352788(double param_1,int param_2)

{
  float fVar1;
  unsigned int uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar13;
  unsigned __int64 uVar9;
  __int64 lVar10;
  __int64 lVar11;
  char cVar18;
  int iVar14;
  int iVar15;
  unsigned __int64 uVar12;
  unsigned char *puVar16;
  int *piVar17;
  unsigned int uVar19;
  unsigned int uVar20;
  int iVar21;
  unsigned char *puVar22;
  unsigned __int64 uVar23;
  unsigned char **ppuVar24;
  unsigned char **ppuVar25;
  unsigned char **ppuVar26;
  unsigned int *puVar27;
  int *piVar28;
  bool bVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  struct { int first; float second; } stack_pair_560;

  unsigned int *puStack_558;
  int iStack_554;
  int iStack_550;
  float fStack_54c;
  unsigned __int64 uStack_548;
  char *pcStack_540;
  unsigned int *puStack_53c;
  unsigned char **ppuStack_530;
  unsigned char **ppuStack_52c;
  unsigned int uStack_528;
  unsigned char ***pppuStack_520;
  char *pcStack_518;
  unsigned char *puStack_510;
  unsigned int uStack_50c;
  __int64 lStack_508;
  __int64 lStack_500;
  __int64 lStack_4f8;
  unsigned char auStack_4f0 [4];
  int iStack_4ec;
  unsigned char auStack_4e0 [240];
  unsigned short uStack_3f0;
  unsigned char auStack_3ee [126];
  unsigned char auStack_370 [48];
  unsigned char auStack_340 [48];
  unsigned char auStack_310 [48];
  unsigned char auStack_2e0 [48];
  unsigned short uStack_2b0;
  unsigned char auStack_2ae [590];
  
  if (((((unsigned int *)(param_2 + 0x3b8) != (unsigned int *)0x0) &&
       (uVar23 = (unsigned __int64)*(unsigned int *)(param_2 + 0x3b8),
       uVar23 != (uVar23 - 1) + (unsigned __int64)(uVar23 == 0))) ||
      (*(int **)(param_2 + 0x18) == (int *)0x0)) ||
     (iVar13 = (**(int (***)())(**(int **)(param_2 + 0x18) + 0x60))(), iVar13 != 0)) {
    fVar8 = ltcg_pool_0_0f;
    puVar27 = (unsigned int *)(param_2 + 0x288);
    uVar2 = *puVar27;
    puStack_558 = puVar27;
    if (uVar2 == 0) {
      ppuVar26 = (unsigned char **)0x0;
      if ((*(int **)(param_2 + 0x18) == (int *)0x0) ||
         (iVar13 = (**(int (***)())(**(int **)(param_2 + 0x18) + 0x60))(), iVar13 == 0)) {
        puStack_53c = (unsigned int *)fn_8265C9E0(0x1198);
        if (puStack_53c == (unsigned int *)0x0) {
          puStack_53c = (unsigned int *)0x0;
        }
        else {
          puStack_53c[1] = 1;
          puStack_53c[2] = 1;
          *puStack_53c = &lbl_821A8D8C;
          if (puStack_53c + 4 != (unsigned int *)0x0) {
            fn_8227AD00(puStack_53c + 4,param_2 + 0x328,*(unsigned int *)(param_2 + 0x90),
                            *(unsigned int *)(param_2 + 0x94),0xffffffff821abfe4,
                            *(unsigned int *)(param_2 + 0x2b0),1,1);
          }
        }
        pcStack_540 = (char *)(puStack_53c + 4);
        fn_823F2E20(puVar27,&pcStack_540);
        if (puStack_53c != (unsigned int *)0x0) {
          fn_822315A0();
        }
        iVar13 = fn_8225F160();
        fn_8227B668(*puVar27,((*(int **)(param_2 + 0x298))[1] - **(int **)(param_2 + 0x298)) /
                                   0x5c,*(unsigned int *)(iVar13 + 4));
      }
      else {
        uVar9 = (**(int (***)())(**(int **)(param_2 + 0x18) + 0x5c))(auStack_4f0);
        fn_823F2E20(puVar27,uVar9);
        if (iStack_4ec != 0) {
          fn_822315A0();
        }
      }
      iVar13 = *(int *)(param_2 + 0x2c4);
      if (iVar13 == 0) {
        uVar20 = 10;
        uVar19 = 100;
      }
      else {
        uVar20 = *(unsigned int *)(iVar13 + 0x70);
        uVar19 = *(unsigned int *)(iVar13 + 0x68);
      }
      fn_8227B800(*puVar27,uVar19,uVar20);
      dVar30 = (double)fn_82351DC8(param_2);
      pppuStack_520 = &ppuStack_530;
      *(float *)(param_2 + 0x3c0) = (float)dVar30;
      ppuStack_530 = &lbl_821B2408;
      uVar2 = *puVar27;
      ppuStack_52c = (unsigned char **)param_2;
      fn_8227CB30(uVar2 + 0x1170,&ppuStack_530);
      dVar30 = (double)ltcg_pool_0_0f;
      *(float *)(uVar2 + 0xa4c) = ltcg_pool_0_0f;
      fn_82359C18(&ppuStack_530);
      piVar28 = (int *)(param_2 + 0x3bc);
      if (piVar28 == (int *)0x0) {
        bVar29 = false;
      }
      else {
        bVar29 = *piVar28 != 0;
      }
      if (bVar29) {
        fn_82536590(piVar28,0);
      }
      ppuVar25 = (unsigned char **)0x0;
      ppuStack_530 = (unsigned char **)0x0;
      bVar29 = false;
      uStack_528 = 0;
      ppuStack_52c = (unsigned char **)0x0;
      piVar28 = (int *)**(int **)(param_2 + 0x298);
      piVar3 = (int *)(*(int **)(param_2 + 0x298))[1];
      if (piVar28 != piVar3) {
        dVar32 = (double)lbl_82005748;
        pcStack_518 = "Play_speech_frontend_host_badge_award_professional";
        pcStack_540 = "Play_speech_frontend_host_badge_award_amateur";
        do {
          puVar22 = (unsigned char *)*piVar28;
          uVar23 = (unsigned __int64)(unsigned int)piVar28[1];
          piVar17 = *(int **)((int)puVar22 * 4 + **(int **)(param_2 + 0x1c));
          lVar10 = fn_822ABA88(*(unsigned int *)(piVar28[1] * 4 + *piVar17),piVar28[2]);
          iVar13 = 0;
          for (ppuVar24 = ppuVar26; ppuVar24 != ppuVar25; ppuVar24 = ppuVar24 + 2) {
            if ((*ppuVar24 == puVar22) &&
               (dVar31 = dVar30, ZEXT48(ppuVar24[1]) == (uVar23 & 0xffffffff))) goto LAB_82352ab4;
            iVar13 = iVar13 + 1;
          }
          uStack_50c = (unsigned int)uVar23;
          puStack_510 = puVar22;
          fn_823571B0(&ppuStack_530,&puStack_510);
          dVar31 = dVar30;
          ppuVar25 = ppuStack_52c;
          ppuVar26 = ppuStack_530;
LAB_82352ab4:
          iVar4 = piVar28[3];
          dVar30 = dVar31;
          if (((iVar4 != 0) && (piVar5 = *(int **)(param_2 + 0x18), piVar5 != (int *)0x0)) &&
             (*(int *)(param_2 + 0x2c8) != 0)) {
            dVar31 = (double)(**(int (***)())(*piVar5 + 0x6c))
                                       (piVar5,*(unsigned int *)
                                                (*(int *)(param_2 + 0x2c8) * 4 +
                                                *(int *)(iVar4 + 0x100)));
          }
          stack_pair_560.second = (float)dVar30;
          fStack_54c = (float)dVar30;
          iVar21 = piVar28[0x14];
          iVar14 = iVar13 * 0xdc + *puStack_558;
          uVar9 = 0;
          iStack_550 = 0;
          stack_pair_560.first = 0;
          uVar20 = *(unsigned int *)(*(int *)(piVar28[1] * 4 + *piVar17) + 0x20);
          *(unsigned int *)(*puStack_558 + 0xa78) = 1;
          *(unsigned int *)(iVar14 + 0xa94) = uVar20;
          *(unsigned int *)(iVar14 + 0xa88) = 1;
          *(float *)(iVar14 + 0xa90) = (float)dVar31;
          *(unsigned int *)(iVar14 + 0xa8c) = 0;
          *(int *)(iVar14 + 0xa98) = iVar21;
          dVar31 = dVar30;
          if (iVar4 != 0) {
            if ((*(char *)(iVar4 + 0xd8) == '\0') && ((unsigned __int64)*(unsigned int *)(param_2 + 0x2c4) != 0)) {
              uVar9 = 2;
              lVar11 = fn_82526AF8(0x358,0xffffffff831cf9d4,
                                         (unsigned __int64)*(unsigned int *)(param_2 + 0x2c4) + 0x20);
              uVar23 = -(unsigned __int64)(lVar11 != -1) & lVar11 + 1U;
              cVar18 = fn_828EA5F8(iVar4);
              if (cVar18 == '\0') {
                iVar14 = (int)(float)piVar28[0x15];
                uStack_548 = (__int64)iVar14;
                iVar21 = *(int *)((int)((uVar23 & 0xffffffff) << 2) + *(int *)(iVar4 + 0x100));
              }
              else {
                iVar15 = (int)((uVar23 & 0xffffffff) << 2);
                iVar14 = *(int *)(iVar15 + *(int *)(iVar4 + 0x100));
                lStack_4f8 = (__int64)iVar14;
                iVar21 = (int)((float)piVar28[0x16] + (float)lStack_4f8);
                uStack_548 = (__int64)iVar21;
                if (iVar14 != iVar21) {
                  *(int *)(iVar15 + *(int *)(iVar4 + 0x100)) = iVar21;
                }
              }
              lStack_508 = (__int64)iVar14;
              iVar14 = fn_82353158((double)lStack_508,param_2);
              lStack_500 = (__int64)iVar21;
              iVar15 = fn_82353158((double)lStack_500,param_2);
              cVar18 = fn_828EA5F8(iVar4);
              iVar21 = stack_pair_560.first;
              dVar31 = (double)fStack_54c;
              if ((cVar18 != '\0') && (cVar18 = fn_828EA610(iVar4), cVar18 == '\0')) {
                if (*(int *)(*(int *)(iVar4 + 0x100) + 0x8d4) != iVar21) {
                  *(int *)(*(int *)(iVar4 + 0x100) + 0x8d4) = iVar21;
                }
                if (*(int *)(*(int *)(iVar4 + 0x100) + 0x8e0) != iVar15) {
                  *(int *)(*(int *)(iVar4 + 0x100) + 0x8e0) = iVar15;
                }
                uStack_548 = (__int64)(dVar31 * dVar32);
                if (*(int *)(*(int *)(iVar4 + 0x100) + 0x8ec) != (((unsigned __int64)(uStack_548) >> 32) & 0xFFFFFFFF)) {
                  *(int *)(*(int *)(iVar4 + 0x100) + 0x8ec) = (((unsigned __int64)(uStack_548) >> 32) & 0xFFFFFFFF);
                }
                uVar12 = fn_824B8548();
                fn_824BC388(uVar12,iVar4);
              }
              cVar18 = fn_828EA5F8(iVar4);
              if ((cVar18 != '\0') && (fn_822B1860(iVar4,iVar21), !bVar29)) {
                if (iStack_550 == iVar21) {
                  if (iVar14 == iVar15) goto LAB_82352e1c;
                  fn_82864988(auStack_4e0,0xffffffff821b22a8);
                  stack_pair_560.first = fn_828647D8();
                  fn_82864898(auStack_4e0);
                  piVar17 = &stack_pair_560.first;
                }
                else {
                  if (iVar21 == 1) {
                    fn_82864988(auStack_4e0,pcStack_540);
                    iStack_554 = fn_828647D8();
                    puVar16 = auStack_4e0;
LAB_82352dd4:
                    fn_82864898(puVar16);
                  }
                  else {
                    if (iVar21 == 2) {
                      fn_82864988(auStack_370,pcStack_518);
                      iStack_554 = fn_828647D8();
                      puVar16 = auStack_370;
                      goto LAB_82352dd4;
                    }
                    if (iVar21 == 3) {
                      fn_82864988(auStack_340,0xffffffff821b2218);
                      iStack_554 = fn_828647D8();
                      puVar16 = auStack_340;
                      goto LAB_82352dd4;
                    }
                    if (iVar21 == 4) {
                      fn_82864988(auStack_2e0,0xffffffff821b2248);
                      iStack_554 = fn_828647D8();
                      puVar16 = auStack_2e0;
                      goto LAB_82352dd4;
                    }
                    if (iVar21 == 5) {
                      fn_82864988(auStack_310,0xffffffff821b2278);
                      iStack_554 = fn_828647D8();
                      puVar16 = auStack_310;
                      goto LAB_82352dd4;
                    }
                  }
                  piVar17 = &iStack_554;
                }
                fn_82536590(piVar17,0);
                bVar29 = true;
              }
            }
            else {
              uVar9 = 1;
            }
          }
LAB_82352e1c:
          uVar2 = *puStack_558;
          fn_822B67F8(lVar10);
          uVar12 = fn_822B98A8();
          fn_8227B8D0((double)stack_pair_560.second,dVar31,uVar2,iVar13,piVar28[2],lVar10 + 0x30,uVar12,
                          uVar9);
          piVar28 = piVar28 + 0x17;
        } while (piVar28 != piVar3);
      }
      iVar13 = (**(int (***)())(**(int **)(param_2 + 0x18) + 0xa0))();
      if (iVar13 == 0) {
        uStack_2b0 = lbl_820E975C;
                    /* WARNING: Subroutine does not return */
        memset(auStack_2ae,0,0x1fe);
      }
      uVar2 = *puStack_558;
      uVar9 = (**(int (***)())(**(int **)(param_2 + 0x18) + 0xa0))();
      fn_82F64988((unsigned __int64)uVar2 + 0x3b0,0x100,uVar9);
      if ((*(int *)(param_2 + 0x3e0) != 0) && (lbl_832765BC != 0)) {
        uStack_3f0 = lbl_820E975C;
                    /* WARNING: Subroutine does not return */
        memset(auStack_3ee,0,0x3e);
      }
      fn_82670C10(&ppuStack_530);
      return;
    }
    if (*(unsigned int *)(uVar2 + 0xa48) < 2) {
      iVar13 = 1;
    }
    else {
      if (*(unsigned int *)(uVar2 + 0xa48) == 6) goto LAB_82353118;
      iVar13 = *(int *)(uVar2 + 0xa5c);
    }
    if ((iVar13 != 0) && (*(int *)(uVar2 + 0xa58) == 0)) {
      if ((*(int *)(uVar2 + 0xa48) == 4) && (*(int *)(param_2 + 0x3c0) != 0)) {
        fVar1 = (float)((double)*(float *)(param_2 + 0x3c0) - param_1);
        fVar6 = -fVar1;
        fVar7 = ltcg_pool_0_0f;
        if (*(float *)(&lbl_821954D8 +
                      ((unsigned int)(unsigned char)((fVar6 < ltcg_pool_0_0f) << 2) |
                      (unsigned int)(NAN(fVar6) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
          fVar7 = fVar1;
        }
        *(float *)(param_2 + 0x3c0) = fVar7;
        if (fVar7 == fVar8) {
          fn_8227B5E0(*puVar27);
        }
      }
      (**(int (***)())(*(int *)*puVar27 + 4))(param_1);
      return;
    }
  }
LAB_82353118:
  iVar13 = (**(int (***)())(**(int **)(param_2 + 0x18) + 0xa4))();
  uVar9 = 0x12;
  if (iVar13 == 0) {
    uVar9 = 0xf;
  }
  fn_82350888(param_2,uVar9);
  return;
}

