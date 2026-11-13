extern unsigned int lbl_82002AE0;
extern float lbl_82005718;


double fn_8279A510(int *param_1)

{
  double dVar1;
  
  dVar1 = (double)((float)*(unsigned short *)(param_1[0x32] + 0x26) * lbl_82005718);
  if ((double)*(float *)(param_1[0x34] + 0x10) != (double)lbl_82002AE0) {
    dVar1 = (double)(float)((double)*(float *)(param_1[0x34] + 0x10) * dVar1);
  }
  if ((*(unsigned char *)(*param_1 + 0x13f) & 4) == 0) {
    return dVar1;
  }
  return (double)((float)((double)*(unsigned short *)(*param_1 + 0x13a) * dVar1) * lbl_82005718);
}

