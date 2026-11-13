#define true 1


void fn_82A8BE08(unsigned int *param_1)

{
  int iVar1;
  __int64 lVar2;
  __int64 lVar3;
  __int64 lVar4;
  __int64 lVar5;
  unsigned __int64 uVar6;
  int iVar7;
  __int64 lVar8;
  
  uVar6 = (unsigned __int64)*param_1 - 1;
  if ((__int64)uVar6 < 0) {
    return;
  }
  lVar2 = uVar6 * 0x60;
  do {
    lVar3 = 0xff;
    iVar1 = (int)lVar2;
    *(unsigned int *)(iVar1 + param_1[1] + 4) = 0xff;
    *(unsigned int *)(iVar1 + param_1[1] + 8) = 0xff;
    lVar8 = (unsigned __int64)*param_1 - 1;
    iVar7 = (int)uVar6;
    if (iVar7 < (int)lVar8) {
      lVar4 = lVar8 * 0x60;
      do {
        if ((unsigned __int64)*(unsigned int *)((int)lVar4 + param_1[1]) == (uVar6 & 0xffffffff)) {
          *(int *)(iVar1 + param_1[1] + 4) = (int)lVar8;
          lVar3 = lVar8;
          break;
        }
        lVar8 = lVar8 + -1;
        lVar4 = lVar4 + -0x60;
      } while (iVar7 < (int)lVar8);
    }
    lVar8 = lVar8 + -1;
    if (iVar7 < (int)lVar8) {
      lVar4 = lVar8 - uVar6;
      lVar3 = lVar3 * 0x60;
      lVar5 = lVar8 * 0x60;
      do {
        if ((unsigned __int64)*(unsigned int *)((int)lVar5 + param_1[1]) == (uVar6 & 0xffffffff)) {
          *(int *)((int)lVar3 + param_1[1] + 8) = (int)lVar8;
          lVar3 = lVar5;
        }
        lVar8 = lVar8 + -1;
        lVar5 = lVar5 + -0x60;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
    uVar6 = uVar6 - 1;
    lVar2 = lVar2 + -0x60;
    if ((__int64)uVar6 < 0) {
      return;
    }
  } while( true );
}

