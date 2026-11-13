extern int fn_826E96C8();


__int64 fn_826E9B98(int *param_1)

{
  __int64 lVar1;
  __int64 lVar2;
  int iVar3;
  
  lVar1 = (**(int (***)())(*param_1 + 0x14))();
  lVar2 = (**(int (***)())(*param_1 + 0x1c))(param_1);
  if ((lVar1 == -1) || (lVar2 == -1)) {
    iVar3 = fn_826E96C8();
    param_1[6] = iVar3;
    lVar1 = 0;
  }
  else {
    param_1[6] = 0;
    lVar1 = (__int64)(int)lVar2 - (__int64)(int)lVar1;
  }
  return lVar1;
}

