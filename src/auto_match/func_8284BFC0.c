extern int fn_8284AD60();
extern int fn_82DA1B98();
extern unsigned int uStack00000014;
extern unsigned int uStack0000001c;
extern unsigned int uStack00000024;


void fn_8284BFC0(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
  int iVar1;
  unsigned int uStack00000014;
  unsigned int uStack0000001c;
  unsigned int uStack00000024;
  
  uStack00000014 = param_1;
  uStack0000001c = param_2;
  uStack00000024 = param_3;
  iVar1 = fn_82DA1B98(0x20,param_2);
  if (iVar1 != 0) {
    fn_8284AD60(iVar1,uStack00000024);
  }
  return;
}

