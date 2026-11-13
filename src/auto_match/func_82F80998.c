extern int __BuildCatchObjectHelper();


void __BuildCatchObject(int param_1,__int64 param_2,unsigned int *param_3,int param_4,unsigned __int64 param_5,
                  unsigned __int64 param_6)

{
  int iVar1;
  __int64 lVar2;
  
  lVar2 = param_2;
  if ((*param_3 & 0x80000000) == 0) {
    lVar2 = (unsigned __int64)param_3[2] + param_2;
  }
  iVar1 = __BuildCatchObjectHelper(param_1,param_2,param_3,param_4,param_5,param_6);
  if (iVar1 == 1) {
    (**(int (***)())(param_4 + 0x18))(lVar2);
  }
  else if (iVar1 == 2) {
    iVar1 = *(int *)(param_4 + 8) + *(int *)(param_1 + 0x18);
    if (-1 < *(int *)(param_4 + 0xc)) {
      iVar1 = *(int *)(param_4 + 0xc) +
              *(int *)(*(int *)(*(int *)(param_4 + 0xc) + *(int *)(param_1 + 0x18)) +
                      *(int *)(param_4 + 0x10)) + iVar1;
    }
    (**(int (***)())(param_4 + 0x18))(lVar2,iVar1,1);
  }
  return;
}

