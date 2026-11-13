extern unsigned int *auStack_100;
extern unsigned int *auStack_90;
extern int fn_828F1B70();
extern int fn_82923B38();
extern int fn_82923D40();
extern int fn_829242C8();
extern int fn_82A94368();
extern unsigned int uStack_e4;
extern unsigned int uStack_e8;
extern unsigned int uStack_ec;
extern unsigned int uStack_f0;


unsigned __int64
fn_828F2880(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,int param_4,unsigned __int64 param_5,
             unsigned __int64 param_6)

{
  unsigned __int64 uVar1;
  unsigned char auStack_100 [16];
  unsigned int uStack_f0;
  unsigned int uStack_ec;
  unsigned int uStack_e8;
  unsigned int uStack_e4;
  unsigned char auStack_90 [144];
  
  fn_82923B38(auStack_100);
  if (param_1 == 0) {
    fn_82923D40(auStack_100);
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
      uVar1 = fn_829242C8(auStack_100,&uStack_f0,param_4,param_5,param_6,0,uVar1);
      if (-1 < (int)uVar1) {
        fn_82A94368(*(unsigned int *)(param_4 + 0x18),0,auStack_90);
        uVar1 = fn_828F1B70(param_1,param_2,param_3,uStack_f0,uStack_ec,uStack_e8,uStack_e4,
                              param_5);
        if (-1 < (int)uVar1) {
          uVar1 = 0;
        }
      }
    }
    fn_82923D40(auStack_100);
  }
  return uVar1;
}

