__int64 fn_828EDA80(int *param_1,unsigned __int64 param_2)

{
  __int64 lVar1;
  __int64 lVar2;
  
  lVar1 = (**(int (***)())(*param_1 + 0x40))();
  lVar2 = (**(int (***)())(*param_1 + 0x3c))(param_1,param_2);
  return lVar1 + lVar2;
}

