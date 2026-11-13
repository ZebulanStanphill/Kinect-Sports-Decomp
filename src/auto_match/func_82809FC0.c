extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8201DFB0;
extern unsigned int lbl_8201DFB4;
extern unsigned int lbl_8201DFB8;
extern unsigned int lbl_8201DFBC;
extern unsigned int lbl_8201DFC0;
extern unsigned int lbl_8201DFC4;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double fn_82809FC0(unsigned short param_1)

{
  float fVar1;
  float fVar2;
  unsigned short uVar3;
  
  uVar3 = param_1 & 0xe000;
  fVar1 = (float)(__int64)(short)(param_1 << 2);
  fVar2 = fVar1 * fVar1;
  if ((param_1 & 0xe000) != 0) {
    if ((uVar3 == 0x2000) || (uVar3 == 0x4000)) {
      return -(double)(((fVar2 * lbl_8201DFC4 - lbl_8201DFC0) * fVar2 + lbl_8201DFBC) * fVar1);
    }
    if ((uVar3 == 0x6000) || (uVar3 == 0x8000)) {
      return -(double)((-(fVar2 * lbl_8201DFB8 - lbl_8201DFB4) * fVar2 - lbl_8201DFB0) * fVar2 +
                      lbl_82002AE0);
    }
    if (uVar3 != 0xe000) {
      return (double)(((fVar2 * lbl_8201DFC4 - lbl_8201DFC0) * fVar2 + lbl_8201DFBC) * fVar1);
    }
  }
  return (double)((-(fVar2 * lbl_8201DFB8 - lbl_8201DFB4) * fVar2 - lbl_8201DFB0) * fVar2 +
                 lbl_82002AE0);
}

