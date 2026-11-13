extern int fn_82DA1B98();
extern int fn_82F93338();
extern int fn_82F935C0();
extern unsigned int uStack00000014;
extern unsigned int uStack0000001c;
extern unsigned int uStack00000024;
extern unsigned int uStack0000002c;
extern unsigned int uStack00000034;
extern unsigned int uStack0000003f;


unsigned int
fn_82F92670(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
             unsigned int param_5,unsigned char param_6)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int uStack00000014;
  unsigned int uStack0000001c;
  unsigned int uStack00000024;
  unsigned int uStack0000002c;
  unsigned int uStack00000034;
  unsigned char uStack0000003f;
  
  uStack00000014 = param_1;
  uStack0000001c = param_2;
  uStack00000024 = param_3;
  uStack0000002c = param_4;
  uStack00000034 = param_5;
  uStack0000003f = param_6;
  uVar1 = fn_82F93338((unsigned __int64)param_1 + 1,1,0);
  iVar2 = fn_82DA1B98(0x14,uVar1);
  if (iVar2 != 0) {
    fn_82F935C0(iVar2,uStack0000001c,uStack00000024,uStack0000002c,uStack00000034,uStack0000003f);
  }
  return uVar1;
}

