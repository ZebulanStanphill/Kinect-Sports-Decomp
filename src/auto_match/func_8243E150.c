typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_823575B0();
extern int fn_82F622A8();
extern int fn_82F68B7C();
extern int fn_82F68CC0();


void fn_8243E150(int param_1,int *param_2,char param_3)

{
  unsigned int uVar1;
  int *piVar2;
  bool bVar3;
  unsigned int *puVar4;
  unsigned __int64 uVar5;
  unsigned int uVar6;
  unsigned __int64 uVar7;
  int *piVar8;
  int iVar9;
  
  if (param_3 != '\0') {
    uVar6 = 0;
    uVar1 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x5c;
    if (uVar1 != 0) {
      iVar9 = 0;
      do {
        piVar8 = (int *)(*(int *)(param_1 + 4) + iVar9);
        if (*piVar8 == *param_2) goto LAB_8243e1a4;
        uVar6 = uVar6 + 1;
        iVar9 = iVar9 + 0x5c;
      } while (uVar6 < uVar1);
    }
    piVar8 = (int *)0x0;
LAB_8243e1a4:
    if (piVar8 != (int *)0x0) {
      fn_82F68B7C(piVar8,param_2,0x5c);
      return;
    }
  }
  puVar4 = (unsigned int *)(param_1 + 4);
  piVar8 = *(int **)(param_1 + 8);
  if ((piVar8 <= param_2) || (bVar3 = true, param_2 < (int *)*puVar4)) {
    bVar3 = false;
  }
  piVar2 = *(int **)(param_1 + 0xc);
  if (bVar3) {
    uVar1 = *puVar4;
    if (piVar8 == piVar2) {
      uVar6 = (int)((int)piVar8 - uVar1) / 0x5c;
      if (0x2c8590a < uVar6) {
                    /* WARNING: Subroutine does not return */
        fn_82F622A8(0xffffffff82196fd4);
      }
      uVar7 = (__int64)(int)uVar6 + 1;
      uVar6 = (int)((int)piVar2 - uVar1) / 0x5c;
      if ((unsigned __int64)uVar6 < (uVar7 & 0xffffffff)) {
        uVar5 = 0;
        if ((unsigned __int64)uVar6 <= (0x2c8590b - (unsigned __int64)(uVar6 >> 1) & 0xffffffff)) {
          uVar5 = (unsigned __int64)(uVar6 >> 1) + (__int64)(int)uVar6;
        }
        if ((uVar5 & 0xffffffff) < (uVar7 & 0xffffffff)) {
          uVar5 = uVar7;
        }
        fn_823575B0(puVar4,uVar5);
      }
    }
    iVar9 = *(int *)(param_1 + 8);
    param_2 = (int *)(((int)((int)param_2 - uVar1) / 0x5c) * 0x5c + *puVar4);
  }
  else {
    if (piVar8 == piVar2) {
      uVar1 = (int)((int)piVar8 - *puVar4) / 0x5c;
      if (0x2c8590a < uVar1) {
                    /* WARNING: Subroutine does not return */
        fn_82F622A8(0xffffffff82196fd4);
      }
      uVar7 = (__int64)(int)uVar1 + 1;
      uVar1 = (int)((int)piVar2 - *puVar4) / 0x5c;
      if ((unsigned __int64)uVar1 < (uVar7 & 0xffffffff)) {
        uVar5 = 0;
        if ((unsigned __int64)uVar1 <= (0x2c8590b - (unsigned __int64)(uVar1 >> 1) & 0xffffffff)) {
          uVar5 = (unsigned __int64)(uVar1 >> 1) + (__int64)(int)uVar1;
        }
        if ((uVar5 & 0xffffffff) < (uVar7 & 0xffffffff)) {
          uVar5 = uVar7;
        }
        fn_823575B0(puVar4,uVar5);
      }
    }
    iVar9 = *(int *)(param_1 + 8);
  }
  if (iVar9 != 0) {
    fn_82F68CC0(iVar9,param_2,0x5c);
    return;
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 0x5c;
  return;
}

