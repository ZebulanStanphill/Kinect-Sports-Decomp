typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_c0;
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82965280();
extern int fn_829672F8();
extern int fn_82969030();
extern int fn_8296CF68();
extern int fn_8296D430();
extern int fn_82F68CC0();
extern unsigned int iStack_ac;
extern unsigned int lbl_820387CC;
extern unsigned int lbl_820387D4;
extern unsigned int lbl_820387DC;


__int64 fn_82974948(int param_1)

{
  int iVar1;
  unsigned int *puVar2;
  int *piVar3;
  bool bVar4;
  __int64 lVar5;
  unsigned int *puVar6;
  unsigned int *puVar7;
  unsigned int *puVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  int iVar13;
  int iVar14;
  unsigned __int64 uVar11;
  unsigned __int64 uVar12;
  unsigned int uVar16;
  unsigned int *puVar17;
  unsigned __int64 uVar15;
  unsigned int *puVar18;
  unsigned int auStack_c0 [4];
  unsigned char **ppuStack_b0;
  int iStack_ac;
  
  puVar8 = (unsigned int *)0x0;
  puVar6 = (unsigned int *)0x0;
  puVar7 = (unsigned int *)0x0;
  lVar5 = fn_82969030();
  if ((lVar5 < 0) || (lVar5 = fn_8296D430(param_1), lVar5 < 0)) goto LAB_82974dc8;
  if (((*(unsigned int *)(param_1 + 0x6c) & 0x10) != 0) || ((*(unsigned int *)(param_1 + 0x6c) & 8) != 0)) {
    uVar16 = 0;
    uVar9 = 0;
    if (*(int *)(param_1 + 0xc) != 0) {
      iVar13 = 0;
      do {
        uVar16 = uVar16 + 1;
        piVar3 = (int *)(*(int *)(param_1 + 0x18) + iVar13);
        iVar13 = iVar13 + 4;
        *(unsigned int *)(*piVar3 + 0x2c) = 0;
        uVar9 = *(unsigned int *)(param_1 + 0xc);
      } while (uVar16 < uVar9);
    }
    if (uVar9 != 0) {
      iVar13 = uVar9 << 2;
      do {
        iVar13 = iVar13 + -4;
        uVar9 = uVar9 - 1;
        puVar17 = *(unsigned int **)(*(int *)(param_1 + 0x18) + iVar13);
        uVar16 = *puVar17;
        if ((uVar16 & 0xfff00000) != 0) {
          uVar10 = puVar17[0xb];
          if (((uVar16 & 0xf0000000) == 0x60000000) || ((uVar16 & 0xfff00000) == 0x11000000)) {
            uVar16 = uVar10 + 1;
            uVar10 = uVar10 + 2;
            puVar17[0xb] = uVar16;
          }
          uVar16 = 0;
          if (puVar17[5] != 0) {
            iVar14 = 0;
            do {
              iVar1 = *(int *)(*(int *)(iVar14 + puVar17[6]) * 4 + *(int *)(param_1 + 0x18));
              if (*(unsigned int *)(iVar1 + 0x2c) < uVar10) {
                *(unsigned int *)(iVar1 + 0x2c) = uVar10;
              }
              uVar16 = uVar16 + 1;
              iVar14 = iVar14 + 4;
            } while (uVar16 < puVar17[5]);
          }
        }
      } while (uVar9 != 0);
    }
  }
  bVar4 = false;
  uVar16 = 0;
  uVar9 = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar13 = 0;
    bVar4 = false;
    do {
      puVar17 = *(unsigned int **)(*(int *)(param_1 + 0x18) + iVar13);
      uVar9 = *puVar17 & 0xfff00000;
      if ((*puVar17 & 0xfff00000) != 0) {
        uVar10 = *(unsigned int *)puVar17[4];
        iVar14 = *(int *)(uVar10 * 4 + *(int *)(param_1 + 0x14));
        if ((*(unsigned int *)(*(int *)(*(int *)(iVar14 + 4) * 4 + *(int *)(param_1 + 0x10)) + 4) & 8) == 0)
        {
          if (((uVar9 == 0x20700000) || (uVar9 == 0x20800000)) || (uVar9 == 0x11500000)) {
            uVar10 = *(unsigned int *)(*(int *)(*(int *)puVar17[2] * 4 + *(int *)(param_1 + 0x14)) + 0x14);
          }
          else {
            uVar10 = *(unsigned int *)(iVar14 + 0x14);
          }
        }
        puVar17[0xd] = uVar10;
        if (uVar10 != 0xffffffff) {
          bVar4 = true;
        }
      }
      uVar9 = *(unsigned int *)(param_1 + 0xc);
      uVar16 = uVar16 + 1;
      iVar13 = iVar13 + 4;
    } while (uVar16 < uVar9);
  }
  if ((*(unsigned int *)(param_1 + 0xcc) & 4) != 0) {
    return 1;
  }
  if (bVar4) {
    puVar6 = (unsigned int *)fn_8265C940(uVar9 << 2,0x24810000);
    if ((puVar6 != (unsigned int *)0x0) &&
       (puVar7 = (unsigned int *)fn_8265C940(*(int *)(param_1 + 0xc) << 2,0x24810000),
       puVar7 != (unsigned int *)0x0)) {
      do {
        bVar4 = true;
        lVar5 = fn_8296CF68(param_1);
        if (lVar5 < 0) goto LAB_82974dc8;
        uVar16 = 0;
        uVar9 = 0;
        if (*(int *)(param_1 + 0xc) != 0) {
          puVar17 = puVar6 + -1;
          do {
            puVar17 = puVar17 + 1;
            *puVar17 = uVar16;
            uVar16 = uVar16 + 1;
            uVar9 = *(unsigned int *)(param_1 + 0xc);
          } while (uVar16 < uVar9);
        }
        fn_82965280(0xffffffff82964e60,puVar6,uVar9,param_1);
        uVar15 = 0;
        if (*(int *)(param_1 + 0xc) != 0) {
          uVar12 = 0;
          bVar4 = true;
          puVar17 = puVar6;
          do {
            uVar11 = uVar12 + 1;
            bVar4 = (bool)(uVar12 == *puVar17 & bVar4);
            *(unsigned int *)(((int)puVar7 - (int)puVar6) + (int)puVar17) =
                 *(unsigned int *)(*puVar17 * 4 + *(int *)(param_1 + 0x18));
            puVar17 = puVar17 + 1;
            uVar15 = (unsigned __int64)*(unsigned int *)(param_1 + 0xc);
            uVar12 = uVar11;
          } while ((uVar11 & 0xffffffff) < uVar15);
        }
        fn_82F68CC0(*(unsigned int *)(param_1 + 0x18),puVar7,(uVar15 & 0x3fffffff) << 2);
      } while (!bVar4);
      lVar5 = fn_8296D430(param_1);
      if (lVar5 < 0) goto LAB_82974dc8;
      ppuStack_b0 = &lbl_820387D4;
      iStack_ac = param_1;
      lVar5 = (*(int (**)())lbl_820387DC)(&ppuStack_b0,1);
      ppuStack_b0 = &lbl_820387CC;
      if (lVar5 < 0) goto LAB_82974dc8;
code_r0x82974db8:
      lVar5 = 0;
      goto LAB_82974dc8;
    }
  }
  else {
    uVar16 = 0;
    puVar8 = (unsigned int *)fn_8265C940(uVar9 << 2,0x24810000);
    if (((puVar8 != (unsigned int *)0x0) &&
        (puVar6 = (unsigned int *)fn_8265C940(*(int *)(param_1 + 0xc) << 2,0x24810000),
        puVar6 != (unsigned int *)0x0)) &&
       (puVar7 = (unsigned int *)fn_8265C940(*(int *)(param_1 + 0xc) << 2,0x24810000),
       puVar7 != (unsigned int *)0x0)) {
      uVar9 = 0;
      if (*(int *)(param_1 + 0xc) != 0) {
        iVar13 = 0;
        puVar17 = puVar8 + -1;
        do {
          puVar2 = *(unsigned int **)(*(int *)(param_1 + 0x18) + iVar13);
          puVar2[9] = 0;
          puVar2[0xe] = 0xffffffff;
          if (((*puVar2 & 0xfff00000) != 0) && (puVar2[7] == 0)) {
            puVar17 = puVar17 + 1;
            *puVar17 = uVar9;
            uVar16 = uVar16 + 1;
          }
          uVar9 = uVar9 + 1;
          iVar13 = iVar13 + 4;
        } while (uVar9 < *(unsigned int *)(param_1 + 0xc));
      }
      uVar9 = 0;
      auStack_c0[0] = 0;
      puVar18 = puVar8;
      if (uVar16 != 0) {
        do {
          lVar5 = fn_829672F8(param_1,*puVar18,puVar6,auStack_c0);
          if (lVar5 < 0) goto LAB_82974dc8;
          uVar9 = uVar9 + 1;
          puVar18 = puVar18 + 1;
        } while (uVar9 < uVar16);
      }
      uVar12 = 0;
      uVar15 = 0;
      if (*(int *)(param_1 + 0xc) != 0) {
        puVar18 = puVar7;
        do {
          uVar12 = uVar12 + 1;
          *puVar18 = *(unsigned int *)
                      (*(int *)(((int)puVar6 - (int)puVar7) + (int)puVar18) * 4 +
                      *(int *)(param_1 + 0x18));
          puVar18 = puVar18 + 1;
          uVar15 = (unsigned __int64)*(unsigned int *)(param_1 + 0xc);
        } while ((uVar12 & 0xffffffff) < uVar15);
      }
      fn_82F68CC0(*(unsigned int *)(param_1 + 0x18),puVar7,(uVar15 & 0x3fffffff) << 2);
      goto code_r0x82974db8;
    }
  }
  lVar5 = -0x7ff8fff2;
LAB_82974dc8:
  fn_8265C990(puVar8,0x24810000);
  fn_8265C990(puVar6,0x24810000);
  fn_8265C990(puVar7,0x24810000);
  return lVar5;
}

