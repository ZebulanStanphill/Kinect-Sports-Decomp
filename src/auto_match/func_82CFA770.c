__int64 fn_82CFA770(int *param_1,__int64 param_2)

{
  int iVar1;
  unsigned int uVar2;
  __int64 lVar3;
  __int64 lVar4;
  
  uVar2 = param_1[4];
  lVar3 = (unsigned __int64)(unsigned int)param_1[5] - (unsigned __int64)uVar2;
  lVar4 = param_2;
  if ((int)lVar3 < (int)param_2) {
    do {
      lVar4 = lVar4 - lVar3;
      iVar1 = (**(int (***)())(*param_1 + 0x30))(param_1);
      if (iVar1 != 0) {
        return param_2 - lVar4;
      }
      uVar2 = param_1[4];
      lVar3 = (unsigned __int64)(unsigned int)param_1[5] - (unsigned __int64)uVar2;
    } while ((int)lVar3 < (int)lVar4);
  }
  param_1[4] = uVar2 + (int)lVar4;
  return param_2;
}

