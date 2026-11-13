typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_70;
extern unsigned int *auStack_90;
extern int fn_82AA66A8();
extern int fn_82ABDD90();
extern int fn_82ABF768();
extern int fn_82AD1978();
extern int fn_82B471E8();
extern int fn_82B84350();
extern int fn_82B86888();
extern int fn_82B8AC10();
extern int fn_82B8AE98();
extern unsigned int lbl_82005710;
extern unsigned int uStack_74;
extern unsigned int uStack_80;
extern unsigned int uStack_88;


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_82B23228(int param_1)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  bool bVar4;
  unsigned int uVar6;
  int iVar7;
  unsigned int uVar8;
  unsigned __int64 uVar5;
  unsigned int uVar9;
  char cVar10;
  unsigned __int64 uVar11;
  unsigned int uVar12;
  int *piVar13;
  unsigned int *puVar14;
  float *pfVar15;
  unsigned int *puVar16;
  int *piVar17;
  unsigned int uVar18;
  unsigned int *puVar19;
  unsigned __int64 uVar20;
  unsigned __int64 uVar21;
  unsigned int auStack_90 [2];
  unsigned __int64 uStack_88;
  unsigned __int64 uStack_80;
  unsigned int uStack_74;
  unsigned char auStack_70 [48];
  
  bVar4 = false;
  for (uVar6 = *(unsigned int *)((-(unsigned int)((*(unsigned int *)(param_1 + 4) & 1) == 0) & *(unsigned int *)(param_1 + 4)) +
                        0x14); ((uVar6 & 1) == 0 && (uVar6 != 0));
      uVar6 = *(unsigned int *)((uVar6 & 0xfffffffe) + 0x28)) {
    if (((*(unsigned int *)(uVar6 + 8) & 0x3f80) == 16000) && ((*(unsigned int *)(uVar6 + 0x14) >> 2 & 0xff) != 0))
    {
      uVar12 = 0;
      if ((*(unsigned int *)(uVar6 + 8) & 0x1c000) != 0) {
        uVar18 = 0;
        pfVar15 = (float *)(uVar6 + 0x2c);
        do {
          uVar8 = ((2 << (uVar18 + 1 & 0x1f)) - 1U &
                   *(unsigned int *)((int)auStack_90 + (uVar18 >> 3 & 0x1ffffffc)) & -1 << (uVar18 & 0x1f))
                  >> (uVar18 & 0x1f);
          if (uVar8 == 1) {
            uVar11 = (unsigned __int64)(int)*pfVar15;
            uStack_80 = uVar11;
LAB_82b23318:
            *pfVar15 = (float)(__int64)uVar11;
          }
          else if (uVar8 == 2) {
            uVar11 = (unsigned __int64)(unsigned int)*pfVar15;
            uStack_88 = uVar11;
            goto LAB_82b23318;
          }
          uVar12 = uVar12 + 1;
          pfVar15 = pfVar15 + 1;
          uVar18 = uVar18 + 2;
        } while (uVar12 < (*(unsigned int *)(uVar6 + 8) >> 0xe & 7));
      }
      bVar4 = true;
      *(unsigned int *)(uVar6 + 0x14) = *(unsigned int *)(uVar6 + 0x14) & 0xfffffc03;
    }
  }
  if (bVar4) {
    uVar12 = 0;
    uVar6 = *(unsigned int *)((-(unsigned int)((*(unsigned int *)(param_1 + 4) & 1) == 0) & *(unsigned int *)(param_1 + 4)) + 0x14);
joined_r0x82b23390:
    uVar18 = uVar6;
    if ((uVar6 & 1) == 0) {
      do {
        if (uVar18 == 0) break;
        if ((*(unsigned int *)(uVar18 + 8) & 0x3f80) == 16000) {
          uVar8 = 0;
          uVar6 = 0;
          if ((*(unsigned int *)(uVar18 + 8) >> 0xe & 7) != 0) {
            puVar14 = &uStack_74;
            puVar16 = (unsigned int *)(uVar18 + 0x28);
            do {
              puVar16 = puVar16 + 1;
              uVar8 = uVar8 + 1;
              puVar14 = puVar14 + 1;
              *puVar14 = *puVar16;
              uVar6 = *(unsigned int *)(uVar18 + 8) >> 0xe & 7;
            } while (uVar8 < uVar6);
          }
          uVar6 = fn_82B86888(param_1,uVar6,auStack_70,0);
          if (uVar6 != uVar18) {
            piVar13 = (int *)(uVar18 + 4);
            while (iVar7 = *piVar13, iVar7 != 0) {
              if (*(int *)(iVar7 + 0x10) != 0) {
                piVar17 = (int *)(*(int *)(iVar7 + 0xc) + 4);
                for (iVar1 = *piVar17; iVar1 != iVar7; iVar1 = *(int *)(iVar1 + 8)) {
                  piVar17 = (int *)(iVar1 + 8);
                }
                *piVar17 = *(int *)(iVar7 + 8);
                *(unsigned int *)(iVar7 + 8) = *(unsigned int *)(uVar6 + 4);
                *(int *)(uVar6 + 4) = iVar7;
                *(unsigned int *)(iVar7 + 0xc) = uVar6;
              }
              if (*piVar13 == iVar7) {
                piVar13 = (int *)(iVar7 + 8);
              }
            }
            fn_82B8AC10(param_1,uVar18,0,1);
          }
        }
        if (uVar12 == 0) {
          uVar6 = *(unsigned int *)(param_1 + 4);
          uVar8 = *(unsigned int *)((-(unsigned int)((uVar6 & 1) == 0) & uVar6) + 0x14);
          if (uVar18 == (-(unsigned int)((uVar8 & 1) == 0) & uVar8)) goto LAB_82b234a0;
          uVar6 = *(unsigned int *)((-(unsigned int)((uVar6 & 1) == 0) & uVar6) + 0x14);
        }
        else {
          uVar6 = *(unsigned int *)((uVar12 & 0xfffffffe) + 0x28);
          if (uVar18 != (-(unsigned int)((uVar6 & 1) == 0) & uVar6)) goto joined_r0x82b23390;
LAB_82b234a0:
          uVar6 = *(unsigned int *)((uVar18 & 0xfffffffe) + 0x28);
          uVar12 = uVar18;
        }
        uVar18 = uVar6;
        if ((uVar6 & 1) != 0) break;
      } while( true );
    }
  }
  if ((*(unsigned int *)(param_1 + 0x2c) & 0x600) != 0) {
    uVar6 = *(unsigned int *)(param_1 + 4);
    uVar21 = lbl_82005710;
joined_r0x82b23524:
    if (((uVar6 & 1) == 0) && (uVar6 != 0)) {
LAB_82b2353c:
      uVar12 = *(unsigned int *)(uVar6 + 0x1c);
      do {
        uVar12 = -(unsigned int)((uVar12 & 1) == 0) & uVar12;
        if (uVar12 == 0) {
          uVar6 = *(unsigned int *)((uVar6 & 0xfffffffe) + 4);
          goto joined_r0x82b23524;
        }
        uVar18 = *(unsigned int *)(uVar12 + 8);
        uVar8 = uVar12;
        if ((uVar18 & 0x3f80) == 0x3380) {
          iVar7 = fn_82ABDD90(param_1,0x67,uVar18 >> 0x13 & 7,0);
          uVar8 = *(unsigned int *)(iVar7 + (uVar12 - 4));
          if (5 < uVar8) goto LAB_82b236ac;
          uVar20 = (unsigned __int64)(uVar18 >> 0xe) & 7;
          uVar2 = *(unsigned int *)(uVar12 + 0x2c);
          uVar8 = fn_82B84350(param_1,*(unsigned int *)(uVar12 + 0x1c),0,uVar20);
          uVar3 = uVar8 & 0xfffffffe;
          puVar19 = (unsigned int *)((uVar12 & 0xfffffffe) + 0x24);
          uVar11 = 0;
          *(unsigned int *)(uVar3 + 0x24) = *puVar19;
          *(unsigned int *)(*puVar19 & 0xfffffffe) = uVar3;
          *(unsigned int *)(uVar3 + 0x28) = uVar12 & 0xfffffffe;
          *puVar19 = uVar3 + 0x28;
          if ((uVar18 >> 0xe & 7) != 0) {
            puVar16 = (unsigned int *)(uVar8 + 0x28);
            do {
              uVar5 = fn_82B471E8(param_1,uVar2,uVar11);
              uVar9 = fn_82AD1978(uVar8,uVar5);
              uVar11 = uVar11 + 1;
              puVar16 = puVar16 + 1;
              *puVar16 = uVar9;
            } while ((uVar11 & 0xffffffff) < uVar20);
          }
          piVar13 = (int *)(uVar12 + 4);
          while (iVar7 = *piVar13, iVar7 != 0) {
            if (*(int *)(iVar7 + 0x10) != 0) {
              piVar17 = (int *)(*(int *)(iVar7 + 0xc) + 4);
              for (iVar1 = *piVar17; iVar1 != iVar7; iVar1 = *(int *)(iVar1 + 8)) {
                piVar17 = (int *)(iVar1 + 8);
              }
              *piVar17 = *(int *)(iVar7 + 8);
              *(unsigned int *)(iVar7 + 8) = *(unsigned int *)(uVar8 + 4);
              *(int *)(uVar8 + 4) = iVar7;
              *(unsigned int *)(iVar7 + 0xc) = uVar8;
            }
            if (*piVar13 == iVar7) {
              piVar13 = (int *)(iVar7 + 8);
            }
          }
          fn_82B8AC10(param_1,uVar12,0,1);
        }
        uVar12 = *(unsigned int *)((uVar8 & 0xfffffffe) + 0x28);
      } while( true );
    }
  }
  return;
LAB_82b236ac:
  if (uVar8 != 0xf) {
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(param_1,0xe22);
  }
  cVar10 = fn_82ABF768(uVar21,*(unsigned int *)(uVar12 + 0x2c));
  if (cVar10 != '\0') {
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(param_1,0xe3b);
  }
  *(unsigned int *)(uVar12 + 8) = *(unsigned int *)(uVar12 + 8) & 0xfdffffff;
  fn_82B8AE98(param_1,uVar12);
  goto LAB_82b2353c;
}

