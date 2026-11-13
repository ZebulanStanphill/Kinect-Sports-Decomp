extern unsigned int *auStack_110;
extern unsigned int *auStack_90;
extern unsigned int *auStack_c8;
extern int fn_828F1498();
extern int fn_82923C40();
extern int fn_82923DA0();
extern int fn_82A94368();
extern int fn_82C449C8();
extern unsigned int uStack_e8;
extern unsigned int uStack_ec;
extern unsigned int uStack_f0;


unsigned __int64
fn_828F2760(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,int param_4,unsigned __int64 param_5,
             unsigned __int64 param_6)

{
  unsigned __int64 uVar1;
  unsigned char auStack_110 [32];
  unsigned int uStack_f0;
  unsigned int uStack_ec;
  unsigned int uStack_e8;
  unsigned char auStack_c8 [56];
  unsigned char auStack_90 [144];
  
  fn_82C449C8(auStack_110);
  if (param_1 == 0) {
    fn_82923C40(auStack_110);
    uVar1 = 0xffffffff8876086c;
  }
  else {
    if (param_4 == 0) {
      uVar1 = 0xffffffff8876086c;
    }
    else {
      uVar1 = 1;
      if (param_1 == param_4) {
        uVar1 = 0x10001;
      }
      uVar1 = fn_82923DA0(auStack_110,&uStack_f0,param_4,param_5,param_6,0,uVar1);
      if (-1 < (int)uVar1) {
        fn_82A94368(*(unsigned int *)(param_4 + 0x18),0,auStack_90);
        uVar1 = fn_828F1498(param_1,param_2,param_3,uStack_f0,uStack_ec,uStack_e8,param_5,
                              auStack_c8);
        if (-1 < (int)uVar1) {
          uVar1 = 0;
        }
      }
    }
    fn_82923C40(auStack_110);
  }
  return uVar1;
}

