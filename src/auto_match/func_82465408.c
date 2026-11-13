#define NAN(x) ((x) != (x))
extern int fn_824651F0();
extern int fn_82465328();
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_83265A28;


void fn_82465408(double param_1,int param_2)

{
  float fVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar6 = (double)ltcg_pool_0_0f;
  if ((double)*(float *)(param_2 + 0x2c) <= dVar6) {
    return;
  }
  iVar2 = fn_82465328();
  if (iVar2 == 0) {
    if (*(int *)(param_2 + 0x2c) == 0) {
      return;
    }
    dVar3 = (double)(float)((double)*(float *)(param_2 + 0x2c) - param_1);
    dVar5 = -dVar3;
    dVar4 = dVar6;
    if (*(float *)(&lbl_821954D8 +
                  ((unsigned int)(unsigned char)((dVar5 < dVar6) << 2) | (unsigned int)(NAN(dVar5) || NAN(dVar6)) << 2)) <
        0.0) {
      dVar4 = dVar3;
    }
    *(float *)(param_2 + 0x2c) = (float)dVar4;
    if (dVar4 != dVar6) {
      return;
    }
    fn_824651F0(param_2,param_2 + 0x28);
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    fVar1 = (*(float *)(param_2 + 0x34) - *(float *)(param_2 + 0x30)) *
            ((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) +
            *(float *)(param_2 + 0x30);
  }
  else {
    dVar4 = (double)(*(float *)(param_2 + 0x2c) - *(float *)(param_2 + 0x38));
    fVar1 = *(float *)(param_2 + 0x2c);
    if (*(float *)(&lbl_821954D8 +
                  ((unsigned int)(unsigned char)((dVar4 < dVar6) << 2) | (unsigned int)(NAN(dVar4) || NAN(dVar6)) << 2)) <
        0.0) {
      fVar1 = *(float *)(param_2 + 0x38);
    }
  }
  *(float *)(param_2 + 0x2c) = fVar1;
  return;
}

