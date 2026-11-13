extern int fn_8265D5A8();
extern int fn_82661C70();
extern int fn_82662D00();
extern unsigned int uStack00000014;
extern unsigned int uStack0000001c;
extern unsigned int uStack00000024;
extern unsigned int uStack0000002c;


unsigned int
fn_826619F0(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
  unsigned __int64 uVar1;
  unsigned int uStack00000014;
  unsigned int uStack0000001c;
  unsigned int uStack00000024;
  unsigned int uStack0000002c;
  
  uStack00000014 = param_1;
  uStack0000001c = param_2;
  uStack00000024 = param_3;
  uStack0000002c = param_4;
  uVar1 = fn_8265D5A8(param_4);
  uVar1 = fn_82662D00(uStack0000001c,uVar1);
  fn_82661C70(uStack00000014,uStack0000001c,uStack00000024,uVar1);
  return uStack00000014;
}

