extern int fn_82CE4040();
extern int fn_82CE5410();
extern int fn_82DB9F80();
extern unsigned int stack0x0000001c;
extern unsigned int uStack0000001c;


void fn_82DF6B40(__int64 param_1,unsigned __int64 param_2)

{
  int iVar1;
  unsigned int uStack0000001c;
  
  uStack0000001c = (unsigned int)param_2;
  iVar1 = fn_82CE5410();
  fn_82DB9F80(param_1 + 0x38,*(unsigned int *)(iVar1 + 0x10),0,0,&stack0x0000001c,1);
  fn_82CE4040(param_2);
  return;
}

