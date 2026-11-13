#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_822B98F8();
extern int fn_822B99C0();
extern int fn_822B9AB0();
extern int fn_82520158();
extern int fn_82532F98();
extern int fn_82630B08();
extern int fn_827EF828();
extern int fn_827EFAE8();
extern int fn_827EFFE8();
extern int fn_827F0180();
extern int fn_82A1EFC0();
extern unsigned int lbl_8218E8E8;
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_822B9E88(int *param_1)

{
  unsigned short uVar1;
  int iVar2;
  int iVar3;
  unsigned int *puVar4;
  __int64 lVar5;
  unsigned __int64 in_r0;
  unsigned int *puVar7;
  float *pfVar8;
  int iVar9;
  unsigned __int64 uVar6;
  int *piVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  __int64 lVar14;
  unsigned __int64 uVar15;
  double dVar16;
  unsigned int uVar17;
  unsigned int uVar18;
  unsigned int uVar19;
  int aiStack_70 [28];
  
  if (param_1[10] == 0) {
    if (((param_1[7] == 0) && (fn_822B98F8(), param_1[7] != 0)) &&
       (fn_82520158(0xffffffff821a9670,aiStack_70,0), aiStack_70[0] != 0)) {
      fn_822B99C0(param_1,aiStack_70);
      fn_827EF828((double)ltcg_pool_0_0f,param_1[7]);
      fn_827EFFE8(param_1[7]);
    }
    piVar13 = *(int **)(*param_1 + 0x8c0);
    if (piVar13 != (int *)0x0) {
      if (param_1[7] == 0) {
        piVar13 = piVar13 + 0x20;
        lVar14 = 4;
        do {
          piVar10 = (int *)*piVar13;
          uVar1 = *(unsigned short *)(piVar10 + 2);
          iVar9 = *piVar10;
          iVar2 = piVar10[1];
          if (uVar1 != 0) {
            iVar11 = iVar2 + 0x30;
            iVar12 = iVar9 + 0x20;
            uVar6 = (unsigned __int64)uVar1;
            do {
              iVar3 = (int)in_r0;
              puVar7 = (unsigned int *)((int)&lbl_8329EAD0 + iVar3 & 0xfffffff0);
              uVar17 = puVar7[1];
              uVar18 = puVar7[2];
              uVar19 = puVar7[3];
              puVar4 = (unsigned int *)(iVar12 - 0x20U & 0xfffffff0);
              *puVar4 = *puVar7;
              puVar4[1] = uVar17;
              puVar4[2] = uVar18;
              puVar4[3] = uVar19;
              uVar19 = uRam8329eaec;
              uVar18 = uRam8329eae8;
              uVar17 = uRam8329eae4;
              puVar7 = (unsigned int *)(iVar12 - 0x10U & 0xfffffff0);
              *puVar7 = lbl_8329EAE0;
              puVar7[1] = uVar17;
              puVar7[2] = uVar18;
              puVar7[3] = uVar19;
              uVar19 = uRam8329eafc;
              uVar18 = uRam8329eaf8;
              uVar17 = uRam8329eaf4;
              puVar7 = (unsigned int *)(iVar3 + iVar12 & 0xfffffff0);
              *puVar7 = lbl_8329EAF0;
              puVar7[1] = uVar17;
              puVar7[2] = uVar18;
              puVar7[3] = uVar19;
              uVar19 = uRam8329eb0c;
              uVar18 = uRam8329eb08;
              uVar17 = uRam8329eb04;
              puVar7 = (unsigned int *)(iVar12 + 0x10U & 0xfffffff0);
              *puVar7 = lbl_8329EB00;
              puVar7[1] = uVar17;
              puVar7[2] = uVar18;
              puVar7[3] = uVar19;
              if (iVar2 != 0) {
                puVar7 = (unsigned int *)((int)&lbl_8329EAD0 + iVar3 & 0xfffffff0);
                uVar17 = puVar7[1];
                uVar18 = puVar7[2];
                uVar19 = puVar7[3];
                puVar4 = (unsigned int *)(iVar11 - 0x30U & 0xfffffff0);
                *puVar4 = *puVar7;
                puVar4[1] = uVar17;
                puVar4[2] = uVar18;
                puVar4[3] = uVar19;
                uVar19 = uRam8329eaec;
                uVar18 = uRam8329eae8;
                uVar17 = uRam8329eae4;
                puVar7 = (unsigned int *)(iVar11 - 0x20U & 0xfffffff0);
                *puVar7 = lbl_8329EAE0;
                puVar7[1] = uVar17;
                puVar7[2] = uVar18;
                puVar7[3] = uVar19;
                uVar19 = uRam8329eafc;
                uVar18 = uRam8329eaf8;
                uVar17 = uRam8329eaf4;
                puVar7 = (unsigned int *)((iVar2 - iVar9) + iVar12 & 0xfffffff0);
                *puVar7 = lbl_8329EAF0;
                puVar7[1] = uVar17;
                puVar7[2] = uVar18;
                puVar7[3] = uVar19;
                uVar19 = uRam8329eb0c;
                uVar18 = uRam8329eb08;
                uVar17 = uRam8329eb04;
                puVar7 = (unsigned int *)(iVar3 + iVar11 & 0xfffffff0);
                *puVar7 = lbl_8329EB00;
                puVar7[1] = uVar17;
                puVar7[2] = uVar18;
                puVar7[3] = uVar19;
              }
              iVar12 = iVar12 + 0x40;
              iVar11 = iVar11 + 0x40;
              uVar6 = uVar6 - 1;
            } while (uVar6 != 0);
          }
          lVar5 = (unsigned __int64)uVar1 * 0x40;
          for (uVar6 = CONCAT44(iVar9,iVar9) & 0xffffffffffffff7f; (int)uVar6 < (int)lVar5 + iVar9;
              uVar6 = uVar6 + 0x80) {
            dataCacheBlockFlush(uVar6);
          }
          fn_82630B08(lbl_8320A898,iVar9,lVar5,0);
          if (iVar2 != 0) {
            for (uVar6 = CONCAT44(iVar2,iVar2) & 0xffffffffffffff7f; (int)uVar6 < (int)lVar5 + iVar2
                ; uVar6 = uVar6 + 0x80) {
              dataCacheBlockFlush(uVar6);
            }
            fn_82630B08(lbl_8320A898,iVar2,lVar5,0);
          }
          lVar14 = lVar14 + -1;
          piVar13 = piVar13 + 1;
        } while (lVar14 != 0);
      }
      else if (param_1[9] == 0) {
        uVar6 = (**(int (***)())(*piVar13 + 0xa8))(piVar13,param_1[6]);
        if ((uVar6 & 0xffffffff) != 0) {
          fn_82A1EFC0(uVar6,0,0x14);
        }
        uVar6 = 0;
        do {
          piVar10 = (int *)(**(int (***)())(*piVar13 + 0xa4))(piVar13,param_1[6],uVar6);
          if (piVar10 != (int *)0x0) {
            uVar1 = *(unsigned short *)(piVar10 + 2);
            iVar9 = *piVar10;
            iVar2 = piVar10[1];
            if (uVar1 != 0) {
              iVar11 = iVar2 + 0x30;
              iVar12 = iVar9 + 0x20;
              uVar15 = (unsigned __int64)uVar1;
              do {
                iVar3 = (int)in_r0;
                puVar7 = (unsigned int *)((int)&lbl_8329EAD0 + iVar3 & 0xfffffff0);
                uVar17 = puVar7[1];
                uVar18 = puVar7[2];
                uVar19 = puVar7[3];
                puVar4 = (unsigned int *)(iVar12 - 0x20U & 0xfffffff0);
                *puVar4 = *puVar7;
                puVar4[1] = uVar17;
                puVar4[2] = uVar18;
                puVar4[3] = uVar19;
                uVar19 = uRam8329eaec;
                uVar18 = uRam8329eae8;
                uVar17 = uRam8329eae4;
                puVar7 = (unsigned int *)(iVar12 - 0x10U & 0xfffffff0);
                *puVar7 = lbl_8329EAE0;
                puVar7[1] = uVar17;
                puVar7[2] = uVar18;
                puVar7[3] = uVar19;
                uVar19 = uRam8329eafc;
                uVar18 = uRam8329eaf8;
                uVar17 = uRam8329eaf4;
                puVar7 = (unsigned int *)(iVar3 + iVar12 & 0xfffffff0);
                *puVar7 = lbl_8329EAF0;
                puVar7[1] = uVar17;
                puVar7[2] = uVar18;
                puVar7[3] = uVar19;
                uVar19 = uRam8329eb0c;
                uVar18 = uRam8329eb08;
                uVar17 = uRam8329eb04;
                puVar7 = (unsigned int *)(iVar12 + 0x10U & 0xfffffff0);
                *puVar7 = lbl_8329EB00;
                puVar7[1] = uVar17;
                puVar7[2] = uVar18;
                puVar7[3] = uVar19;
                if (iVar2 != 0) {
                  puVar7 = (unsigned int *)((int)&lbl_8329EAD0 + iVar3 & 0xfffffff0);
                  uVar17 = puVar7[1];
                  uVar18 = puVar7[2];
                  uVar19 = puVar7[3];
                  puVar4 = (unsigned int *)(iVar11 - 0x30U & 0xfffffff0);
                  *puVar4 = *puVar7;
                  puVar4[1] = uVar17;
                  puVar4[2] = uVar18;
                  puVar4[3] = uVar19;
                  uVar19 = uRam8329eaec;
                  uVar18 = uRam8329eae8;
                  uVar17 = uRam8329eae4;
                  puVar7 = (unsigned int *)(iVar11 - 0x20U & 0xfffffff0);
                  *puVar7 = lbl_8329EAE0;
                  puVar7[1] = uVar17;
                  puVar7[2] = uVar18;
                  puVar7[3] = uVar19;
                  uVar19 = uRam8329eafc;
                  uVar18 = uRam8329eaf8;
                  uVar17 = uRam8329eaf4;
                  puVar7 = (unsigned int *)((iVar2 - iVar9) + iVar12 & 0xfffffff0);
                  *puVar7 = lbl_8329EAF0;
                  puVar7[1] = uVar17;
                  puVar7[2] = uVar18;
                  puVar7[3] = uVar19;
                  uVar19 = uRam8329eb0c;
                  uVar18 = uRam8329eb08;
                  uVar17 = uRam8329eb04;
                  puVar7 = (unsigned int *)(iVar3 + iVar11 & 0xfffffff0);
                  *puVar7 = lbl_8329EB00;
                  puVar7[1] = uVar17;
                  puVar7[2] = uVar18;
                  puVar7[3] = uVar19;
                }
                iVar12 = iVar12 + 0x40;
                iVar11 = iVar11 + 0x40;
                uVar15 = uVar15 - 1;
              } while (uVar15 != 0);
            }
            lVar14 = (unsigned __int64)uVar1 * 0x40;
            for (uVar15 = CONCAT44(iVar9,iVar9) & 0xffffffffffffff7f;
                (int)uVar15 < (int)lVar14 + iVar9; uVar15 = uVar15 + 0x80) {
              dataCacheBlockFlush(uVar15);
            }
            fn_82630B08(lbl_8320A898,iVar9,lVar14,0);
            if (iVar2 != 0) {
              for (uVar15 = CONCAT44(iVar2,iVar2) & 0xffffffffffffff7f;
                  (int)uVar15 < (int)lVar14 + iVar2; uVar15 = uVar15 + 0x80) {
                dataCacheBlockFlush(uVar15);
              }
              fn_82630B08(lbl_8320A898,iVar2,lVar14,0);
            }
          }
          uVar6 = uVar6 + 1;
        } while ((uVar6 & 0xffffffff) < 4);
      }
      else {
        puVar7 = (unsigned int *)(**(int (***)())(*piVar13 + 0xa8))(piVar13,param_1[6]);
        if (puVar7 != (unsigned int *)0x0) {
          lVar14 = 5;
          iVar9 = -0x7ce32ea4 - (int)puVar7;
          dVar16 = (double)lbl_8218E8E8;
          do {
            pfVar8 = (float *)fn_827EFAE8(param_1[7],*(unsigned int *)(iVar9 + (int)puVar7) & 0xffff);
            lVar14 = lVar14 + -1;
            *puVar7 = (int)(__int64)((double)*pfVar8 - dVar16);
            puVar7 = puVar7 + 1;
          } while (lVar14 != 0);
        }
        puVar7 = (unsigned int *)
                 (**(int (***)())(*piVar13 + 0xa4))
                           (piVar13,param_1[6],*(unsigned int *)(*(int *)(*param_1 + 0x4c) + 0x44));
        if (puVar7 != (unsigned int *)0x0) {
          uVar17 = *puVar7;
          uVar18 = puVar7[1];
          iVar9 = (**(int (***)())(*piVar13 + 0xac))(piVar13);
          if (iVar9 == 0) {
            fn_827F0180(param_1[7],uVar17,1,0,0);
          }
          else {
            fn_827F0180(param_1[7],uVar18,1,0,0);
            (**(int (***)())(*(int *)piVar13[0x6d] + 0x18))();
            fn_82532F98(puVar7,0xffffffff82190260);
          }
        }
      }
    }
    fn_822B9AB0(param_1);
  }
  return;
}

