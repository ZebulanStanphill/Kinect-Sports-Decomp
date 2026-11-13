extern unsigned int *auStack_20;
extern int fn_82835968();
extern int fn_82F64020();


void fn_82835EE8(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned int auStack_20 [4];
  
  fn_82835968(param_1,param_2,auStack_20);
  fn_82F64020(param_3,0x100,"0x%x",auStack_20[0]);
  return;
}

