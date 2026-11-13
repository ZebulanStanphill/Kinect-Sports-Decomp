extern int fn_824651F0();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;


void fn_82465298(double param_1,double param_2,double param_3,int param_4,unsigned int *param_5)

{
  unsigned int uVar1;
  int in_r8;
  
  uVar1 = *param_5;
  *(float *)(param_4 + 0x30) = (float)param_1;
  *(float *)(param_4 + 0x34) = (float)param_2;
  *(float *)(param_4 + 0x38) = (float)param_3;
  *(unsigned int *)(param_4 + 0x28) = uVar1;
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  *(float *)(param_4 + 0x2c) =
       (float)((double)(float)(param_2 - param_1) *
               (double)((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) + param_1);
  if (in_r8 != 0) {
    fn_824651F0(param_4,param_4 + 0x28);
  }
  return;
}

