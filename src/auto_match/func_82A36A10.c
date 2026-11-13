extern int fn_82A36838();
extern int fn_82A369B0();
extern int fn_82A394B0();
extern unsigned int stack0x0000002c;
extern unsigned int uStack0000002c;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


void fn_82A36A10(unsigned __int64 param_1,unsigned __int64 param_2,int param_3,unsigned int param_4)

{
  unsigned int uStack0000002c;
  unsigned int uStack_30;
  unsigned int uStack_2c;
  unsigned int uStack_28;
  
  uStack0000002c = param_4;
  fn_82A369B0(&uStack_30,param_1);
  fn_82A394B0(param_3,&stack0x0000002c,uStack_2c,uStack_28,0x10,param_2);
  *(unsigned int *)(param_3 + 0xc) = uStack_30;
  if ((param_2 & 1) != 0) {
    fn_82A36838(param_3);
  }
  return;
}

