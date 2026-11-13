extern void fn_828278F8();
extern int fn_82822510();
extern int fn_82827390();
extern unsigned int uStack_30;


void fn_82827470(__int64 param_1,unsigned int param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned int uStack_30;
  int aiStack_2c;
  
  uStack_30 = param_2;
  fn_82822510(param_1 + 0x2fc,fn_828278F8,&uStack_30,&aiStack_2c);
  fn_82827390(param_1,*(unsigned int *)(aiStack_2c + 0x10),param_3,param_4);
  return;
}

