typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82ACAC38();
extern int fn_82AEFC28();
extern int fn_82B41E50();
extern int fn_82B43A00();
extern int fn_82B43A78();
extern int fn_82F691F0();


void fn_82B44C38(int param_1,__int64 param_2)

{
  int *piVar1;
  int iVar2;
  unsigned int uVar3;
  bool bVar4;
  unsigned int uVar5;
  char cVar6;
  int iVar7;
  int **ppiVar8;
  unsigned __int64 uVar9;
  int *piVar10;
  unsigned int uVar11;
  unsigned int *puVar12;
  int *apiStack_50 [20];
  
  fn_82AEFC28(apiStack_50,param_2 + 1,0xffffffff82af07e8,param_1);
  piVar10 = apiStack_50[0];
  do {
    bVar4 = false;
    uVar11 = -(unsigned int)((*(unsigned int *)(param_1 + 4) & 1) == 0) & *(unsigned int *)(param_1 + 4);
    uVar5 = *(unsigned int *)(uVar11 + 0x38);
    while (uVar3 = uVar5, uVar3 != 0) {
      uVar11 = uVar3;
      uVar5 = *(unsigned int *)(uVar3 + 0x38);
    }
    do {
      if ((~(unsigned int)piVar10 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(piVar10 + 1,0,*piVar10 << 2);
      }
      piVar10 = (int *)0x1;
      apiStack_50[0] = (int *)0x1;
      for (piVar1 = *(int **)(uVar11 + 0xc); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
        iVar2 = *piVar1;
        if ((*(unsigned int *)(iVar2 + 0x34) != uVar11) && ((*(unsigned int *)(iVar2 + 0x30) >> 0x13 & 1) == 0)) {
          ppiVar8 = (int **)(piVar10 + 1);
          if ((~(unsigned int)piVar10 & 1) == 0) {
            ppiVar8 = apiStack_50;
          }
          uVar9 = ((unsigned __int64)*(unsigned int *)(iVar2 + 0x30) & 0x7ffff) + 1;
          uVar5 = (unsigned int)(uVar9 >> 3) & 0x1ffffffc;
          *(unsigned int *)(uVar5 + (int)ppiVar8) =
               1 << ((unsigned int)uVar9 & 0x1f) | *(unsigned int *)(uVar5 + (int)ppiVar8);
          fn_82B43A00(apiStack_50,iVar2 + 0x54);
          piVar10 = apiStack_50[0];
        }
      }
      for (iVar2 = *(int *)(uVar11 + 0x38); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x3c)) {
        if ((*(unsigned int *)(iVar2 + 0x30) >> 0x13 & 1) == 0) {
          puVar12 = (unsigned int *)(iVar2 + 0x54);
          iVar7 = 0;
          do {
            uVar5 = fn_82B41E50(puVar12,iVar7);
            while( true ) {
              if ((~*puVar12 & 1) == 0) {
                iVar7 = 0x1f;
              }
              else {
                iVar7 = *(int *)*puVar12 * 0x20 + -1;
              }
              if (iVar7 - 1U < uVar5) goto LAB_82b44e34;
              iVar7 = *(int *)(uVar5 * 4 + *(int *)(param_1 + 0x60) + -4);
              if (*(unsigned int *)(iVar7 + 0x34) != uVar11) {
                ppiVar8 = (int **)(piVar10 + 1);
                if ((~(unsigned int)piVar10 & 1) == 0) {
                  ppiVar8 = apiStack_50;
                }
                uVar9 = ((unsigned __int64)*(unsigned int *)(iVar7 + 0x30) & 0x7ffff) + 1;
                uVar3 = (unsigned int)(uVar9 >> 3) & 0x1ffffffc;
                *(unsigned int *)(uVar3 + (int)ppiVar8) =
                     1 << ((unsigned int)uVar9 & 0x1f) | *(unsigned int *)(uVar3 + (int)ppiVar8);
                fn_82B43A00(apiStack_50,iVar7 + 0x54);
                piVar10 = apiStack_50[0];
              }
              if ((~*puVar12 & 1) == 0) {
                iVar7 = 0x1f;
              }
              else {
                iVar7 = *(int *)*puVar12 * 0x20 + -1;
              }
              if (uVar5 != iVar7 - 1U) break;
              uVar5 = 0xffffffff;
            }
            iVar7 = uVar5 + 1;
          } while( true );
        }
LAB_82b44e34:;}
      cVar6 = fn_82B43A78(uVar11 + 0x54,apiStack_50);
      if (cVar6 == '\0') {
        fn_82ACAC38(uVar11 + 0x54,apiStack_50);
        bVar4 = true;
      }
      uVar5 = *(unsigned int *)(uVar11 + 0x3c);
      if (uVar5 == 0) {
        uVar11 = *(unsigned int *)(uVar11 + 0x34);
      }
      else {
        uVar3 = *(unsigned int *)(uVar5 + 0x38);
        uVar11 = uVar5;
        while (uVar5 = uVar3, uVar5 != 0) {
          uVar11 = uVar5;
          uVar3 = *(unsigned int *)(uVar5 + 0x38);
        }
      }
    } while (uVar11 != 0);
    if (!bVar4) {
      return;
    }
  } while( true );
}

