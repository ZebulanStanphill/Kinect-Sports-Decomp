typedef unsigned char bool;
extern int fn_82FAE198();
extern int fn_82FAE1F0();
extern int fn_82FAE338();
extern int fn_82FAF750();


unsigned __int64
fn_82FAE490(int param_1,__int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,int *param_5)

{
  bool bVar1;
  unsigned int *puVar3;
  int iVar4;
  unsigned __int64 uVar2;
  __int64 lVar5;
  
  if (((param_4 & 0xff) == 0) || (-1 < (int)param_2)) {
    lVar5 = -(unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0xa0) + 4);
    if ((int)param_2 < (int)lVar5) {
      param_2 = lVar5;
    }
  }
  else {
    param_2 = 0;
  }
  iVar4 = (int)param_2;
  if ((iVar4 <= *(int *)(*(int *)(param_1 + 0xa4) + -4) - *(int *)(*(int *)(param_1 + 0xa0) + 4)) &&
     ((param_3 & 0xffffffff) < 8)) {
    bVar1 = (int)param_3 != 0;
    if (param_3 == 1 && bVar1) {
      iVar4 = fn_82FAF750(param_1);
      uVar2 = fn_82FAE338(param_1,param_2,*(unsigned int *)(iVar4 + 8),*(unsigned int *)(iVar4 + 0xc),
                           param_5);
      return uVar2;
    }
    if (param_3 == 2 && bVar1) {
      iVar4 = fn_82FAF750(param_1);
      uVar2 = fn_82FAE338(param_1,param_2,*(unsigned int *)(iVar4 + 4),0,param_5);
      return uVar2;
    }
    if (param_3 == 3 && bVar1) {
      puVar3 = (unsigned int *)fn_82FAF750(param_1);
      uVar2 = fn_82FAE338(param_1,param_2,*puVar3,0,param_5);
      return uVar2;
    }
    if (param_3 == 4 && bVar1) {
      iVar4 = fn_82FAE198(param_1,param_2,param_4);
      *param_5 = iVar4;
      return 1;
    }
    if (param_3 == 5 && bVar1) {
      uVar2 = fn_82FAE1F0(param_1,param_2,param_5);
      return uVar2;
    }
    if (param_3 != 6 || !bVar1) {
      if (!bVar1) {
        *param_5 = iVar4;
        return 1;
      }
      *param_5 = *(int *)(*(int *)(param_1 + 0xa4) + -4) - *(int *)(*(int *)(param_1 + 0xa0) + 4);
      return 1;
    }
    if ((iVar4 < 1) && ((param_4 & 0xff) == 0)) {
      *param_5 = 0;
      return 1;
    }
  }
  return 2;
}

