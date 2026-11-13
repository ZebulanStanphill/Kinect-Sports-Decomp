extern int fn_82CE4040();
extern int fn_82CE5410();
extern int fn_82CE6310();


void fn_82D48BF8(int param_1,int *param_2,__int64 param_3)

{
  int iVar1;
  __int64 lVar2;
  int iVar3;
  
  iVar1 = fn_82CE5410();
  iVar3 = (int)param_3;
  if ((int)(*(unsigned int *)(param_1 + 0x4c) & 0x3fffffff) < iVar3) {
    lVar2 = ((unsigned __int64)*(unsigned int *)(param_1 + 0x4c) & 0x3fffffff) << 1;
    if ((int)lVar2 <= iVar3) {
      lVar2 = param_3;
    }
    fn_82CE6310(*(unsigned int *)(iVar1 + 0x10),(int *)(param_1 + 0x44),lVar2,4);
  }
  *(int *)(param_1 + 0x48) = iVar3;
  *(unsigned int *)(param_1 + 0x10) = *(unsigned int *)(*param_2 + 0x10);
  if (0 < iVar3) {
    iVar1 = 0;
    do {
      *(unsigned int *)(iVar1 + *(int *)(param_1 + 0x44)) = *(unsigned int *)(iVar1 + (int)param_2);
      fn_82CE4040(*(unsigned int *)(iVar1 + (int)param_2));
      param_3 = param_3 + -1;
      iVar1 = iVar1 + 4;
    } while (param_3 != 0);
  }
  return;
}

