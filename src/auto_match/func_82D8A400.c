extern int fn_82CE5410();
extern int fn_82CE6310();


void fn_82D8A400(int param_1,int *param_2)

{
  unsigned int *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  __int64 lVar5;
  __int64 lVar6;
  int iVar7;
  
  lVar6 = (unsigned __int64)*(unsigned short *)(param_1 + 0xb0) + (unsigned __int64)*(unsigned int *)(param_1 + 0xb8);
  iVar2 = fn_82CE5410();
  iVar7 = (int)lVar6;
  if ((int)(param_2[2] & 0x3fffffffU) < iVar7) {
    lVar5 = ((unsigned __int64)(unsigned int)param_2[2] & 0x3fffffff) << 1;
    if ((int)lVar5 <= iVar7) {
      lVar5 = lVar6;
    }
    fn_82CE6310(*(unsigned int *)(iVar2 + 0x10),param_2,lVar5,4);
  }
  param_2[1] = iVar7;
  iVar2 = 0;
  iVar7 = 0;
  if (*(short *)(param_1 + 0xb0) != 0) {
    iVar3 = 0;
    iVar4 = 0;
    do {
      iVar7 = iVar7 + 1;
      iVar2 = iVar2 + 1;
      puVar1 = (unsigned int *)(iVar4 + *(int *)(param_1 + 0xac));
      iVar4 = iVar4 + 0x30;
      *(unsigned int *)(iVar3 + *param_2) = *puVar1;
      iVar3 = iVar3 + 4;
    } while (iVar7 < (int)(unsigned int)*(unsigned short *)(param_1 + 0xb0));
  }
  iVar7 = 0;
  if (0 < *(int *)(param_1 + 0xb8)) {
    iVar2 = iVar2 << 2;
    iVar3 = 0;
    do {
      iVar7 = iVar7 + 1;
      puVar1 = (unsigned int *)(iVar3 + *(int *)(param_1 + 0xb4));
      iVar3 = iVar3 + 4;
      *(unsigned int *)(iVar2 + *param_2) = *puVar1;
      iVar2 = iVar2 + 4;
    } while (iVar7 < *(int *)(param_1 + 0xb8));
  }
  return;
}

