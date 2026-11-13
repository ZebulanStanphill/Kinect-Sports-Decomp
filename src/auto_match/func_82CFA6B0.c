extern int fn_82CFC050();


__int64 fn_82CFA6B0(int *param_1,__int64 param_2,__int64 param_3)

{
  int iVar1;
  unsigned __int64 uVar2;
  __int64 lVar3;
  __int64 lVar4;
  
  uVar2 = (unsigned __int64)(unsigned int)param_1[4];
  lVar4 = (unsigned int)param_1[5] - uVar2;
  lVar3 = param_3;
  if ((int)lVar4 < (int)param_3) {
    do {
      fn_82CFC050(param_2,uVar2 + (unsigned int)param_1[3],lVar4);
      param_2 = param_2 + lVar4;
      param_1[4] = param_1[4] + (int)lVar4;
      lVar3 = lVar3 - lVar4;
      iVar1 = (**(int (***)())(*param_1 + 0x30))(param_1);
      if (iVar1 != 0) {
        return param_3 - lVar3;
      }
      uVar2 = (unsigned __int64)(unsigned int)param_1[4];
      lVar4 = (unsigned int)param_1[5] - uVar2;
    } while ((int)lVar4 < (int)lVar3);
  }
  fn_82CFC050(param_2,(unsigned int)param_1[3] + uVar2,lVar3);
  param_1[4] = param_1[4] + (int)lVar3;
  return param_3;
}

