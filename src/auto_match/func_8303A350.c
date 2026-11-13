extern int fn_82F655D8();
extern unsigned int lbl_82002C40;
extern unsigned int lbl_82005730;
extern unsigned int lbl_820570D4;
extern unsigned int lbl_8217D2F8;
extern unsigned int lbl_8217D2FC;
extern unsigned int lbl_8217D300;
extern unsigned int uStack_1c;


void fn_8303A350(double param_1,int param_2)

{
  double dVar1;
  double dVar2;
  unsigned int uStack_1c;
  
  if ((*(char *)(param_2 + 0x4f) != '\0') || (param_1 != (double)*(float *)(param_2 + 0x48))) {
    if ((float)(param_1 - (double)lbl_8217D300) < 0.0) {
      param_1 = (double)lbl_8217D300;
    }
    dVar2 = (double)lbl_8217D2FC;
    if ((float)(param_1 - (double)lbl_8217D2FC) < 0.0) {
      dVar2 = param_1;
    }
    dVar1 = (double)fn_82F655D8(lbl_82002C40,(double)(float)(dVar2 * (double)lbl_8217D2F8));
    *(float *)(param_2 + 0x48) = (float)dVar2;
    *(unsigned int *)(param_2 + 0x2c) = 0x400;
    uStack_1c = (unsigned int)
                (__int64)
                ((double)(*(float *)(param_2 + 0x44) * (float)dVar1 * lbl_820570D4) + lbl_82005730);
    *(unsigned int *)(param_2 + 0x24) = uStack_1c;
    *(unsigned int *)(param_2 + 0x28) = uStack_1c;
  }
  return;
}

