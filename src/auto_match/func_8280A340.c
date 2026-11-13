extern unsigned int lbl_8200133C;
extern unsigned int lbl_8201DFD4;
extern unsigned int lbl_8201DFD8;
extern unsigned int lbl_8201DFDC;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double fn_8280A340(short param_1)

{
  float fVar1;
  double dVar2;
  
  fVar1 = (float)(__int64)(short)(param_1 << 2);
  dVar2 = (double)(((fVar1 * fVar1 * lbl_8201DFDC + lbl_8201DFD8) * fVar1 * fVar1 + lbl_8201DFD4)
                  * fVar1);
  if ((param_1 + 0x2000U & 0x4000) == 0) {
    return dVar2;
  }
  return (double)(float)((double)lbl_8200133C / dVar2);
}

