extern unsigned int fn_82BE56B0(unsigned);
extern int fn_82BE8D50();
extern unsigned int fn_82BF6AB8();
extern int fn_82BFAED0();


unsigned int fn_82BF6B38(unsigned int param_1,unsigned int param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  
  uVar1 = fn_82BE56B0(0x14);
  if (uVar1 != 0) {
    uVar1 = fn_82BFAED0(uVar1,param_2);
  } else { uVar1 = 0; }
  if (uVar1 == 0) return 0;
  {
    uVar2 = fn_82BF6AB8(param_1,uVar1);
    fn_82BE8D50(uVar1);
  }
  return uVar2;
}

