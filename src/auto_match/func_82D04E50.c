extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82F68B7C();


void fn_82D04E50(int param_1,__int64 param_2)

{
  int *piVar1;
  int iVar2;
  __int64 lVar3;
  __int64 lVar4;
  int iVar5;
  
  if ((int)param_2 < 1) {
    return;
  }
  lVar3 = ((unsigned __int64)*(unsigned int *)(param_1 + 4) - param_2) + -1;
  piVar1 = (int *)fn_82F68B7C();
  iVar2 = fn_82CE5410();
  iVar5 = (int)(lVar3 + 1);
  if ((int)(piVar1[2] & 0x3fffffffU) < iVar5) {
    lVar4 = ((unsigned __int64)(unsigned int)piVar1[2] & 0x3fffffff) << 1;
    if ((int)lVar4 <= iVar5) {
      lVar4 = lVar3 + 1;
    }
    fn_82CE6310(*(unsigned int *)(iVar2 + 0xc),piVar1,lVar4,1);
  }
  piVar1[1] = iVar5;
  *(unsigned char *)(*piVar1 + (int)lVar3) = 0;
  return;
}

