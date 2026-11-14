extern int sin();
extern float lbl_8219564C;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;


double fn_825CABA8(int param_1)

{
  float fVar1;
  
  fVar1 = ltcg_pool_0_0f;
  if (*(int *)(param_1 + 0x2c) != 0) {
    if (*(float *)(param_1 + 0x44) < *(float *)(param_1 + 0x48)) {
                    /* WARNING: Subroutine does not return */
      sin((double)((*(float *)(param_1 + 0x44) / *(float *)(param_1 + 0x48)) *
                                lbl_8219564C));
    }
    fVar1 = *(float *)(param_1 + 0x44) / *(float *)(param_1 + 0x40);
    fVar1 = -(fVar1 * fVar1 - lbl_821CA460) * *(float *)(param_1 + 0x38);
  }
  return (double)fVar1;
}

