extern int fn_8267B890();
extern int fn_8267C498();
extern int fn_82770708();
extern int fn_82770E60();
extern unsigned int lbl_831E7E64;


void fn_82770FE8(unsigned int param_1,int param_2,unsigned int param_3,int param_4,
                  int param_5,int param_6,int param_7,int param_8)

{
  unsigned int uVar1;

  if (param_1 != 0 && param_3 != 0) {
    uVar1 = fn_8267B890(lbl_831E7E64,0x150,0);
    if (uVar1 != 0) {
      uVar1 = fn_82770708(uVar1,param_1,param_3,param_4,param_5,param_6,param_7,param_8);
    }
    else {
      uVar1 = 0;
    }
    fn_82770E60(uVar1,param_2);
    if (uVar1 != 0) {
      fn_8267C498(uVar1);
    }
  }
  return;
}
