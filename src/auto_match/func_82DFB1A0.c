extern unsigned int lbl_8200133C;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;


double fn_82DFB1A0(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = ABS(*(float *)(param_4 + 8));
  if (fVar1 < *(float *)(param_1 + 0x10)) {
    return (double)lbl_821AAD20;
  }
  fVar3 = lbl_8200133C;
  if (lbl_821AAD20 < *(float *)(param_4 + 8)) {
    fVar3 = lbl_82002AE0;
  }
  if (*(float *)(param_1 + 8) <= fVar1) {
    fVar2 = *(float *)(param_1 + 8) - *(float *)(param_1 + 0x10);
    fVar4 = *(float *)(param_1 + 0xc) * fVar2;
    return (double)((((lbl_82002AE0 - fVar4) / ((lbl_82002AE0 - *(float *)(param_1 + 0x10)) - fVar2)
                     ) * (fVar1 - *(float *)(param_1 + 8)) + fVar4) * fVar3);
  }
  return (double)((fVar1 - *(float *)(param_1 + 0x10)) * *(float *)(param_1 + 0xc) * fVar3);
}

