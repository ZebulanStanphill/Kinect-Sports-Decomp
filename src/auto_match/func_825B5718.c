__int64 fn_825B5718(int param_1)

{
  __int64 lVar1;
  unsigned __int64 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  unsigned __int64 uVar6;
  __int64 lVar7;
  __int64 lVar8;
  
  uVar6 = (unsigned __int64)*(unsigned int *)(param_1 + 0x18);
  lVar1 = 0x10;
  if (0 < (int)*(unsigned int *)(param_1 + 0x18)) {
    iVar5 = 0;
    piVar3 = (int *)(*(int *)(param_1 + 0x1c) + 4);
    do {
      uVar2 = 0;
      lVar7 = (__int64)(*(int *)(iVar5 + *(int *)(param_1 + 0x1c)) * *piVar3) * (__int64)piVar3[1]
      ;
      if (0 < lVar7) {
        iVar4 = 0;
        do {
          if (*(int *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar5 + 0x18) + iVar4 + 4) != -1) {
            uVar2 = uVar2 + 1;
          }
          iVar4 = iVar4 + 0x20;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      lVar8 = (uVar2 & 0x3ffffff) * 0x40;
      lVar7 = lVar8 + ((unsigned __int64)(unsigned int)((int)lVar8 >> 4) & 0xfffffff) * -0x10;
      if (lVar7 < 1) {
        if ((int)lVar7 < 0) {
          lVar8 = lVar8 - lVar7;
        }
      }
      else {
        lVar8 = (lVar8 - lVar7) + 0x10;
      }
      uVar6 = uVar6 - 1;
      lVar1 = lVar8 + lVar1;
      iVar5 = iVar5 + 0x1c;
      piVar3 = piVar3 + 7;
    } while (uVar6 != 0);
  }
  return lVar1;
}

