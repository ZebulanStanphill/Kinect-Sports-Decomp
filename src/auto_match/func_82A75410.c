extern int fn_82A6CF00();
extern int fn_82BA02A8();


unsigned __int64 fn_82A75410(int param_1,unsigned __int64 param_2,int *param_3)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  int iVar5;
  unsigned __int64 uVar6;
  unsigned int uVar7;
  unsigned char *pbVar8;
  unsigned __int64 uVar9;
  
  uVar9 = (unsigned __int64)*(unsigned int *)(param_1 + 0x28);
  uVar7 = *(unsigned int *)(param_1 + 0x24);
  iVar5 = *(int *)(param_1 + 0x20);
  pbVar8 = *(unsigned char **)(param_1 + 0x1c);
  uVar2 = 0;
  uVar4 = *(unsigned int *)(param_1 + 0x30);
  uVar6 = (unsigned __int64)uVar4;
  uVar3 = *(unsigned int *)(param_1 + 0x2c);
  if (uVar9 < (param_2 & 0xffffffff)) {
    if (uVar6 != 0) {
      uVar1 = 0x20 - uVar9;
      if (uVar6 <= (0x20 - uVar9 & 0xffffffff)) {
        uVar1 = uVar6;
      }
      uVar4 = uVar4 - (unsigned int)uVar1;
      uVar7 = uVar7 << ((unsigned int)uVar1 & 0x3f) | uVar3 >> (uVar4 & 0x3f);
      uVar3 = (1 << (uVar4 & 0x3f)) - 1U & uVar3;
      uVar9 = uVar1 + uVar9;
    }
    uVar6 = (unsigned __int64)uVar7;
    if (*(int (***)())(param_1 + 0x54) == fn_82BA02A8) {
      for (; ((uVar9 & 0xffffffff) < 0x19 && (uVar7 = (unsigned int)uVar6, iVar5 != 0)); iVar5 = iVar5 + -1)
      {
        uVar9 = uVar9 + 8;
        uVar6 = (uVar6 & 0xffffff) << 8 | (unsigned __int64)*pbVar8;
        uVar7 = (unsigned int)uVar6;
        pbVar8 = pbVar8 + 1;
      }
    }
    else {
      for (; ((uVar9 & 0xffffffff) < 0x19 && (uVar7 = (unsigned int)uVar6, iVar5 != 0)); iVar5 = iVar5 + -1)
      {
        uVar1 = (**(int (***)())(param_1 + 0x54))(*pbVar8);
        uVar9 = uVar9 + 8;
        uVar6 = (uVar6 & 0xffffff) << 8 | uVar1 & 0xffffffff000000ff;
        pbVar8 = pbVar8 + 1;
        uVar7 = (unsigned int)uVar6;
      }
    }
    *(unsigned int *)(param_1 + 0x24) = uVar7;
    *(int *)(param_1 + 0x28) = (int)uVar9;
    *(int *)(param_1 + 0x20) = iVar5;
    *(unsigned char **)(param_1 + 0x1c) = pbVar8;
    *(unsigned int *)(param_1 + 0x30) = uVar4;
    *(unsigned int *)(param_1 + 0x2c) = uVar3;
    if ((uVar9 & 0xffffffff) < (param_2 & 0xffffffff)) {
      uVar2 = fn_82A6CF00(param_1,1,param_2);
      if ((int)uVar2 < 0) {
        return uVar2;
      }
      if ((unsigned __int64)*(unsigned int *)(param_1 + 0x28) < (param_2 & 0xffffffff)) {
        param_2 = (unsigned __int64)*(unsigned int *)(param_1 + 0x28);
      }
    }
  }
  *param_3 = (*(unsigned int *)(param_1 + 0x24) >>
             ((int)(short)((short)*(unsigned int *)(param_1 + 0x28) - (short)param_2) & 0x3fU)) <<
             (0x20U - (int)param_2 & 0x3f);
  return uVar2;
}

