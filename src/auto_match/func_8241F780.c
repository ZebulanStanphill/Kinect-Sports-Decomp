extern unsigned int fStack_24;
extern unsigned int fStack_28;
extern unsigned int fStack_2c;
extern unsigned int fStack_30;
extern int fn_8235CDC8();
extern int fn_824E94F0();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821916FC;


void fn_8241F780(double param_1,int *param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float fStack_30;
  float fStack_2c;
  struct { float first; float second; } stack_pair_28;

  
  iVar2 = *param_2;
  if (param_2 == *(int **)(iVar2 + 0x2b20)) {
    iVar3 = fn_8235CDC8(iVar2,&stack_pair_28.first,&fStack_30);
    if (iVar3 != 0) {
      fVar1 = (float)((double)*(float *)(iVar2 + 0x2cbc) + param_1);
      *(float *)(iVar2 + 0x2cbc) = fVar1;
      *(unsigned int *)(iVar2 + 0x2cc0) = 1;
      if (lbl_821916FC < fVar1) {
        fn_824E94F0(-(double)(float)((double)fStack_30 * (double)lbl_8218E8E8 -
                                          (double)stack_pair_28.first),
                          -(double)(float)((double)fStack_2c * (double)lbl_8218E8E8 -
                                          (double)stack_pair_28.second),(double)fStack_30,(double)fStack_2c);
      }
    }
  }
  return;
}

