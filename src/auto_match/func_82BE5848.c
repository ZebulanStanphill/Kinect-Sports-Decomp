extern int fn_82BEA1F8();
extern int fn_82BEA230();
extern unsigned int lbl_831751CC;
extern unsigned int lbl_831751D0;
extern unsigned int lbl_831751D8;
extern unsigned int lbl_8322B180;
extern unsigned int lbl_8322B1BC;
extern unsigned int lbl_8322B1C0;


unsigned __int64 fn_82BE5848(unsigned char *param_1,unsigned char *param_2,int param_3)

{
  unsigned __int64 uVar1;
  
  uVar1 = 0;
  fn_82BEA1F8(0xffffffff8322b184,0xffffffff820e92ec);
  if ((lbl_8322B180 == 0) && (lbl_831751D8 != 0)) {
    lbl_831751D0 = param_1;
    if (param_1 == (unsigned char *)0x0) {
      lbl_831751D0 = lbl_8322B1BC;
    }
    lbl_831751CC = param_2;
    if (param_2 == (unsigned char *)0x0) {
      lbl_831751CC = lbl_8322B1C0;
    }
    uVar1 = 1;
    lbl_831751D8 = param_3;
  }
  fn_82BEA230(0xffffffff8322b184,0xffffffff820e92ec);
  return uVar1;
}

