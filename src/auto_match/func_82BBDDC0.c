extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_820288C0;
extern unsigned int lbl_8202EE48;
extern unsigned int lbl_821AAD20;


unsigned int fn_82BBDDC0(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = *param_1;
  fVar2 = lbl_821AAD20;
  if ((lbl_821AAD20 <= fVar1) && (fVar2 = fVar1, lbl_82002AE0 < fVar1)) {
    fVar2 = lbl_82002AE0;
  }
  fVar1 = param_1[1];
  fVar4 = lbl_821AAD20;
  if ((lbl_821AAD20 <= fVar1) && (fVar4 = fVar1, lbl_82002AE0 < fVar1)) {
    fVar4 = lbl_82002AE0;
  }
  fVar1 = param_1[2];
  fVar3 = lbl_821AAD20;
  if ((lbl_821AAD20 <= fVar1) && (fVar3 = lbl_82002AE0, fVar1 <= lbl_82002AE0)) {
    fVar3 = fVar1;
  }
  return (((int)(fVar2 * lbl_8202EE48 + lbl_82002C5C) << 6 |
          (int)(fVar4 * lbl_820288C0 + lbl_82002C5C)) << 5 |
         (int)(fVar3 * lbl_8202EE48 + lbl_82002C5C)) & 0xffff;
}

