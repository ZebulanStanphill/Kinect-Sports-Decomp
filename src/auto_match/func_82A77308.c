unsigned __int64 fn_82A77308(unsigned __int64 param_1,int *param_2,unsigned __int64 param_3)

{
  int iVar2;
  unsigned __int64 uVar1;
  int *apiStack_20 [2];
  
  apiStack_20[0] = (int *)0x0;
  iVar2 = (**(int (***)())*param_2)(param_2,0xffffffff82089da0,apiStack_20);
  if (iVar2 < 0) {
    uVar1 = (**(int (***)())(*param_2 + 0x2c))(param_2,param_3);
  }
  else {
    uVar1 = (**(int (***)())(*apiStack_20[0] + 0xc))();
    (**(int (***)())(*apiStack_20[0] + 8))(apiStack_20[0]);
  }
  return uVar1;
}

