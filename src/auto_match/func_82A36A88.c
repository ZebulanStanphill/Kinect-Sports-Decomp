extern unsigned int *auStack_28;
extern unsigned int *auStack_30;
extern int fn_82A369B0();
extern int fn_82A394B0();
extern unsigned int uStack_20;
extern unsigned int uStack_24;


unsigned int fn_82A36A88(unsigned __int64 param_1,unsigned __int64 param_2)

{
  unsigned int auStack_30;
  unsigned char auStack_28 [4];
  unsigned int uStack_24;
  unsigned int uStack_20;
  
  auStack_30 = 0;
  fn_82A369B0(auStack_28,param_1);
  fn_82A394B0(0,&auStack_30,uStack_24,uStack_20,0x10,param_2);
  return auStack_30;
}

