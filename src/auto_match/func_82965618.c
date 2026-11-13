typedef unsigned char bool;
#define true 1


unsigned __int64 fn_82965618(int param_1,int *param_2,int *param_3,int param_4,int param_5)

{
  bool bVar1;
  int iVar2;
  __int64 lVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = *param_2;
  if ((iVar7 == -1) && (*param_3 == 0)) {
    *param_3 = param_5;
  }
  else {
    if ((param_4 == -1) && (param_5 == 0)) {
      return 0;
    }
    uVar5 = 0;
    uVar4 = 0;
    if (iVar7 != -1) {
      iVar6 = iVar7;
      do {
        uVar5 = uVar5 + 1;
        iVar6 = *(int *)(*(int *)(iVar6 * 4 + *(int *)(param_1 + 0x14)) + 0x14);
      } while (iVar6 != -1);
    }
    if (param_4 != -1) {
      iVar6 = param_4;
      do {
        uVar4 = uVar4 + 1;
        iVar6 = *(int *)(*(int *)(iVar6 * 4 + *(int *)(param_1 + 0x14)) + 0x14);
      } while (iVar6 != -1);
    }
    iVar6 = *param_3;
    bVar1 = (uVar5 & 0xffffffff) < (uVar4 & 0xffffffff);
    if ((uVar4 & 0xffffffff) < (uVar5 & 0xffffffff)) {
      lVar3 = uVar5 - uVar4;
      do {
        uVar5 = uVar5 - 1;
        iVar7 = *(int *)(iVar7 * 4 + *(int *)(param_1 + 0x14));
        iVar6 = *(int *)(iVar7 + 0x18);
        iVar7 = *(int *)(iVar7 + 0x14);
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
      bVar1 = (uVar5 & 0xffffffff) < (uVar4 & 0xffffffff);
    }
    if (bVar1) {
      lVar3 = uVar4 - uVar5;
      do {
        iVar2 = *(int *)(param_4 * 4 + *(int *)(param_1 + 0x14));
        param_5 = *(int *)(iVar2 + 0x18);
        param_4 = *(int *)(iVar2 + 0x14);
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    while( true ) {
      if ((iVar6 == param_5) && (iVar7 == param_4)) {
        *param_3 = iVar6;
        *param_2 = iVar7;
        return 0;
      }
      if ((iVar7 == -1) || (param_4 == -1)) break;
      iVar7 = *(int *)(iVar7 * 4 + *(int *)(param_1 + 0x14));
      iVar2 = *(int *)(param_4 * 4 + *(int *)(param_1 + 0x14));
      iVar6 = *(int *)(iVar7 + 0x18);
      iVar7 = *(int *)(iVar7 + 0x14);
      param_5 = *(int *)(iVar2 + 0x18);
      param_4 = *(int *)(iVar2 + 0x14);
    }
    param_4 = -1;
    *param_3 = 0;
  }
  *param_2 = param_4;
  return 0;
}

