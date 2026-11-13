extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8201DF98;
extern unsigned int lbl_8201DF9C;
extern unsigned int lbl_8201DFA0;
extern unsigned int lbl_8201DFA4;
extern unsigned int lbl_8201DFA8;
extern unsigned int lbl_8201DFAC;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double fn_82809EB8(unsigned char param_1)

{
  float fVar1;
  float fVar2;
  unsigned char bVar3;
  
  bVar3 = param_1 & 0xe0;
  fVar1 = (float)(__int64)(char)(param_1 << 2);
  fVar2 = fVar1 * fVar1;
  if ((param_1 & 0xe0) != 0) {
    if ((bVar3 == 0x20) || (bVar3 == 0x40)) {
      return -(double)(((fVar2 * lbl_8201DFAC - lbl_8201DFA8) * fVar2 + lbl_8201DFA4) * fVar1);
    }
    if ((bVar3 == 0x60) || (bVar3 == 0x80)) {
      return -(double)((-(fVar2 * lbl_8201DFA0 - lbl_8201DF9C) * fVar2 - lbl_8201DF98) * fVar2 +
                      lbl_82002AE0);
    }
    if (bVar3 != 0xe0) {
      return (double)(((fVar2 * lbl_8201DFAC - lbl_8201DFA8) * fVar2 + lbl_8201DFA4) * fVar1);
    }
  }
  return (double)((-(fVar2 * lbl_8201DFA0 - lbl_8201DF9C) * fVar2 - lbl_8201DF98) * fVar2 +
                 lbl_82002AE0);
}

