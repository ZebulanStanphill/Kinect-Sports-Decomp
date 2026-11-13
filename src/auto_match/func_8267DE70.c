extern int fn_8267BE38();
extern int fn_8267D6C8();
extern int fn_8267DD80();
extern unsigned int lbl_831E7E6C;


void fn_8267DE70(void)

{
  int iVar1;
  
  if (lbl_831E7E6C != 0) {
    fn_8267DD80(lbl_831E7E6C);
    iVar1 = lbl_831E7E6C;
    if (lbl_831E7E6C != 0) {
      fn_8267D6C8(lbl_831E7E6C);
      fn_8267BE38(iVar1);
    }
    lbl_831E7E6C = 0;
  }
  return;
}

