extern int fn_82CE5410();
extern int fn_82CE6310();


unsigned __int64 fn_82CFF188(int param_1,unsigned __int64 param_2,unsigned int param_3)

{
  unsigned int *puVar1;
  unsigned __int64 uVar2;
  int iVar4;
  unsigned __int64 uVar3;
  unsigned __int64 uVar5;
  __int64 lVar6;
  int iVar7;
  __int64 lVar8;
  unsigned int uVar9;
  
  uVar5 = param_2;
  if (param_3 != 0) {
    if (param_3 == 1) {
      uVar5 = *(unsigned int *)(param_1 + 0xc) + param_2;
    }
    else {
      uVar5 = (unsigned __int64)*(unsigned int *)(param_1 + 0xc);
      if (param_3 < 3) {
        uVar5 = *(unsigned int *)(*(int *)(param_1 + 8) + 4) - param_2;
      }
    }
  }
  iVar7 = (int)uVar5;
  if (iVar7 < 0) {
    uVar3 = 1;
  }
  else {
    puVar1 = *(unsigned int **)(param_1 + 8);
    if ((int)puVar1[1] < iVar7) {
      lVar8 = uVar5 + 1;
      iVar4 = fn_82CE5410();
      uVar9 = (unsigned int)lVar8;
      if ((int)(puVar1[2] & 0x3fffffff) < (int)uVar9) {
        lVar6 = ((unsigned __int64)puVar1[2] & 0x3fffffff) << 1;
        if ((int)lVar6 <= (int)uVar9) {
          lVar6 = lVar8;
        }
        fn_82CE6310(*(unsigned int *)(iVar4 + 0x10),puVar1,lVar6,1);
      }
      uVar5 = lVar8 - (unsigned __int64)puVar1[1];
      if (0 < (__int64)uVar5) {
        lVar8 = (unsigned __int64)puVar1[1] + (unsigned __int64)*puVar1 + -1;
        uVar2 = uVar5 & 0xffffffff;
        while (uVar2 != 0) {
          lVar8 = lVar8 + 1;
          *(unsigned char *)lVar8 = 0;
          uVar5 = uVar5 - 1;
          uVar2 = uVar5;
        }
      }
      puVar1[1] = uVar9;
      *(int *)(*(int *)(param_1 + 8) + 4) = iVar7;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    uVar3 = 0;
  }
  return uVar3;
}

