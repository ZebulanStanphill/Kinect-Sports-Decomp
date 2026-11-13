extern int fn_82F68CC0();


unsigned __int64
fn_829186E0(int *param_1,unsigned __int64 param_2,int param_3,float *param_4,unsigned __int64 param_5)

{
  int iVar1;
  __int64 lVar2;
  
  lVar2 = (param_5 & 0x3fffffff) << 2;
  if ((param_5 & 0x3fffffff) != 0) {
    iVar1 = param_3 - (int)param_4;
    do {
      *param_4 = (float)(__int64)*(int *)(iVar1 + (int)param_4);
      param_4 = param_4 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  lVar2 = (**(int (***)())(*param_1 + 0xc))();
  fn_82F68CC0(lVar2 + (param_2 & 0xfffffff) * 0x10,param_3,(param_5 & 0xfffffff) << 4);
  return 0;
}

