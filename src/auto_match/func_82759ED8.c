#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_82759CB8();
extern int fn_82759DE8();
extern int fn_82F655D8();
extern int fn_82F68918();
extern int fn_82F6A544();
extern int fn_82F6A590();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_82005328;
extern unsigned int lbl_820145F8;
extern unsigned int stack0x00000000;
extern unsigned int uStack_29a;


void fn_82759ED8(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned __int64 uVar1;
  int iVar2;
  unsigned int *puVar3;
  __int64 lVar4;
  unsigned int uVar5;
  unsigned short uVar6;
  unsigned short uVar8;
  unsigned int *puVar7;
  unsigned int uVar9;
  int iVar10;
  unsigned char *pbVar12;
  int iVar13;
  __int64 lVar11;
  unsigned int uVar14;
  __int64 lVar15;
  unsigned int uVar16;
  double extraout_f1;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  unsigned short uStack_29a;
  
  uVar1 = ZEXT48(&stack0x00000000);
  iVar2 = fn_82F6A544();
  uVar9 = 0;
  if (((param_3 & 0xffffffff) == 0) || ((param_2 & 0xffffffff) == 0)) {
    param_3 = 1;
    param_2 = uVar1 - 0x290;
  }
  pbVar12 = (unsigned char *)param_2;
  if ((param_3 & 0xffffffff) < 2) {
    puVar7 = (unsigned int *)(iVar2 + -4);
    lVar4 = 0x100;
    do {
      puVar7 = puVar7 + 1;
      *puVar7 = *(unsigned int *)(pbVar12 + 4);
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  else {
    dVar19 = (double)lbl_82002AE0;
    dVar18 = extraout_f1;
    if (extraout_f1 == dVar19) {
      lVar4 = uVar1 - 0x282;
      uVar8 = 0;
      lVar15 = 0x100;
      do {
        uVar6 = uVar8 << 8 | uVar8;
        uVar8 = uVar8 + 1;
        lVar4 = lVar4 + 2;
        *(unsigned short *)lVar4 = uVar6;
        lVar15 = lVar15 + -1;
        dVar20 = dVar19;
      } while (lVar15 != 0);
    }
    else {
      lVar4 = uVar1 - 0x282;
      uVar14 = 0;
      dVar21 = (double)lbl_820145F8;
      dVar20 = (double)lbl_82002C5C;
      dVar22 = (double)lbl_82005328;
      do {
        dVar17 = (double)fn_82F655D8((double)(float)((double)uVar14 * dVar22),dVar18);
        dVar17 = (double)fn_82F68918((double)(float)((double)(float)dVar17 * dVar21 + dVar20));
        uVar14 = uVar14 + 1;
        uStack_29a = (unsigned short)(__int64)dVar17;
        lVar4 = lVar4 + 2;
        *(unsigned short *)lVar4 = uStack_29a;
      } while (uVar14 < 0x100);
      dVar20 = (double)(float)(dVar19 / dVar18);
    }
    uVar14 = (unsigned int)*pbVar12;
    uVar5 = *(unsigned int *)(pbVar12 + 4);
    if (uVar14 != 0) {
      puVar7 = (unsigned int *)(iVar2 + -4);
      uVar16 = uVar14;
      do {
        puVar7 = puVar7 + 1;
        *puVar7 = uVar5;
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
    }
    if (1 < (param_3 & 0xffffffff)) {
      lVar4 = param_2 + 6;
      lVar15 = param_3 - 1;
      do {
        uVar9 = (unsigned int)*(unsigned char *)((int)lVar4 + 2);
        if (uVar9 < uVar14) {
          uVar9 = uVar14;
        }
        lVar4 = lVar4 + 8;
        iVar10 = uVar9 - uVar14;
        if (dVar18 == dVar19) {
          if (uVar14 < uVar9) {
            iVar13 = 1 - uVar14;
            puVar7 = (unsigned int *)(uVar14 * 4 + iVar2 + -4);
            do {
              puVar3 = (unsigned int *)
                       fn_82759DE8(uVar1 - 0x284,uVar1 - 0x298,uVar1 - 0x2a0,iVar13 + uVar14,
                                     iVar10);
              uVar5 = *puVar3;
              uVar14 = uVar14 + 1;
              puVar7 = puVar7 + 1;
              *puVar7 = uVar5;
            } while (uVar14 < uVar9);
          }
        }
        else if (uVar14 < uVar9) {
          lVar11 = 1;
          puVar7 = (unsigned int *)(uVar14 * 4 + iVar2 + -4);
          uVar14 = iVar10 + uVar14;
          iVar13 = iVar10;
          do {
            puVar3 = (unsigned int *)
                     fn_82759CB8(dVar20,uVar1 - 0x288,uVar1 - 0x298,uVar1 - 0x2a0,lVar11,iVar10);
            uVar5 = *puVar3;
            iVar13 = iVar13 + -1;
            lVar11 = lVar11 + 1;
            puVar7 = puVar7 + 1;
            *puVar7 = uVar5;
          } while (iVar13 != 0);
        }
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
      if (0xff < uVar9) goto LAB_8275a1b4;
    }
    puVar7 = (unsigned int *)(uVar9 * 4 + iVar2 + -4);
    for (iVar2 = 0x100 - uVar9; iVar2 != 0; iVar2 = iVar2 + -1) {
      puVar7 = puVar7 + 1;
      *puVar7 = uVar5;
    }
  }
LAB_8275a1b4:
  fn_82F6A590();
  return;
}

