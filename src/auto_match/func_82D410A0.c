extern int fn_82D40880();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82134BF8;
extern unsigned int lbl_8213856C;
extern unsigned int lbl_821AAD20;
extern unsigned char lbl_8317FFB0[];
extern unsigned int lbl_831819C8;


void fn_82D410A0(unsigned int *param_1,int param_2)

{
  char *pcVar1;
  double extraout_f1;
  
  *param_1 = &lbl_82134BF8;
  if (param_2 != 0) {
    param_1[3] = 0;
  }
  param_1[3] = 0x12;
  *param_1 = &lbl_8213856C;
  if (param_2 != 0) {
    pcVar1 = lbl_8317FFB0 + 0x50;
    if (lbl_831819C8 < lbl_821AAD20) {
      param_1 = (unsigned int *)fn_82D40880();
      *(float *)(pcVar1 + 0x19c8) = (float)((double)lbl_82002AE0 - extraout_f1);
    }
  }
  param_1[3] = 2;
  return;
}

