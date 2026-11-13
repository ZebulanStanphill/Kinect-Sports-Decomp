extern int fn_82BE6720();
extern int fn_82BE6760();
extern int fn_82BE67A0();
extern int fn_82BE67E0();
extern int fn_82BF4EE8();


unsigned __int64
fn_82BF52A0(int param_1, unsigned char param_2, unsigned __int64 param_3, unsigned __int64 param_4, unsigned __int64 param_5, unsigned __int64 param_6, unsigned __int64 param_7, unsigned __int64 param_8, unsigned short in_stack_00000056)

{
  int iVar1;

  
  iVar1 = fn_82BF4EE8(param_1,0x2a);
  if (iVar1 != 0) {
    fn_82BE6720(param_1,0xdf,0);
    fn_82BE67A0(param_1,0x29,0);
    fn_82BE6720(param_1,0x36,0);
    fn_82BE6720(param_1,param_2,0);
    fn_82BE6720(param_1,0x26,0);
    fn_82BE67A0(param_1,param_3,0);
    fn_82BE6720(param_1,0x15,0);
    fn_82BE67A0(param_1,param_4,0);
    fn_82BE6720(param_1,0x32,0);
    fn_82BE67A0(param_1,param_5,0);
    fn_82BE6720(param_1,0x33,0);
    fn_82BE67E0(param_1,param_6,0);
    fn_82BE6720(param_1,0x34,0);
    fn_82BE67E0(param_1,param_7,0);
    fn_82BE6720(param_1,0x35,0);
    fn_82BE6760(param_1,param_8,0);
    fn_82BE6720(param_1,0x46,0);
    fn_82BE6760(param_1,in_stack_00000056,0);
    *(short *)(param_1 + 0x50) = *(short *)(param_1 + 0x50) + 1;
  }
  return 0;
}

