typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82B1A538();
extern unsigned int iStack_28;
extern unsigned int iStack_30;
extern unsigned int iStack_38;
extern unsigned int iStack_40;
extern unsigned int uStack_2c;
extern unsigned int uStack_3c;


/* WARNING: Removing unreachable block (ram,0x82b23f64) */
/* WARNING: Removing unreachable block (ram,0x82b23fa0) */

unsigned __int64 fn_82B23E40(unsigned __int64 param_1,int param_2,int param_3)

{
  unsigned int uVar1;
  int *piVar2;
  int *piVar3;
  bool bVar5;
  unsigned int uVar4;
  unsigned int uVar6;
  unsigned int uVar7;
  int *piVar8;
  struct { int first; unsigned int second; } stack_pair_40;

  int iStack_38;
  int iStack_30;
  unsigned int uStack_2c;
  int iStack_28;
  
  iStack_38 = 0;
  iStack_28 = 0;
  stack_pair_40.second = -(unsigned int)((*(unsigned int *)(param_2 + 4) & 1) == 0) & *(unsigned int *)(param_2 + 4);
  uStack_2c = -(unsigned int)((*(unsigned int *)(param_3 + 4) & 1) == 0) & *(unsigned int *)(param_3 + 4);
  stack_pair_40.first = param_2;
  iStack_30 = param_3;
  piVar8 = (int *)0x0;
  while( true ) {
    if ((stack_pair_40.second == 0) || (bVar5 = false, iStack_38 == *(int *)(stack_pair_40.second + 8))) {
      bVar5 = true;
    }
    if (bVar5) break;
    if ((uStack_2c == 0) || (bVar5 = false, iStack_28 == *(int *)(uStack_2c + 8))) {
      bVar5 = true;
    }
    if (bVar5) break;
    piVar2 = (int *)fn_82B1A538(&stack_pair_40.first);
    piVar3 = (int *)fn_82B1A538(&iStack_30);
    if (*piVar2 != *piVar3) {
      return 0;
    }
    if (piVar2[1] != piVar3[1]) {
      return 0;
    }
    uVar1 = piVar2[2];
    uVar6 = piVar3[2];
    if (uVar1 != uVar6) {
      if (piVar8 != (int *)0x0) {
        return 0;
      }
      uVar7 = 4;
      uVar4 = uVar1;
      if ((uVar1 & 4) != 0) {
        uVar4 = uVar1 - 4;
        uVar7 = 0;
      }
      piVar8 = piVar3;
      if ((uVar4 | uVar7) != uVar6) {
        uVar4 = 4;
        if ((uVar6 & 4) != 0) {
          uVar6 = uVar6 - 4;
          uVar4 = 0;
        }
        piVar8 = piVar2;
        if ((uVar6 | uVar4) != uVar1) {
          return 0;
        }
      }
    }
  }
  if (piVar8 != (int *)0x0) {
    if ((stack_pair_40.second == 0) || (bVar5 = false, iStack_38 == *(int *)(stack_pair_40.second + 8))) {
      bVar5 = true;
    }
    if (bVar5) {
      if ((uStack_2c == 0) || (bVar5 = false, iStack_28 == *(int *)(uStack_2c + 8))) {
        bVar5 = true;
      }
      if (bVar5) {
        return 1;
      }
    }
  }
  return 0;
}

