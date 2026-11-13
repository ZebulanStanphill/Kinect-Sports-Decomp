extern int fn_82693A98();
extern int fn_826949A8();


int * fn_82710AD8(int *param_1,unsigned int *param_2,unsigned __int64 param_3,__int64 param_4)

{
  __int64 lVar1;
  int iVar2;
  
  iVar2 = (int)param_4;
  if (iVar2 != 0) {
    param_3 = ((param_3 & 0xffffffff) >> 0x1f) - 1 & param_3;
    lVar1 = fn_82693A98(param_2);
    if ((int)param_3 < (int)lVar1) {
      if ((iVar2 < 0) || ((int)lVar1 < (int)param_3 + iVar2)) {
        param_4 = lVar1 - param_3;
      }
      fn_826949A8(param_1,param_2,param_3,param_3 + param_4);
      return param_1;
    }
  }
  iVar2 = *(int *)(*(int *)(*param_2 & 0xfffffc00) + 0x18);
  *param_1 = iVar2;
  *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
  return param_1;
}

