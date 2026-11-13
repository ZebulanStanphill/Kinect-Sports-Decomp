extern unsigned int *auStack_10;
extern int fn_826667A0();
extern int fn_82F93778();
extern unsigned int uStack00000014;
extern unsigned int uStack0000001c;
extern unsigned int uStack00000024;
extern unsigned int uStack0000002c;


unsigned int
fn_82666090(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
  unsigned __int64 uVar1;
  unsigned int uStack00000014;
  unsigned int uStack0000001c;
  unsigned int uStack00000024;
  unsigned int uStack0000002c;
  unsigned char auStack_10 [16];
  
  uStack00000014 = param_1;
  uStack0000001c = param_2;
  uStack00000024 = param_3;
  uStack0000002c = param_4;
  uVar1 = fn_82F93778(auStack_10,param_2);
  fn_826667A0(uStack00000014,uStack0000001c,uStack00000024,uStack0000002c,uVar1);
  return uStack00000014;
}

