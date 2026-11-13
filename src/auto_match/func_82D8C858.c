extern int fn_82CE5410();
extern int fn_82CE6310();


void fn_82D8C858(int param_1,int param_2)

{
  unsigned int uVar1;
  int iVar2;
  unsigned __int64 uVar3;
  __int64 lVar4;
  unsigned __int64 *puVar7;
  __int64 lVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar8;
  unsigned int *puVar9;
  
  puVar9 = (unsigned int *)(param_1 + 0x78);
  iVar2 = fn_82CE5410();
  uVar1 = *(unsigned int *)(param_2 + 0x7c);
  uVar8 = (unsigned __int64)uVar1;
  uVar6 = (unsigned __int64)*(unsigned int *)(param_1 + 0x7c);
  if ((int)uVar1 <= (int)*(unsigned int *)(param_1 + 0x7c)) {
    uVar6 = uVar8;
  }
  if ((int)(*(unsigned int *)(param_1 + 0x80) & 0x3fffffff) < (int)uVar1) {
    uVar3 = ((unsigned __int64)*(unsigned int *)(param_1 + 0x80) & 0x3fffffff) << 1;
    if ((int)uVar3 <= (int)uVar1) {
      uVar3 = uVar8;
    }
    fn_82CE6310(*(unsigned int *)(iVar2 + 0x10),puVar9,uVar3,0x10);
  }
  puVar7 = (unsigned __int64 *)*puVar9;
  if (0 < (int)uVar6) {
    iVar2 = *(int *)(param_2 + 0x78) - (int)puVar7;
    uVar3 = uVar6;
    do {
      uVar3 = uVar3 - 1;
      *puVar7 = *(unsigned __int64 *)(iVar2 + (int)puVar7);
      puVar7[1] = *(unsigned __int64 *)((int)puVar7 + iVar2 + 8);
      puVar7 = puVar7 + 2;
    } while (uVar3 != 0);
  }
  lVar5 = (uVar6 & 0xfffffff) * 0x10;
  lVar4 = uVar8 - uVar6;
  uVar6 = (unsigned __int64)*puVar9 + lVar5;
  if (0 < lVar4) {
    iVar2 = (*(int *)(param_2 + 0x78) + (int)lVar5) - (int)uVar6;
    do {
      if ((uVar6 & 0xffffffff) != 0) {
        puVar7 = (unsigned __int64 *)uVar6;
        *puVar7 = *(unsigned __int64 *)(iVar2 + (int)puVar7);
        puVar7[1] = *(unsigned __int64 *)((int)puVar7 + iVar2 + 8);
      }
      lVar4 = lVar4 + -1;
      uVar6 = uVar6 + 0x10;
    } while (lVar4 != 0);
  }
  *(unsigned int *)(param_1 + 0x7c) = uVar1;
  return;
}

