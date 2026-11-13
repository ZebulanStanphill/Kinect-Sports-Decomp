extern int fn_82F69148();
extern int fn_8301CFE8();


void fn_8301D3E8(int param_1,int param_2,unsigned __int64 param_3)

{
  int iVar1;
  
  iVar1 = (param_2 + 3) * 4;
  fn_8301CFE8(*(unsigned int *)(iVar1 + param_1),param_3);
  if (param_2 == 0) {
    fn_82F69148(iVar1 + param_1,param_1 + 0x10,1);
    *(unsigned int *)(param_1 + 0x10) = 0;
  }
  else {
    *(unsigned int *)(param_1 + 0x10) = 0;
  }
  return;
}

