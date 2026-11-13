extern int fn_82CE5410();
extern int fn_82CE6310();


void fn_82E06EB0(int param_1,int param_2)

{
  unsigned __int64 uVar1;
  int iVar2;
  unsigned __int64 uVar3;
  __int64 lVar4;
  __int64 lVar5;
  int iVar6;
  unsigned int uVar7;
  
  *(int *)(param_1 + 0x3c) = param_2;
  lVar5 = (__int64)*(int *)(param_1 + 0x50) * (__int64)param_2;
  iVar2 = fn_82CE5410();
  iVar6 = (int)lVar5;
  if ((int)(*(unsigned int *)(param_1 + 0x38) & 0x3fffffff) < iVar6) {
    lVar4 = ((unsigned __int64)*(unsigned int *)(param_1 + 0x38) & 0x3fffffff) << 1;
    if ((int)lVar4 <= iVar6) {
      lVar4 = lVar5;
    }
    fn_82CE6310(*(unsigned int *)(iVar2 + 0x10),param_1 + 0x30,lVar4,1);
  }
  *(int *)(param_1 + 0x34) = iVar6;
  uVar1 = ((__int64)*(int *)(param_1 + 0x4c) * (__int64)param_2 & 0xffffffffU) >> 1;
  iVar2 = fn_82CE5410();
  uVar7 = (unsigned int)uVar1;
  if ((*(unsigned int *)(param_1 + 0x2c) & 0x3fffffff) < uVar7) {
    uVar3 = ((unsigned __int64)*(unsigned int *)(param_1 + 0x2c) & 0x3fffffff) << 1;
    if ((unsigned int)uVar3 <= uVar7) {
      uVar3 = uVar1;
    }
    fn_82CE6310(*(unsigned int *)(iVar2 + 0x10),param_1 + 0x24,uVar3,2);
  }
  *(unsigned int *)(param_1 + 0x28) = uVar7;
  uVar1 = ((__int64)*(int *)(param_1 + 0x48) * (__int64)param_2 & 0xffffffffU) >> 2;
  iVar2 = fn_82CE5410();
  uVar7 = (unsigned int)uVar1;
  if ((*(unsigned int *)(param_1 + 0x20) & 0x3fffffff) < uVar7) {
    uVar3 = ((unsigned __int64)*(unsigned int *)(param_1 + 0x20) & 0x3fffffff) << 1;
    if ((unsigned int)uVar3 <= uVar7) {
      uVar3 = uVar1;
    }
    fn_82CE6310(*(unsigned int *)(iVar2 + 0x10),param_1 + 0x18,uVar3,4);
  }
  *(unsigned int *)(param_1 + 0x1c) = uVar7;
  uVar1 = ((__int64)*(int *)(param_1 + 0x44) * (__int64)param_2 & 0xffffffffU) >> 2;
  iVar2 = fn_82CE5410();
  uVar7 = (unsigned int)uVar1;
  if ((*(unsigned int *)(param_1 + 0x14) & 0x3fffffff) < uVar7) {
    uVar3 = ((unsigned __int64)*(unsigned int *)(param_1 + 0x14) & 0x3fffffff) << 1;
    if ((unsigned int)uVar3 <= uVar7) {
      uVar3 = uVar1;
    }
    fn_82CE6310(*(unsigned int *)(iVar2 + 0x10),param_1 + 0xc,uVar3,4);
  }
  *(unsigned int *)(param_1 + 0x10) = uVar7;
  uVar1 = ((__int64)*(int *)(param_1 + 0x40) * (__int64)param_2 & 0xffffffffU) >> 4;
  iVar2 = fn_82CE5410();
  uVar7 = (unsigned int)uVar1;
  if ((*(unsigned int *)(param_1 + 8) & 0x3fffffff) < uVar7) {
    uVar3 = ((unsigned __int64)*(unsigned int *)(param_1 + 8) & 0x3fffffff) << 1;
    if ((unsigned int)uVar3 <= uVar7) {
      uVar3 = uVar1;
    }
    fn_82CE6310(*(unsigned int *)(iVar2 + 0x10),param_1,uVar3,0x10);
  }
  *(unsigned int *)(param_1 + 4) = uVar7;
  return;
}

