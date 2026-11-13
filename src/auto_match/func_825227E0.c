extern int fn_82522838();
extern int fn_82522A48();
extern int fn_8280A620();
extern int fn_82A1F198();
extern unsigned int lbl_832767CC;
extern unsigned int lbl_83297844;


void fn_825227E0(unsigned __int64 param_1,unsigned __int64 param_2,int *param_3)

{
  unsigned __int64 in_r0;
  unsigned __int64 uVar1;
  
  if (*param_3 == 0) {
    if (lbl_832767CC == 0) {
      fn_82522838();
      if (lbl_832767CC == 0) {
        fn_82522838();
      }
    }
    fn_82522A48(lbl_832767CC,param_2);
    return;
  }
  if ((lbl_83297844 != 0) && ((unsigned __int64)lbl_83297844 == (param_2 & 0xffffffff))) {
    trapWord(0x1f,in_r0,0x16);
  }
  uVar1 = fn_8280A620(param_3[4],param_3[4],4,0);
  fn_82A1F198(param_2,0xffffffffffffffff,uVar1,4);
  return;
}

