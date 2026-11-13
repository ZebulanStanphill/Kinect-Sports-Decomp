extern unsigned int *puRam832635b8;
extern unsigned int lbl_832635B4;
extern unsigned int lbl_832635C0;
extern unsigned int lbl_832635C4;
extern unsigned int lbl_832635C8;
extern unsigned int lbl_832635CC;
extern unsigned int lbl_832635D0;
extern unsigned int uRam832635d4;
extern unsigned int uRam832635d8;


void fn_82F726A8(unsigned int *param_1,int param_2,unsigned int param_3,unsigned int param_4,
                  unsigned int param_5,unsigned int param_6)

{
  *param_1 = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  lbl_832635C4 = param_3;
  lbl_832635C0 = param_3;
  lbl_832635C8 = param_2;
  lbl_832635CC = param_4;
  if (param_2 == 0) {
    lbl_832635C8 = 0;
    lbl_832635CC = 0;
  }
  puRam832635b8 = param_1 + 0xb;
  lbl_832635B4 = param_1;
  lbl_832635D0 = param_6;
  uRam832635d4 = param_5;
  uRam832635d8 = 0;
  return;
}
