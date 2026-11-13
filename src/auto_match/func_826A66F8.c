extern int fn_82681898();
extern int fn_826972E0();


void fn_826A66F8(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  double dVar1;
  double dVar2;
  
  dVar1 = (double)fn_826972E0(param_3);
  dVar2 = (double)fn_826972E0(param_1,param_2);
  fn_82681898(dVar1 * dVar2,param_1);
  return;
}

