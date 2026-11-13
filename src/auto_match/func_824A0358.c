extern int fn_8225F160();
extern int fn_8225F3C0();
extern unsigned int lbl_821CA460;


void fn_824A0358(int param_1,int *param_2,int param_3)

{
  if (*param_2 == 0) {
    fn_8225F160();
    fn_8225F3C0();
    if (lbl_821CA460 <= (float)param_2[param_3 + 3]) {
      fn_8225F160();
      fn_8225F3C0();
      if ((float)param_2[param_3 + 3] < *(float *)(param_1 + 0x80) + lbl_821CA460) {
        *param_2 = param_3;
      }
    }
  }
  return;
}

