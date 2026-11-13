extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_82005CCC;
extern unsigned int lbl_82027070;
extern float lbl_820288C0;
extern float lbl_8202EE48;
extern unsigned int lbl_8202EE4C;
extern unsigned int lbl_8202EE50;


void fn_8292EBC8(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = lbl_82005CCC;
  if ((*(unsigned int *)(param_1 + 4) & 0xfffffe3f) == 0x1a200013) {
    fVar1 = lbl_82027070;
  }
  *(float *)(param_1 + 0x80) = fVar1;
  fVar6 = lbl_8202EE48;
  fVar5 = lbl_82002C5C;
  fVar2 = *(float *)(param_1 + 0x30) * fVar1 + lbl_82002C5C;
  fVar3 = *(float *)(param_1 + 0x28) * lbl_820288C0 + lbl_82002C5C;
  fVar1 = lbl_82002AE0 / fVar1;
  fVar4 = *(float *)(param_1 + 0x24) * lbl_8202EE48 + lbl_82002C5C;
  *(float *)(param_1 + 0x84) = fVar1;
  fVar8 = lbl_8202EE50;
  fVar7 = lbl_8202EE4C;
  *(float *)(param_1 + 0x24) = (float)(__int64)(int)fVar4 * lbl_8202EE4C;
  *(float *)(param_1 + 0x28) = (float)(__int64)(int)fVar3 * fVar8;
  *(float *)(param_1 + 0x2c) =
       (float)(__int64)(int)(*(float *)(param_1 + 0x2c) * fVar6 + fVar5) * fVar7;
  *(float *)(param_1 + 0x30) = (float)(__int64)(int)fVar2 * fVar1;
  return;
}

