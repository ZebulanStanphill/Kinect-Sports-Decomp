extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82005344;
extern unsigned int lbl_8200D8A4;
extern unsigned int lbl_8200D8A8;
extern unsigned int lbl_8200D8AC;
extern unsigned int lbl_82021544;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_826EB5F0(double param_1,int param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = lbl_82002AE0;
  fVar1 = param_3[3];
  fVar2 = param_3[1];
  if (fVar1 < 0.0) {
    fVar1 = -fVar1;
  }
  if (fVar2 < 0.0) {
    fVar2 = -fVar2;
  }
  if (fVar2 <= fVar1) {
    fVar2 = fVar1;
  }
  fVar1 = param_3[2];
  fVar3 = *param_3;
  if (fVar1 < 0.0) {
    fVar1 = -fVar1;
  }
  if (fVar3 < 0.0) {
    fVar3 = -fVar3;
  }
  if (fVar1 < fVar3) {
    fVar1 = fVar3;
  }
  if (fVar2 < fVar1) {
    fVar2 = fVar1;
  }
  if (lbl_82021544 <= fVar2) {
    fVar1 = (float)(param_1 * (double)lbl_82005344 + (double)lbl_8200D8AC);
    if (fVar1 < lbl_8200D8A8) {
      fVar1 = lbl_8200D8A8;
    }
    *(float *)(param_2 + 0xc) = lbl_8200D8A4 / (fVar1 + fVar2);
  }
  else {
    *(float *)(param_2 + 0xc) = lbl_82002AE0;
  }
  *(float *)(param_2 + 0x10) = fVar4 / *(float *)(param_2 + 0xc);
  return;
}

