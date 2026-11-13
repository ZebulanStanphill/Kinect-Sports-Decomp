extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8201DF98;
extern unsigned int lbl_8201DF9C;
extern unsigned int lbl_8201DFA0;
extern unsigned int lbl_8201DFA4;
extern unsigned int lbl_8201DFA8;
extern unsigned int lbl_8201DFAC;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_8280A3A8(char param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  unsigned char bVar3;
  
  bVar3 = param_1 + 0x20U & 0xc0;
  fVar2 = (float)(__int64)(char)(param_1 << 2);
  fVar1 = fVar2 * fVar2;
  fVar2 = ((fVar1 * lbl_8201DFAC - lbl_8201DFA8) * fVar1 + lbl_8201DFA4) * fVar2;
  fVar1 = (-(fVar1 * lbl_8201DFA0 - lbl_8201DF9C) * fVar1 - lbl_8201DF98) * fVar1 + lbl_82002AE0;
  if (bVar3 == 0) {
    *param_2 = fVar2;
    *param_3 = fVar1;
    return;
  }
  if (bVar3 == 0x40) {
    fVar2 = -fVar2;
  }
  else {
    if (bVar3 == 0x80) {
      *param_2 = -fVar2;
      fVar2 = -fVar1;
      goto code_r0x8280a458;
    }
    fVar1 = -fVar1;
  }
  *param_2 = fVar1;
code_r0x8280a458:
  *param_3 = fVar2;
  return;
}

