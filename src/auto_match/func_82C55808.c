extern int fn_82A29A38();
extern int fn_82C53960();
extern int fn_82C53970();
extern int fn_82C54E88();
extern int fn_82C550F0();
extern int fn_82C561E8();
extern int fn_82C56398();
extern int fn_82CBBD68();
extern int fn_82CBBD70();
extern int free();
extern int malloc();
extern int memset();


int * fn_82C55808(int param_1,int param_2,int param_3)

{
  int *piVar2;
  int iVar3;
  unsigned __int64 uVar1;
  unsigned int uVar4;
  unsigned int uVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  __int64 lVar9;
  
  piVar2 = (int *)malloc(0x28);
  if (piVar2 != (int *)0x0) {
    piVar7 = piVar2 + -1;
    lVar9 = 10;
    do {
      piVar7 = piVar7 + 1;
      *piVar7 = 0;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    piVar7 = piVar2 + 1;
    iVar3 = fn_82CBBD68(piVar7,*(unsigned int *)(param_1 + 0x84));
    if (iVar3 != 0) {
      piVar8 = piVar2 + 4;
      iVar3 = fn_82CBBD68(piVar8,*(unsigned int *)(param_1 + 0x84));
      if (iVar3 != 0) {
        uVar1 = fn_82C53960(0x1c,0);
        if ((uVar1 & 0xffffffff) != 0) {
                    /* WARNING: Subroutine does not return */
          memset(uVar1,0,0x1c);
        }
        *piVar2 = (int)uVar1;
        if (((uVar1 & 0xffffffff) != 0) && (RtlInitializeCriticalSection(uVar1), *piVar2 != 0)) {
          iVar3 = fn_82C561E8(param_1 + 8,piVar2,0xffffffff82c550b8,0);
          if (iVar3 != 0) {
            iVar3 = 0;
            piVar2[9] = param_1;
            piVar2[8] = param_3;
            if (0 < param_2) {
              while (uVar4 = fn_82C54E88(piVar7,0), -1 < (int)uVar4) {
                uVar5 = fn_82C54E88(piVar8,0);
                if ((int)uVar5 < 0) {
LAB_82c55a08:
                  if (piVar2[3] != 0) {
                    iVar6 = piVar2[3] + -1;
                    piVar2[3] = iVar6;
                    *(unsigned int *)(iVar6 * 4 + *piVar7) = 0;
                  }
                  break;
                }
                iVar6 = fn_82C56398((unsigned __int64)(unsigned int)piVar2[9] + 8,piVar2[8],0xffffffff82196582);
                if (iVar6 == 0) {
                  if (piVar2[6] != 0) {
                    iVar6 = piVar2[6] + -1;
                    piVar2[6] = iVar6;
                    *(unsigned int *)(iVar6 * 4 + *piVar8) = 0;
                  }
                  goto LAB_82c55a08;
                }
                if ((unsigned int)piVar2[3] <= uVar4) {
                  fn_82A29A38();
                }
                if (uVar4 < (unsigned int)piVar2[3]) {
                  *(int *)(uVar4 * 4 + *piVar7) = iVar6;
                }
                if ((unsigned int)piVar2[6] <= uVar5) {
                  fn_82A29A38();
                }
                if (uVar5 < (unsigned int)piVar2[6]) {
                  *(unsigned int *)(uVar5 * 4 + *piVar8) = 0;
                }
                iVar3 = iVar3 + 1;
                if (param_2 <= iVar3) break;
              }
              if (0 < iVar3) {
                piVar2[7] = 0;
                goto LAB_82c55a40;
              }
            }
            piVar2[7] = -1;
LAB_82c55a40:
            if (param_2 <= iVar3) {
              return piVar2;
            }
            fn_82C550F0(piVar2);
            return (int *)0x0;
          }
          if (*piVar2 != 0) {
            fn_82C53970();
            *piVar2 = 0;
          }
        }
        fn_82CBBD70(piVar8);
      }
      fn_82CBBD70(piVar7);
    }
    free(piVar2);
  }
  return (int *)0x0;
}

