extern int fn_82230890();
extern int fn_8265C9E0();
extern int fn_8266E628();
extern int fn_82679FF0();
extern int fn_8267A280();
extern unsigned int lbl_831E7B2C;
extern unsigned int lbl_831E7B30;


void fn_8266EC60(void)

{
  int iVar1;
  
  if (lbl_831E7B2C == 0) {
    iVar1 = fn_8265C9E0(4);
    if (iVar1 == 0) {
      lbl_831E7B30 = 0;
    }
    else {
      lbl_831E7B30 = fn_8267A280();
    }
    fn_82230890();
    fn_82679FF0(0x1a00000,0x180);
    iVar1 = fn_8265C9E0(500);
    if (iVar1 == 0) {
      lbl_831E7B2C = 0;
    }
    else {
      lbl_831E7B2C = fn_8266E628();
    }
  }
  return;
}

