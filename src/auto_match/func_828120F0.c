extern unsigned int *auStack_30;
extern int fn_82810328();
extern int fn_82810BE8();
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


double fn_828120F0(int param_1,unsigned int *param_2)

{
  float fVar1;
  double dVar2;
  double dVar3;
  unsigned int uStack_40;
  unsigned int uStack_3c;
  unsigned int uStack_38;
  unsigned char auStack_30 [24];
  
  uStack_40 = *param_2;
  uStack_3c = param_2[1];
  uStack_38 = param_2[2];
  dVar3 = (double)(float)param_2[3];
  fn_82810328(&uStack_40,param_1,auStack_30);
  dVar2 = (double)fn_82810BE8(auStack_30);
  fVar1 = lbl_821AAD20;
  if ((double)(float)((double)*(float *)(param_1 + 0xc) + dVar3) < dVar2) {
    fVar1 = (float)((double)(float)(dVar2 - (double)(float)param_2[3]) -
                   (double)*(float *)(param_1 + 0xc));
  }
  return (double)fVar1;
}

