typedef unsigned char bool;
extern int fn_82BEA1F8();
extern int fn_82BEA230();
extern unsigned int lbl_831751CC;
extern unsigned int lbl_831751D0;
extern unsigned int lbl_831751D8;
extern unsigned int lbl_8322B180;
extern unsigned int lbl_8322B1BC;
extern unsigned int lbl_8322B1C0;


bool fn_82BE56D0(void)

{
  bool bVar1;
  
  fn_82BEA1F8(0xffffffff8322b184,0xffffffff820e9268);
  bVar1 = lbl_8322B180 == 0;
  if (bVar1) {
    lbl_831751D8 = 1;
    lbl_831751D0 = lbl_8322B1BC;
    lbl_831751CC = lbl_8322B1C0;
  }
  fn_82BEA230(0xffffffff8322b184,0xffffffff820e9268);
  return bVar1;
}

