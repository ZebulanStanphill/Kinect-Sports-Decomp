extern int fn_8265D5A8();
extern int fn_82667B68();
extern int fn_82668380();
extern unsigned int uStack00000014;
extern unsigned int uStack0000001c;
extern unsigned int uStack00000024;


unsigned int fn_82667A18(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
  unsigned __int64 uVar1;
  unsigned int uStack00000014;
  unsigned int uStack0000001c;
  unsigned int uStack00000024;
  
  uStack00000014 = param_1;
  uStack0000001c = param_2;
  uStack00000024 = param_3;
  uVar1 = fn_8265D5A8(param_3);
  uVar1 = fn_82668380(uStack0000001c,uVar1);
  fn_82667B68(uStack00000014,uStack0000001c,uVar1,0);
  return uStack00000014;
}

