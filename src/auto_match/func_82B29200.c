typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82AA66A8();
extern int fn_82ABDD90();
extern int fn_82AD2020();
extern int fn_82B25E80();
extern int fn_82B8AE98();
extern int fn_82B8F170();
extern int fn_82B8F1B0();


unsigned __int64 fn_82B29200(int param_1,unsigned int param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  char cVar6;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar7;
  unsigned int *puVar8;
  unsigned __int64 uVar9;
  unsigned int *puVar10;
  unsigned int uVar11;
  int *piVar12;
  unsigned __int64 uVar13;
  
  uVar9 = 0;
  do {
    iVar5 = *(int *)(param_2 + 8);
    uVar13 = 0;
    if ((iVar5 == 0) || (bVar7 = true, *(int *)(iVar5 + 0xc) == 0)) {
      bVar7 = false;
    }
    if (((!bVar7) && (iVar5 != 0)) && (uVar11 = *(unsigned int *)(iVar5 + 4), uVar11 != 0)) {
      if ((*(int *)(uVar11 + 0xc) == 0) || (bVar7 = true, *(int *)(*(int *)(uVar11 + 0xc) + 8) == 0)
         ) {
        bVar7 = false;
      }
      if ((!bVar7) && (cVar6 = fn_82B25E80(param_1,uVar11,param_2,1), cVar6 != '\0')) {
        uVar13 = 1;
        param_2 = uVar11;
      }
    }
    piVar12 = *(int **)(param_2 + 0xc);
    if ((piVar12 == (int *)0x0) || (bVar7 = true, piVar12[2] == 0)) {
      bVar7 = false;
    }
    if (((!bVar7) && (piVar12 != (int *)0x0)) && (iVar5 = *piVar12, iVar5 != 0)) {
      if ((*(int *)(iVar5 + 8) == 0) || (bVar7 = true, *(int *)(*(int *)(iVar5 + 8) + 0xc) == 0)) {
        bVar7 = false;
      }
      if ((!bVar7) && (cVar6 = fn_82B25E80(param_1,param_2,iVar5,1), cVar6 != '\0')) {
        uVar13 = 1;
      }
    }
    if (param_2 != (-(unsigned int)((*(unsigned int *)(param_1 + 4) & 1) == 0) & *(unsigned int *)(param_1 + 4))) {
      puVar10 = (unsigned int *)(param_2 + 0x30);
      if (((((*(unsigned int *)(param_2 + 0x30) >> 0x13 & 1) == 0) && ((*(unsigned int *)(param_2 + 0x14) & 1) != 0)
           ) && ((*(unsigned int *)(param_2 + 0x1c) & 1) != 0)) && ((*(unsigned int *)(param_2 + 0x24) & 1) != 0)) {
        puVar8 = *(unsigned int **)(param_2 + 0xc);
        if ((puVar8 == (unsigned int *)0x0) || (bVar7 = true, puVar8[2] == 0)) {
          bVar7 = false;
        }
        if (bVar7) {
                    /* WARNING: Subroutine does not return */
          fn_82AA66A8(param_1,0x12c0);
        }
        uVar11 = 0;
        if (puVar8 != (unsigned int *)0x0) {
          uVar11 = *puVar8;
        }
        if (uVar11 != param_2) {
          if (uVar11 != 0) {
            if (((*(unsigned int *)(param_2 + 0x30) >> 0x15 & 1) != 0) &&
               ((*(unsigned int *)(uVar11 + 0x30) >> 0x15 & 1) != 0)) goto LAB_82b295c4;
            piVar12 = (int *)(param_2 + 8);
            iVar5 = *(int *)(param_2 + 8);
            while (iVar5 != 0) {
              iVar3 = *(int *)(iVar5 + 4);
              for (puVar8 = *(unsigned int **)(iVar3 + 0xc); puVar8 != (unsigned int *)0x0;
                  puVar8 = (unsigned int *)puVar8[2]) {
                if (uVar11 == *puVar8) {
                  bVar7 = true;
                  goto LAB_82b29410;
                }
              }
              bVar7 = false;
LAB_82b29410:
              if (bVar7) {
                fn_82B8F1B0(iVar3,param_2,param_1);
              }
              else {
                fn_82B8F170(iVar3,iVar5,uVar11);
              }
              iVar3 = fn_82AD2020(param_1,iVar3);
              if (iVar3 != 0) {
                uVar1 = *(unsigned int *)(iVar3 + 8);
                iVar4 = fn_82ABDD90(param_1,uVar1 >> 7 & 0x7f,uVar1 >> 0x13 & 7,uVar1 >> 0xe & 7);
                puVar8 = (unsigned int *)(iVar4 + iVar3 + -0x10);
                if (*puVar8 == param_2) {
                  *puVar8 = uVar11;
                }
                if (bVar7) {
                  uVar1 = *(unsigned int *)(iVar3 + 8) >> 7 & 0x7f;
                  if (uVar1 == 0x57) {
                    /* WARNING: Subroutine does not return */
                    fn_82AA66A8(param_1,0xdac,0xffffffff820d7f64);
                  }
                  if (uVar1 == 0x5a) {
                    fn_82B8AE98(param_1,iVar3);
                  }
                }
              }
              if (*piVar12 == iVar5) {
                piVar12 = (int *)(iVar5 + 0xc);
              }
              iVar5 = *piVar12;
            }
            for (uVar1 = *(unsigned int *)(param_1 + 4); ((uVar1 & 1) == 0 && (uVar1 != 0));
                uVar1 = *(unsigned int *)((uVar1 & 0xfffffffe) + 4)) {
              if ((*(int *)(uVar1 + 0xc) == 0) ||
                 (bVar7 = true, *(int *)(*(int *)(uVar1 + 0xc) + 8) == 0)) {
                bVar7 = false;
              }
              if ((!bVar7) && (iVar5 = fn_82AD2020(param_1,uVar1), iVar5 != 0)) {
                uVar2 = *(unsigned int *)(iVar5 + 8);
                iVar3 = fn_82ABDD90(param_1,uVar2 >> 7 & 0x7f,uVar2 >> 0x13 & 7,uVar2 >> 0xe & 7);
                puVar8 = (unsigned int *)(iVar3 + iVar5 + -0x10);
                if (*puVar8 == param_2) {
                  *puVar8 = uVar11;
                }
              }
            }
            fn_82B8F1B0(param_2,uVar11,param_1);
          }
          if ((*puVar10 >> 0x15 & 1) != 0) {
            *(unsigned int *)(uVar11 + 0x30) = *(unsigned int *)(uVar11 + 0x30) | 0x200000;
          }
          puVar8 = (unsigned int *)(param_2 & 0xfffffffe);
          uVar13 = 1;
          *(unsigned int *)(puVar8[1] & 0xfffffffe) = *puVar8;
          *(unsigned int *)(*puVar8 & 0xfffffffe) = puVar8[1];
          *(unsigned int *)(param_2 + 0x50) = uVar11;
          *puVar10 = *puVar10 | 0x400000;
          param_2 = uVar11;
        }
      }
    }
LAB_82b295c4:
    uVar9 = uVar9 | uVar13;
    if ((uVar13 == 0) || (param_2 == 0)) {
      return uVar9;
    }
  } while( true );
}

