extern unsigned int lbl_8200133C;
extern unsigned int lbl_8201DFC8;
extern unsigned int lbl_8201DFCC;
extern unsigned int lbl_8201DFD0;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double fn_8280A2D8(char param_1)

{
  float fVar1;
  double dVar2;
  
  fVar1 = (float)(__int64)(char)(param_1 << 2);
  dVar2 = (double)(((fVar1 * fVar1 * lbl_8201DFD0 + lbl_8201DFCC) * fVar1 * fVar1 + lbl_8201DFC8)
                  * fVar1);
  if ((param_1 + 0x20U & 0x40) == 0) {
    return dVar2;
  }
  return (double)(float)((double)lbl_8200133C / dVar2);
}

