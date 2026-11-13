typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82AA66A8();
extern int fn_82AF8780();
extern int fn_82B24700();
extern int fn_82B42098();
extern int fn_82B4A218();
extern int fn_82B4B248();
extern int fn_82B4B2A0();
extern int fn_82B4F178();
extern unsigned int iStack_58;
extern unsigned int uStack_5c;


void fn_82B500F0(int param_1,unsigned int *param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  bool bVar2;
  bool bVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  unsigned __int64 uVar8;
  unsigned int *puStack_60;
  unsigned int uStack_5c;
  int iStack_58;
  
  uVar1 = (unsigned int)param_2[1] >> 0x11;
  iVar7 = uVar1 * 0x28;
  uVar8 = (unsigned __int64)((unsigned int)param_2[1] >> 2) & 0x3fff;
  if ((*(unsigned int *)(*(int *)(param_1 + 0xc) + iVar7 + 4) & 4) == 0) {
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(param_1,0x12c0);
  }
  if ((*(unsigned int *)(param_1 + 0x2c) & 2) != 0) {
    fn_82B24700(&puStack_60,*(unsigned int *)(param_1 + 0x248));
    bVar3 = false;
    if ((puStack_60[1] & 1) == 0) {
      uStack_5c = (*puStack_60 & 0xfffffffe) - 4;
    }
    else {
      uStack_5c = 0;
    }
    if (uStack_5c == 0) {
      iStack_58 = 0;
    }
    else {
      iStack_58 = *(int *)(uStack_5c + 8);
    }
    do {
      piVar4 = (int *)fn_82B4B2A0(&puStack_60);
    } while (*piVar4 != 0);
    if ((*(unsigned int *)(*(int *)(param_1 + 0xc) + iVar7) & 7) != 1) {
      fn_82B24700(&puStack_60,*(unsigned int *)(param_1 + 0x24c));
      uStack_5c = piVar4[1];
      iStack_58 = piVar4[2];
      do {
        do {
          if ((iStack_58 != 0) ||
             (bVar2 = true, uStack_5c != (-(unsigned int)((puStack_60[1] & 1) == 0) & puStack_60[1]))) {
            bVar2 = false;
          }
          if (bVar2) goto LAB_82b50278;
          iVar5 = fn_82B4B248(&puStack_60);
          iVar5 = *(int *)(iVar5 + 4);
          piVar6 = (int *)fn_82AF8780(&puStack_60);
        } while (((*piVar6 != 3) || (iVar5 == 0)) || (*(int *)(iVar5 + 4) != 6));
        if (*(int *)(iVar5 + 0x10) != 1) {
                    /* WARNING: Subroutine does not return */
          fn_82AA66A8(param_1,0x12c0);
        }
      } while ((*(int *)(*(int *)(iVar5 + 0x18) + 0x14) == 0) ||
              (*(unsigned int *)(*(int *)(iVar5 + 0x18) + 0x10) != uVar1));
    }
    bVar3 = true;
LAB_82b50278:
    if ((bVar3) &&
       (iVar5 = fn_82B4A218(piVar4[3],uVar1,param_1), *(int *)((int)(uVar8 << 3) + iVar5) == 0
       )) {
      fn_82B42098(param_1,piVar4[3],uVar1,uVar8,1);
    }
  }
  if ((param_2[1] & 3) == 0) {
    iVar5 = fn_82B4A218(*(unsigned int *)(param_1 + 0x234),uVar1,param_1);
    *(unsigned __int64 *)(iVar5 + (int)(uVar8 << 3)) = param_3;
    iVar7 = *(int *)(param_1 + 0xc) + iVar7;
    *(unsigned int *)(iVar7 + 4) = *(unsigned int *)(iVar7 + 4) | 2;
  }
  else if (((unsigned int)param_2[1] >> 0x10 & 1) == 0) {
    *(unsigned __int64 *)*param_2 = param_3;
  }
  else {
    fn_82B4F178(param_1,(unsigned __int64 *)*param_2,*(unsigned __int64 *)*param_2,0,param_3);
  }
  return;
}

