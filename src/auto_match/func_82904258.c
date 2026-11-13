extern unsigned int *auStack_120;
extern int fn_828F5960();
extern int fn_828FA8D8();
extern int fn_82903B88();
extern unsigned int stack0x00000030;
extern unsigned int uStack00000030;
extern unsigned int uStack00000038;
extern unsigned int uStack00000040;
extern unsigned int uStack00000048;
extern unsigned int uStack_21;


unsigned __int64
fn_82904258(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
             unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7,unsigned __int64 param_8)

{
  unsigned __int64 uVar1;
  unsigned __int64 uStack00000030;
  unsigned __int64 uStack00000038;
  unsigned __int64 uStack00000040;
  unsigned __int64 uStack00000048;
  unsigned char auStack_120 [255];
  unsigned char uStack_21;
  
  param_1[0x13] = 1;
  uStack00000030 = param_5;
  uStack00000038 = param_6;
  uStack00000040 = param_7;
  uStack00000048 = param_8;
  fn_828F5960(auStack_120,0x100,param_4,&stack0x00000030);
  uStack_21 = 0;
  uVar1 = fn_82903B88(param_2);
  fn_828FA8D8((unsigned __int64)*param_1 + 0x18,uVar1);
  return 0;
}

