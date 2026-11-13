extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82E0F0E0();


void fn_82E160E0(int param_1,int *param_2)

{
  int *piVar1;
  unsigned int uVar2;
  __int64 lVar3;
  int iVar4;
  __int64 lVar5;
  int iVar6;
  int iVar7;
  __int64 lVar8;
  
  if (*(int *)(param_1 + 0x14) == 0) {
    fn_82E0F0E0(*(unsigned int *)(param_1 + 0xc),*(unsigned int *)(param_1 + 0x10));
    *(unsigned int *)(param_1 + 0x14) = 1;
  }
  piVar1 = *(int **)(param_1 + 0xc);
  lVar8 = 0;
  iVar4 = *piVar1;
  while (iVar4 != 0) {
    piVar1 = piVar1 + 1;
    lVar8 = lVar8 + 1;
    iVar4 = *piVar1;
  }
  iVar4 = fn_82CE5410();
  uVar2 = param_2[1];
  lVar5 = (unsigned __int64)uVar2 + lVar8;
  iVar6 = (int)lVar5;
  if ((int)(param_2[2] & 0x3fffffffU) < iVar6) {
    lVar3 = ((unsigned __int64)(unsigned int)param_2[2] & 0x3fffffff) << 1;
    if (iVar6 < (int)lVar3) {
      lVar5 = lVar3;
    }
    fn_82CE6310(*(unsigned int *)(iVar4 + 0x10),param_2,lVar5,4);
  }
  iVar4 = *param_2;
  iVar6 = 0;
  param_2[1] = param_2[1] + (int)lVar8;
  if (**(int **)(param_1 + 0xc) != 0) {
    iVar7 = 0;
    do {
      iVar6 = iVar6 + 1;
      *(unsigned int *)(iVar7 + uVar2 * 4 + iVar4) = *(unsigned int *)(*(int *)(param_1 + 0xc) + iVar7);
      iVar7 = iVar6 * 4;
    } while (*(int *)(*(int *)(param_1 + 0xc) + iVar7) != 0);
  }
  return;
}

