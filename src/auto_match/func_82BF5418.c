extern int fn_82BE6720();
extern int fn_82BE6760();
extern int fn_82BE67A0();
extern int fn_82BE67E0();
extern int fn_82BF4EE8();


unsigned __int64
fn_82BF5418(int param_1,unsigned char param_2,unsigned __int64 param_3,unsigned __int64 param_4,
             unsigned __int64 param_5,unsigned __int64 param_6)

{
  int iVar1;
  
  iVar1 = fn_82BF4EE8(param_1,0x19);
  if (iVar1 != 0) {
    fn_82BE6720(param_1,0xe0,0);
    fn_82BE67A0(param_1,0x18,0);
    fn_82BE6720(param_1,0x26,0);
    fn_82BE67A0(param_1,param_3,0);
    fn_82BE6720(param_1,0x15,0);
    fn_82BE67A0(param_1,param_4,0);
    fn_82BE6720(param_1,0x33,0);
    fn_82BE67E0(param_1,param_5,0);
    fn_82BE6720(param_1,0x1f,0);
    fn_82BE6720(param_1,param_2,0);
    fn_82BE6720(param_1,0x20,0);
    fn_82BE6760(param_1,param_6,0);
    *(short *)(param_1 + 0x52) = *(short *)(param_1 + 0x52) + 1;
  }
  return 0;
}

