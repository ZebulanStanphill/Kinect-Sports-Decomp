extern int fn_82809868();
extern float lbl_8201DD70;
extern unsigned int lbl_8201DD74;
extern unsigned int lbl_82196280;


double fn_827F4868(int param_1)

{
  float fVar1;
  short sVar2;
  
  if (*(float *)(param_1 + 0x30) < *(float *)(param_1 + 0x2c)) {
    sVar2 = *(short *)(param_1 + 0x22);
    fVar1 = *(float *)(param_1 + 0x30) / *(float *)(param_1 + 0x2c);
    if (sVar2 == 1) {
                    /* WARNING: Subroutine does not return */
      fn_82809868((double)(fVar1 * lbl_8201DD70));
    }
    if (sVar2 == 2) {
                    /* WARNING: Subroutine does not return */
      fn_82809868((double)((fVar1 - lbl_82196280) * lbl_8201DD70));
    }
    if (sVar2 == 3) {
                    /* WARNING: Subroutine does not return */
      fn_82809868((double)(fVar1 * lbl_8201DD74));
    }
    fVar1 = (fVar1 - lbl_82196280) * *(float *)(param_1 + 0x28) + *(float *)(param_1 + 0x24);
  }
  else {
    fVar1 = *(float *)(param_1 + 0x24);
  }
  return (double)fVar1;
}

