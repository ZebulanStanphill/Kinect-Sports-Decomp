extern int fn_82CE5410();
extern int fn_82CE6310();


void fn_82E16698(int param_1,unsigned int *param_2,unsigned int *param_3)

{
  unsigned int uVar1;
  int iVar2;
  unsigned __int64 uVar3;
  __int64 lVar4;
  unsigned int *puVar7;
  __int64 lVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar8;
  
  iVar2 = fn_82CE5410();
  uVar1 = *(unsigned int *)(param_1 + 0x5c);
  uVar8 = (unsigned __int64)uVar1;
  uVar6 = (unsigned __int64)param_2[1];
  if ((int)uVar1 <= (int)param_2[1]) {
    uVar6 = uVar8;
  }
  if ((int)(param_2[2] & 0x3fffffff) < (int)uVar1) {
    uVar3 = ((unsigned __int64)param_2[2] & 0x3fffffff) << 1;
    if ((int)uVar3 <= (int)uVar1) {
      uVar3 = uVar8;
    }
    fn_82CE6310(*(unsigned int *)(iVar2 + 0x10),param_2,uVar3,8);
  }
  puVar7 = (unsigned int *)*param_2;
  if (0 < (int)uVar6) {
    iVar2 = *(int *)(param_1 + 0x58) - (int)puVar7;
    uVar3 = uVar6;
    do {
      uVar3 = uVar3 - 1;
      *puVar7 = *(unsigned int *)(iVar2 + (int)puVar7);
      puVar7[1] = *(unsigned int *)((int)puVar7 + iVar2 + 4);
      puVar7 = puVar7 + 2;
    } while (uVar3 != 0);
  }
  lVar5 = (uVar6 & 0x1fffffff) * 8;
  lVar4 = uVar8 - uVar6;
  uVar6 = (unsigned __int64)*param_2 + lVar5;
  if (0 < lVar4) {
    iVar2 = (*(int *)(param_1 + 0x58) + (int)lVar5) - (int)uVar6;
    do {
      if ((uVar6 & 0xffffffff) != 0) {
        puVar7 = (unsigned int *)uVar6;
        *puVar7 = *(unsigned int *)(iVar2 + (int)puVar7);
        puVar7[1] = *(unsigned int *)((int)puVar7 + iVar2 + 4);
      }
      lVar4 = lVar4 + -1;
      uVar6 = uVar6 + 8;
    } while (lVar4 != 0);
  }
  param_2[1] = uVar1;
  iVar2 = fn_82CE5410();
  uVar1 = *(unsigned int *)(param_1 + 0x50);
  uVar8 = (unsigned __int64)uVar1;
  uVar6 = (unsigned __int64)param_3[1];
  if ((int)uVar1 <= (int)param_3[1]) {
    uVar6 = uVar8;
  }
  if ((int)(param_3[2] & 0x3fffffff) < (int)uVar1) {
    uVar3 = ((unsigned __int64)param_3[2] & 0x3fffffff) << 1;
    if ((int)uVar3 <= (int)uVar1) {
      uVar3 = uVar8;
    }
    fn_82CE6310(*(unsigned int *)(iVar2 + 0x10),param_3,uVar3,8);
  }
  puVar7 = (unsigned int *)*param_3;
  if (0 < (int)uVar6) {
    iVar2 = *(int *)(param_1 + 0x4c) - (int)puVar7;
    uVar3 = uVar6;
    do {
      uVar3 = uVar3 - 1;
      *puVar7 = *(unsigned int *)(iVar2 + (int)puVar7);
      puVar7[1] = *(unsigned int *)((int)puVar7 + iVar2 + 4);
      puVar7 = puVar7 + 2;
    } while (uVar3 != 0);
  }
  lVar5 = (uVar6 & 0x1fffffff) * 8;
  lVar4 = uVar8 - uVar6;
  uVar6 = lVar5 + (unsigned __int64)*param_3;
  if (0 < lVar4) {
    iVar2 = (*(int *)(param_1 + 0x4c) + (int)lVar5) - (int)uVar6;
    do {
      if ((uVar6 & 0xffffffff) != 0) {
        puVar7 = (unsigned int *)uVar6;
        *puVar7 = *(unsigned int *)(iVar2 + (int)puVar7);
        puVar7[1] = *(unsigned int *)((int)puVar7 + iVar2 + 4);
      }
      lVar4 = lVar4 + -1;
      uVar6 = uVar6 + 8;
    } while (lVar4 != 0);
  }
  param_3[1] = uVar1;
  return;
}

