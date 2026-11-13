extern int fn_8263FB38();
extern int fn_82646390();
extern int fn_82646AF0();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8320A898;
extern unsigned int lbl_8320A89C;
extern unsigned int lbl_8320A8A8;
extern unsigned int lbl_8320A8B0;
extern unsigned int lbl_8320A8B4;
extern unsigned int lbl_8320A8B8;


void fn_82837690(unsigned __int64 param_1)

{
  if (lbl_8320A8B4 != 0) {
    if (lbl_8320A89C == 1) {
      if ((param_1 & 0xffffffff) == 0) {
        fn_8263FB38((double)lbl_82002AE0,lbl_8320A898,0x300,0,
                          *(unsigned int *)(&lbl_8320A8A8 + lbl_8320A8B8 * 4),0,0,0,0xffffffff8320a7f0
                         );
      }
      else {
        fn_8263FB38((double)lbl_82002AE0,lbl_8320A898,0x300,0,param_1,0,0,0,0xffffffff8320a7f0
                         );
      }
    }
    else {
      if (lbl_8320A8B0 != 0) {
        fn_82646AF0(lbl_8320A898);
      }
      if ((param_1 & 0xffffffff) == 0) {
        param_1 = (unsigned __int64)*(unsigned int *)(&lbl_8320A8A8 + lbl_8320A8B8 * 4);
      }
      fn_82646390((double)lbl_82002AE0,lbl_8320A898,0x300,0,param_1,0xffffffff8320a7f0);
    }
  }
  return;
}

