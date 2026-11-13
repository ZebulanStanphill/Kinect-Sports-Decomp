extern int fn_82A6CF00();
extern int fn_82BA02A8();


unsigned __int64 fn_82A75588(int param_1,unsigned __int64 param_2)

{
  unsigned char bVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned __int64 uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned __int64 uVar9;
  unsigned int uVar10;
  unsigned char *pbVar11;
  unsigned __int64 uVar12;
  
  uVar12 = (unsigned __int64)*(unsigned int *)(param_1 + 0x20);
  uVar2 = 0;
  uVar5 = *(unsigned int *)(param_1 + 0x30);
  uVar10 = *(unsigned int *)(param_1 + 0x28);
  uVar9 = (unsigned __int64)uVar10;
  uVar7 = *(unsigned int *)(param_1 + 0x24);
  uVar6 = (unsigned __int64)uVar7;
  pbVar11 = *(unsigned char **)(param_1 + 0x1c);
  if ((((unsigned __int64)*(unsigned int *)(param_1 + 0x20) & 0x1fffffff) * 8 + (unsigned __int64)uVar5 + uVar9 &
      0xffffffff) < (param_2 & 0xffffffff)) {
    uVar3 = uVar9;
    if (*(int (***)())(param_1 + 0x54) == fn_82BA02A8) {
      while (uVar3 < 0x19) {
        uVar10 = (unsigned int)uVar9;
        uVar7 = (unsigned int)uVar6;
        if ((uVar12 & 0xffffffff) == 0) break;
        uVar9 = uVar9 + 8;
        uVar10 = (unsigned int)uVar9;
        uVar6 = (uVar6 & 0xffffff) << 8 | (unsigned __int64)*pbVar11;
        uVar7 = (unsigned int)uVar6;
        pbVar11 = pbVar11 + 1;
        uVar12 = uVar12 - 1;
        uVar3 = uVar9 & 0xffffffff;
      }
      uVar8 = 0;
      if ((uVar12 & 0xffffffff) != 0) {
        uVar5 = (int)((uVar12 & 0xffffffff) << 3) + uVar5;
        uVar9 = uVar12;
        uVar8 = 0;
        do {
          bVar1 = *pbVar11;
          pbVar11 = pbVar11 + 1;
          uVar8 = uVar8 << 8 | (unsigned int)bVar1;
          uVar12 = uVar12 - 1;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
    }
    else {
      while (uVar3 < 0x19) {
        uVar10 = (unsigned int)uVar9;
        uVar7 = (unsigned int)uVar6;
        if ((uVar12 & 0xffffffff) == 0) break;
        uVar3 = (**(int (***)())(param_1 + 0x54))(*pbVar11);
        uVar9 = uVar9 + 8;
        uVar10 = (unsigned int)uVar9;
        uVar6 = (uVar6 & 0xffffff) << 8 | uVar3 & 0xffffffff000000ff;
        uVar7 = (unsigned int)uVar6;
        pbVar11 = pbVar11 + 1;
        uVar12 = uVar12 - 1;
        uVar3 = uVar9 & 0xffffffff;
      }
      uVar8 = 0;
      if ((uVar12 & 0xffffffff) != 0) {
        uVar5 = (int)((uVar12 & 0xffffffff) << 3) + uVar5;
        uVar9 = uVar12;
        uVar8 = 0;
        do {
          uVar4 = (**(int (***)())(param_1 + 0x54))(*pbVar11);
          uVar8 = uVar8 << 8 | uVar4 & 0xff;
          uVar9 = uVar9 - 1;
          pbVar11 = pbVar11 + 1;
          uVar12 = 0;
        } while (uVar9 != 0);
      }
    }
    *(unsigned int *)(param_1 + 0x24) = uVar7;
    *(unsigned int *)(param_1 + 0x28) = uVar10;
    *(int *)(param_1 + 0x20) = (int)uVar12;
    *(unsigned char **)(param_1 + 0x1c) = pbVar11;
    *(unsigned int *)(param_1 + 0x30) = uVar5;
    *(unsigned int *)(param_1 + 0x2c) = uVar8;
    uVar2 = fn_82A6CF00(param_1,0,param_2);
  }
  return uVar2;
}

