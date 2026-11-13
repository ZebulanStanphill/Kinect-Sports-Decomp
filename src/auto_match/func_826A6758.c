extern int fn_82697610();
extern int fn_8269A1F0();


void fn_826A6758(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  
  uVar1 = fn_82697610(param_3);
  uVar2 = fn_82697610(param_1,param_2);
  fn_8269A1F0(param_1,uVar1 & uVar2);
  return;
}

