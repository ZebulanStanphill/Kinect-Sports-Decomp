extern int fn_826E8488();
extern int fn_826E8610();
extern int fn_82756288();


void fn_82756FD0(int *param_1,unsigned __int64 param_2,__int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5)

{
  int iVar1;
  unsigned int uVar2;
  int iVar3;
  int iVar4;
  
  fn_82756288(param_1,param_3);
  if (0 < (int)param_3) {
    iVar4 = 0;
    do {
      iVar1 = *param_1;
      uVar2 = fn_826E8488(param_2,param_4);
      *(unsigned int *)(iVar4 + iVar1) = uVar2;
      iVar1 = iVar4 + *param_1;
      iVar3 = fn_826E8610(param_2,param_5);
      param_3 = param_3 + -1;
      iVar4 = iVar4 + 8;
      *(float *)(iVar1 + 4) = (float)(__int64)iVar3;
    } while (param_3 != 0);
  }
  return;
}

