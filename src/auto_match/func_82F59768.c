extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern int fn_8280D630();
extern int memcpy();
extern unsigned int stack0x00000050;
extern unsigned int uStack00000020;
extern unsigned int uStack00000028;
extern unsigned int uStack00000030;
extern unsigned int uStack00000038;
extern unsigned int uStack00000040;
extern unsigned int uStack00000048;
extern unsigned int uStack00000050;


unsigned __int64
fn_82F59768(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
             unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7,unsigned __int64 param_8)

{
  unsigned __int64 uStack00000020;
  unsigned __int64 uStack00000028;
  unsigned __int64 uStack00000030;
  unsigned __int64 uStack00000038;
  unsigned __int64 uStack00000040;
  unsigned __int64 uStack00000048;
  unsigned __int64 uStack00000050;
  unsigned char auStack_60 [16];
  unsigned char auStack_50 [16];
  
  uStack00000020 = param_2;
  uStack00000028 = param_3;
  uStack00000030 = param_4;
  uStack00000038 = param_5;
  uStack00000040 = param_6;
  uStack00000048 = param_7;
  uStack00000050 = param_8;
  memcpy(auStack_60,&stack0x00000050,0x10);
  fn_8280D630(param_1,auStack_50,param_2,param_3,param_4,param_5,param_6,param_7);
  return param_1;
}

