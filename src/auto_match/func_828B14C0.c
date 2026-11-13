extern int fn_828B1000();
extern int fn_828B1218();


void fn_828B14C0(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  __int64 lVar1;
  
  lVar1 = (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x18) + 0x4c) + 0x98;
  fn_828B1000(lVar1,1,param_2,8);
  fn_828B1000(lVar1,2,param_3,0x10);
  fn_828B1218(lVar1,1,0,0);
  return;
}

