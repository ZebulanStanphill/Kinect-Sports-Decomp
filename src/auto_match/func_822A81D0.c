#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int fStack_8c;
extern unsigned int fStack_98;
extern int fn_82520158();
extern int fn_82532F98();
extern int fn_82554860();
extern int fn_82630B08();
extern int fn_827EF828();
extern int fn_827EFAE8();
extern int fn_827EFFE8();
extern int fn_827F0180();
extern int fn_82A1DBD8();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821917C0;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_8320A898;
extern unsigned int lbl_8329EAD0;
extern unsigned int lbl_8329EAE0;
extern unsigned int lbl_8329EAF0;
extern unsigned int lbl_8329EB00;
extern unsigned int uRam8329eae4;
extern unsigned int uRam8329eae8;
extern unsigned int uRam8329eaec;
extern unsigned int uRam8329eaf4;
extern unsigned int uRam8329eaf8;
extern unsigned int uRam8329eafc;
extern unsigned int uRam8329eb04;
extern unsigned int uRam8329eb08;
extern unsigned int uRam8329eb0c;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;
extern unsigned int uStack_84;
extern unsigned int uStack_88;
extern unsigned int uStack_90;
extern unsigned int uStack_94;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_822A81D0(int param_1)

{
  unsigned short uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  unsigned int *puVar5;
  unsigned __int64 in_r0;
  unsigned int *puVar6;
  float *pfVar7;
  int *piVar8;
  int iVar9;
  unsigned __int64 uVar10;
  int iVar11;
  unsigned __int64 uVar12;
  unsigned int uVar13;
  __int64 lVar14;
  double dVar15;
  unsigned int uVar16;
  unsigned int uVar17;
  unsigned int uVar18;
  int aiStack_b0 [4];
  struct { unsigned int first; unsigned int second; } stack_pair_a0;

  float fStack_98;
  unsigned int uStack_94;
  unsigned int uStack_90;
  float fStack_8c;
  unsigned int uStack_88;
  unsigned int uStack_84;
  unsigned int uStack_80;
  unsigned int uStack_7c;
  unsigned int uStack_78;
  unsigned int uStack_74;
  unsigned int uStack_70;
  unsigned int uStack_6c;
  
  if ((*(int *)(param_1 + 0x5cc) == 0) || (*(int *)(param_1 + 0x5d0) == 0)) {
    uVar13 = 0x80;
    do {
      piVar8 = *(int **)(uVar13 + *(int *)(param_1 + 0x550));
      uVar1 = *(unsigned short *)(piVar8 + 2);
      iVar3 = *piVar8;
      iVar2 = piVar8[1];
      if (uVar1 != 0) {
        iVar9 = iVar2 + 0x30;
        iVar11 = iVar3 + 0x20;
        uVar12 = (unsigned __int64)uVar1;
        do {
          iVar4 = (int)in_r0;
          puVar6 = (unsigned int *)((int)&lbl_8329EAD0 + iVar4 & 0xfffffff0);
          uVar16 = puVar6[1];
          uVar17 = puVar6[2];
          uVar18 = puVar6[3];
          puVar5 = (unsigned int *)(iVar11 - 0x20U & 0xfffffff0);
          *puVar5 = *puVar6;
          puVar5[1] = uVar16;
          puVar5[2] = uVar17;
          puVar5[3] = uVar18;
          uVar18 = uRam8329eaec;
          uVar17 = uRam8329eae8;
          uVar16 = uRam8329eae4;
          puVar6 = (unsigned int *)(iVar11 - 0x10U & 0xfffffff0);
          *puVar6 = lbl_8329EAE0;
          puVar6[1] = uVar16;
          puVar6[2] = uVar17;
          puVar6[3] = uVar18;
          uVar18 = uRam8329eafc;
          uVar17 = uRam8329eaf8;
          uVar16 = uRam8329eaf4;
          puVar6 = (unsigned int *)(iVar4 + iVar11 & 0xfffffff0);
          *puVar6 = lbl_8329EAF0;
          puVar6[1] = uVar16;
          puVar6[2] = uVar17;
          puVar6[3] = uVar18;
          uVar18 = uRam8329eb0c;
          uVar17 = uRam8329eb08;
          uVar16 = uRam8329eb04;
          puVar6 = (unsigned int *)(iVar11 + 0x10U & 0xfffffff0);
          *puVar6 = lbl_8329EB00;
          puVar6[1] = uVar16;
          puVar6[2] = uVar17;
          puVar6[3] = uVar18;
          if (iVar2 != 0) {
            puVar6 = (unsigned int *)((int)&lbl_8329EAD0 + iVar4 & 0xfffffff0);
            uVar16 = puVar6[1];
            uVar17 = puVar6[2];
            uVar18 = puVar6[3];
            puVar5 = (unsigned int *)(iVar9 - 0x30U & 0xfffffff0);
            *puVar5 = *puVar6;
            puVar5[1] = uVar16;
            puVar5[2] = uVar17;
            puVar5[3] = uVar18;
            uVar18 = uRam8329eaec;
            uVar17 = uRam8329eae8;
            uVar16 = uRam8329eae4;
            puVar6 = (unsigned int *)(iVar9 - 0x20U & 0xfffffff0);
            *puVar6 = lbl_8329EAE0;
            puVar6[1] = uVar16;
            puVar6[2] = uVar17;
            puVar6[3] = uVar18;
            uVar18 = uRam8329eafc;
            uVar17 = uRam8329eaf8;
            uVar16 = uRam8329eaf4;
            puVar6 = (unsigned int *)((iVar2 - iVar3) + iVar11 & 0xfffffff0);
            *puVar6 = lbl_8329EAF0;
            puVar6[1] = uVar16;
            puVar6[2] = uVar17;
            puVar6[3] = uVar18;
            uVar18 = uRam8329eb0c;
            uVar17 = uRam8329eb08;
            uVar16 = uRam8329eb04;
            puVar6 = (unsigned int *)(iVar4 + iVar9 & 0xfffffff0);
            *puVar6 = lbl_8329EB00;
            puVar6[1] = uVar16;
            puVar6[2] = uVar17;
            puVar6[3] = uVar18;
          }
          iVar11 = iVar11 + 0x40;
          iVar9 = iVar9 + 0x40;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
      lVar14 = (unsigned __int64)uVar1 * 0x40;
      for (uVar12 = CONCAT44(iVar3,iVar3) & 0xffffffffffffff7f; (int)uVar12 < (int)lVar14 + iVar3;
          uVar12 = uVar12 + 0x80) {
        dataCacheBlockFlush(uVar12);
      }
      fn_82630B08(lbl_8320A898,iVar3,lVar14,0);
      if (iVar2 != 0) {
        for (uVar12 = CONCAT44(iVar2,iVar2) & 0xffffffffffffff7f; (int)uVar12 < (int)lVar14 + iVar2;
            uVar12 = uVar12 + 0x80) {
          dataCacheBlockFlush(uVar12);
        }
        fn_82630B08(lbl_8320A898,iVar2,lVar14,0);
      }
      uVar13 = uVar13 + 4;
    } while (uVar13 < 0x90);
  }
  else {
    fn_82520158(0xffffffff821a9670,aiStack_b0,0);
    if (aiStack_b0[0] != 0) {
      dVar15 = (double)ltcg_pool_0_0f;
      fStack_98 = ltcg_pool_0_0f;
      stack_pair_a0.first = 0x4d697850;
      fStack_8c = ltcg_pool_0_0f;
      uStack_94 = 0x20;
      stack_pair_a0.second = lbl_821CA460;
      uStack_88 = 0;
      uStack_90 = lbl_821917C0;
      uStack_84 = 0x40;
      uStack_80 = lbl_821917C0;
      uStack_7c = 0;
      uStack_70 = 0;
      uStack_6c = 0;
      uStack_78 = 0;
      uStack_74 = 0;
      fn_82554860(*(unsigned int *)(param_1 + 0x5d0),0,aiStack_b0,&stack_pair_a0.first);
      fn_827EF828(dVar15,*(unsigned int *)(param_1 + 0x5cc));
      fn_827EFFE8(*(unsigned int *)(param_1 + 0x5cc));
      puVar6 = (unsigned int *)
               (**(int (***)())(**(int **)(param_1 + 0x550) + 0xa8))
                         (*(int **)(param_1 + 0x550),*(unsigned int *)(param_1 + 0x5d4));
      if (puVar6 != (unsigned int *)0x0) {
        dVar15 = (double)lbl_8218E8E8;
        lVar14 = 5;
        iVar3 = -0x7ce31840 - (int)puVar6;
        do {
          pfVar7 = (float *)fn_827EFAE8(*(unsigned int *)(param_1 + 0x5cc),
                                              *(unsigned int *)(iVar3 + (int)puVar6) & 0xffff);
          lVar14 = lVar14 + -1;
          *puVar6 = (int)(__int64)((double)*pfVar7 - dVar15);
          puVar6 = puVar6 + 1;
        } while (lVar14 != 0);
      }
      piVar8 = (int *)(**(int (***)())(**(int **)(param_1 + 0x550) + 0xa4))
                                (*(int **)(param_1 + 0x550),*(unsigned int *)(param_1 + 0x5d4),0);
      if (piVar8 != (int *)0x0) {
        iVar3 = *piVar8;
        iVar2 = piVar8[1];
        uVar1 = *(unsigned short *)(piVar8 + 2);
        iVar9 = (**(int (***)())(**(int **)(param_1 + 0x550) + 0xac))();
        if (iVar9 == 0) {
          fn_827F0180(*(unsigned int *)(param_1 + 0x5cc),iVar3,1,0,0);
        }
        else {
          fn_827F0180(*(unsigned int *)(param_1 + 0x5cc),iVar2,1,0,0);
          (**(int (***)())(**(int **)(*(int *)(param_1 + 0x550) + 0x1b4) + 0x18))();
          fn_82532F98(piVar8,0xffffffff82190260);
        }
        uVar12 = 1;
        do {
          piVar8 = (int *)(**(int (***)())(**(int **)(param_1 + 0x550) + 0xa4))
                                    (*(int **)(param_1 + 0x550),*(unsigned int *)(param_1 + 0x5d4),
                                     uVar12);
          if (piVar8 != (int *)0x0) {
            iVar9 = *piVar8;
            iVar11 = piVar8[1];
            if ((iVar9 != 0) && (iVar3 != 0)) {
              iVar4 = (unsigned int)uVar1 * 0x40;
              fn_82A1DBD8(iVar9,iVar3,iVar4);
              for (uVar10 = CONCAT44(iVar9,iVar9) & 0xffffffffffffff7f; (int)uVar10 < iVar4 + iVar9;
                  uVar10 = uVar10 + 0x80) {
                dataCacheBlockFlush(uVar10);
              }
              fn_82630B08(lbl_8320A898,iVar9,iVar4,0);
            }
            if ((iVar11 != 0) && (iVar2 != 0)) {
              iVar9 = (unsigned int)uVar1 * 0x40;
              fn_82A1DBD8(iVar11,iVar2,iVar9);
              for (uVar10 = CONCAT44(iVar11,iVar11) & 0xffffffffffffff7f;
                  (int)uVar10 < iVar9 + iVar11; uVar10 = uVar10 + 0x80) {
                dataCacheBlockFlush(uVar10);
              }
              fn_82630B08(lbl_8320A898,iVar11,iVar9,0);
            }
          }
          uVar12 = uVar12 + 1;
        } while ((uVar12 & 0xffffffff) < 4);
      }
    }
  }
  return;
}

