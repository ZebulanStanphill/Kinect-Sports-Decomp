typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_823AB478();
extern int fn_825126F0();
extern int fn_82521A10();
extern int fn_825269D0();
extern int iRam8327f790;
extern unsigned int lbl_83265988;
extern unsigned int lbl_832659AC;
extern unsigned int lbl_832659B0;
extern unsigned int lbl_832659C4;
extern unsigned int lbl_832659CD;
extern unsigned int lbl_832767C8;


void fn_82512610(int param_1,int param_2,char param_3,unsigned __int64 param_4)

{
  bool bVar1;
  
  bVar1 = false;
  if ((&lbl_83265988)[param_2] != param_1) {
    if ((&lbl_83265988)[param_2] != 0) {
      fn_825126F0(param_2,param_4);
    }
    (&lbl_83265988)[param_2] = param_1;
    bVar1 = true;
    *(unsigned char *)(param_2 + -0x7cd9a668) = *(unsigned char *)(param_1 + 0xd8);
    lbl_832659B0 = lbl_832659B0 + 1;
    lbl_832659AC = lbl_832659AC + 1;
  }
  lbl_832659CD = 1;
  if ((param_4 & 0xff) == 0) {
    if (param_3 != '\0') {
      fn_82521A10(lbl_832767C8,param_1,1);
    }
    if (bVar1) {
      lbl_832659C4 = fn_823AB478(param_1);
      if (iRam8327f790 != 0) {
        fn_825269D0(0x44,0);
      }
    }
  }
  return;
}

